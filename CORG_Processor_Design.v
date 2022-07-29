`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:43:01 07/03/2020 
// Design Name: 
// Module Name:    CORG_Processor_Design 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////

module Instruction_Memory(
 input[15:0] pc,
 output[15:0] current_instruction
);

 reg [15:0] instruction_memory [127:0];
 wire [7 : 0] rom_addr = pc[8 : 1];
 
 initial begin
	// Type your instruction list here
	
	instruction_memory[0]=16'b1100101100001000; //slti r3 8
	instruction_memory[1]=16'b1000000000100010; //andc r0 r1
	instruction_memory[2]=16'b1000011100100000; //addc rd r1

	instruction_memory[3]=16'b1101100100001000; // muli r1 8
	instruction_memory[4]=16'b1000000001100010; //andc r0 r3
	instruction_memory[5]=16'b1000011101100000; //addc rd r3

	instruction_memory[6]=16'b1001100000010100; //jal label
	instruction_memory[7]=16'b1000100101101000; //or r1 r3
	instruction_memory[8]=16'b1000000001000010; //andc r0 r2
	instruction_memory[9]=16'b1000011101000000; //addc rd r2

	instruction_memory[10]=16'b1101101011110000; // muli r2 -16
	instruction_memory[11]=16'b1000000000100010; //andc r0 r1
	instruction_memory[12]=16'b1000011100100000; //addc rd r1

	instruction_memory[13]=16'b1101100111110000; // muli r1 -16
	instruction_memory[14]=16'b1000000001100010; //andc r0 r3
	instruction_memory[15]=16'b1000011101100000; //addc rd r3

	instruction_memory[16]=16'b1100100100000000; //slti r1 0
	instruction_memory[17]=16'b1000000000100010; //andc r0 r1
	instruction_memory[18]=16'b1000011100100000; //addc rd r1

	instruction_memory[19]=16'b0001000000010110; //j exit

	instruction_memory[20]=16'b1000000000100010; //label: andc r0 r1

	instruction_memory[21]=16'b0001110100000000; //jr ra


	instruction_memory[22]=16'b1000100001100000; //exit: add r0 r3

	instruction_memory[23]=16'b0011111011111110; //sw sp -2
   
	
 end
 assign current_instruction =  instruction_memory[rom_addr]; 

endmodule

module GPRs(
 input    clk,
 // info about writing to reg
 input    reg_write_en,
 input  [2:0] reg_write_dest,
 input  [15:0] reg_write_data,
 
 // info about reading reg 1
 input  [2:0] reg_read_addr_1,
 output  [15:0] reg_read_data_1,
 
 // info about reading reg 2
 input  [2:0] reg_read_addr_2,
 output  [15:0] reg_read_data_2,
 
 // rd data for writing the result in rd to memory
 output [15:0] rd_data,
 
 // info about jr, jal and j
 input [15:0] ra_data,
 input jump,
 
 // check if reg1 == rd
 output [0:0] zero,
 
 // distinguishnig j, jal, jr (1 bit control bit, 4 bit opcode)
 input [4:0] code
);

 reg [15:0] reg_array [7:0]; // reg array for gprs. 0 for $zero , 5 for $ra, 6 for $sp, 7 for $rd
 integer i;
 
 
 initial begin
  for(i=0;i<8;i=i+1) begin // initialize regs to 0 and $sp to 128
   reg_array[i] <= 16'd0;
  end
  reg_array[6] <= 16'd128;
  
 end
 always @ (posedge clk ) begin
   if(reg_write_en) begin
    reg_array[reg_write_dest] <= reg_write_data; // in each posedge clk, write data to target reg, if reg_write_en is 1.
   end
	if (jump) begin
	 reg_array[5] <= (code == 5'b11001) ? ra_data:reg_array[5] ; // if jump == 1 and code == 11001 change the value of $ra (jal)
   end
 end
 

 assign reg_read_data_1 = reg_array[reg_read_addr_1];
 assign reg_read_data_2 = reg_array[reg_read_addr_2];
 assign zero = (reg_read_data_1 == reg_array[7]) ? 1'b1: 1'b0;
 assign rd_data = reg_array[7];
  
 initial begin
	$monitor("Reg\tUnsigned Value\tSigned Value\n\nReg0:\t%d\t\%d\nReg1:\t%d\t\%d\nReg2:\t%d\t\%d\nReg3:\t%d\t\%d\nReg4:\t%d\t\%d\nReg5:\t%d\t\%d\nReg6:\t%d\t\%d\nReg7:\t%d\t\%d", reg_array[0], $signed(reg_array[0]), reg_array[1], $signed(reg_array[1]), reg_array[2], $signed(reg_array[2]), reg_array[3], $signed(reg_array[3]), reg_array[4], $signed(reg_array[4]), reg_array[5], $signed(reg_array[5]), reg_array[6], $signed(reg_array[6]), reg_array[7], $signed(reg_array[7]));
 end
endmodule

module Data_Memory(
 input clk,
 // address input for reading and writing
 input [15:0]   mem_access_addr,
 
 // info about writing to mem
 input [15:0]   mem_write_data,
 input     mem_write_en,
 
  // info about reading mem
 input mem_read,
 output [15:0]   mem_read_data
);

 reg [15:0] data_memory [127:0];
 wire [7:0] ram_addr=mem_access_addr[7:0];

 integer i;
 initial begin
 for(i=0;i<128;i=i+1) 
	begin // initialize each memory cell to 0
		data_memory[i] <= 16'd0;
	end
 end

 
 always @(posedge clk) begin
  if (mem_write_en)
   data_memory[ram_addr] <= mem_write_data; // write data to memory if mem_write_en == 1
 end
 
 assign mem_read_data = (mem_read==1'b1) ? data_memory[ram_addr]: 16'd0; // read from memory if mem_read == 1

endmodule

module ALU(
 input  [15:0] src1,  //input 1
 input  [15:0] src2,  //input 2
 input  [2:0] alu_control, //alu_control to select the operation in ALU
 
 output reg [15:0] result  //result 
);
	
 always @(*)
  begin 
   case(alu_control)
   3'b000: result = src1 + src2; // add
   3'b001: result = src1 - src2; // sub
   3'b010: result = src1 * src2; // mul
   3'b011: result = src1<<src2;  // sl
   3'b100: result = src1>>src2;  // sr
   3'b101: result = src1 & src2; // and
   3'b110: result = src1 | src2; // or
   3'b111: begin 
		      if ($signed(src1)< $signed(src2)) result = 16'd1; // slt
		      else result = 16'd0;
           end
	3'bxxx:  result = {src2[7:0], 8'b00000000}; // lui
   default:result = src1 + src2; // add
   endcase
  end

endmodule

module alu_control( ALU_Cnt, ALUOp, Opcode, FunctionCode);
 output reg[2:0] ALU_Cnt;
 input [2:0] ALUOp;
 input [4:0] FunctionCode;
 input [3:0] Opcode;
 wire [6:0] ALUControlIn;
 assign ALUControlIn = (Opcode == 4'b1000)? {2'b00,FunctionCode} :{ALUOp,Opcode};
 always @(ALUControlIn)
 
 casex (ALUControlIn)
   7'b0000000: ALU_Cnt=3'b000; //add
	7'b1010101: ALU_Cnt=3'b000;
	7'b0111111: ALU_Cnt=3'b000;
	7'b0110011: ALU_Cnt=3'b000;
	
   7'b0001101: ALU_Cnt=3'b001; // sub
	
   7'b0000101: ALU_Cnt=3'b010; //mul
	7'b0011101: ALU_Cnt=3'b010;
	
	7'bx101010: ALU_Cnt=3'b011; //sl
	
	7'bx101110: ALU_Cnt=3'bxxx;
	
   7'bx100110: ALU_Cnt=3'b100; //sr
	
	7'b0000010: ALU_Cnt=3'b101; // and
	
   7'b0001000: ALU_Cnt=3'b110; // or
	7'b1111011: ALU_Cnt=3'b110;
   
   
   7'b0001010: ALU_Cnt=3'b111; // slt
	7'b0001100: ALU_Cnt=3'b111;
   
  default: ALU_Cnt=3'b000;     // add
  endcase
endmodule

module Control_Unit(
      input[3:0] opcode, [4:0] function_code, // opcode and function code
      output reg[2:0] alu_op, // alu_op code
      output reg jump, mem_read, mem_write, alu_src, reg_write, branch // control signals   
);


 always @(*)
  begin
   case(opcode) 
    4'b1000:  // R Type
    begin
		case(function_code)
		 5'b00000: // Add
			begin
			 alu_src = 1'b0;
			 reg_write = 1'b1;
			 mem_read = 1'b0;
			 mem_write = 1'b0;
			 jump = 1'b0;
			 branch = 1'b0;
			 alu_op = 3'b100;	 		    
			end
			
		 5'b00010: // And
			begin
			 alu_src = 1'b0;
			 reg_write = 1'b1;
			 mem_read = 1'b0;
			 mem_write = 1'b0;
			 jump = 1'b0;
			 branch = 1'b0;
			 alu_op = 3'b100;	 		    
			end
			
		 5'b01101: // Sub
			begin
			 alu_src = 1'b0;
			 reg_write = 1'b1;
			 mem_read = 1'b0;
			 mem_write = 1'b0;
			 jump = 1'b0;
			 branch = 1'b0;
			 alu_op = 3'b100;	 		    
			end
			
		 5'b01000: // Or
			begin
			 alu_src = 1'b0;
			 reg_write = 1'b1;
			 mem_read = 1'b0;
			 mem_write = 1'b0;
			 jump = 1'b0;
			 branch = 1'b0;
			 alu_op = 3'b100;	 		    
			end
			
		 5'b01010: // Slt
			begin
			 alu_src = 1'b0;
			 reg_write = 1'b1;
			 mem_read = 1'b0;
			 mem_write = 1'b0;
			 jump = 1'b0;
			 branch = 1'b0;
			 alu_op = 3'b100;	 		    
			end
			
		 5'b00101: // Mul
			begin
			 alu_src = 1'b0;
			 reg_write = 1'b1;
			 mem_read = 1'b0;
			 mem_write = 1'b0;
			 jump = 1'b0;
			 branch = 1'b0;
			 alu_op = 3'b100;	 		    
			end
	
		default: 
		begin
			 alu_src = 1'b0;
			 reg_write = 1'b1;
			 mem_read = 1'b0;
			 mem_write = 1'b0;
			 jump = 1'b0;
			 branch = 1'b0;
			 alu_op = 3'b100;
		end
	 endcase
	end
	
	        // I Type
			  
   4'b1101:  // Muli
   begin
    alu_src = 1'b1;
	 reg_write = 1'b1;
	 mem_read = 1'b0;
	 mem_write = 1'b0;
	 jump = 1'b0;
	 branch = 1'b0;
	 alu_op = 3'b001;
   end
	
   4'b1100:  // Slti
   begin
    alu_src = 1'b1;
	 reg_write = 1'b1;
	 mem_read = 1'b0;
	 mem_write = 1'b0;
	 jump = 1'b0;
	 branch = 1'b0;
	 alu_op = 3'b000;
   end
	
   4'b1110:  // lui
   begin
    alu_src = 1'b1;
	 reg_write = 1'b1;
	 mem_read = 1'b0;
	 mem_write = 1'b0;
	 jump = 1'b0;
	 branch = 1'b0;
	 alu_op = 3'bx10;
   end
	
   4'b1010:  // sll
   begin
    alu_src = 1'b1;
	 reg_write = 1'b1;
	 mem_read = 1'b0;
	 mem_write = 1'b0;
	 jump = 1'b0;
	 branch = 1'b0;
	 alu_op = 3'bx10;
   end
	
   4'b0110:  // srl
   begin
    alu_src = 1'b1;
	 reg_write = 1'b1;
	 mem_read = 1'b0;
	 mem_write = 1'b0;
	 jump = 1'b0;
	 branch = 1'b0;
	 alu_op = 3'bx10; 
   end
	
   4'b1111:  // lw
   begin
    alu_src = 1'b1;
	 reg_write = 1'b1;
	 mem_read = 1'b1;
	 mem_write = 1'b0;
	 jump = 1'b0;
	 branch = 1'b0;
	 alu_op = 3'b011;
   end
	
   4'b0011:  // sw
   begin
    alu_src = 1'b1;
	 reg_write = 1'b0;
	 mem_read = 1'b0;
	 mem_write = 1'b1;
	 jump = 1'b0;
	 branch = 1'b0;
	 alu_op = 3'b011;
   end
	
   4'b0001:  // j and jr
   begin
    alu_src = 1'bx;
	 reg_write = 1'b0;
	 mem_read = 1'bx;
	 mem_write = 1'b0;
	 jump = 1'b1;
	 branch = 1'bx;
	 alu_op = 3'bxxx; 
   end
	
   4'b0000:  // beq and bne
   begin
    alu_src = 1'b0;
	 reg_write = 1'b0;
	 mem_read = 1'bx;
	 mem_write = 1'b0;
	 jump = 1'b0;
	 branch = 1'b1;
	 alu_op = 3'b000;
   end   
	
	4'b1011:  // ori
   begin
    alu_src = 1'b1;
	 reg_write = 1'b1;
	 mem_read = 1'b0;
	 mem_write = 1'b0;
	 jump = 1'b0;
	 branch = 1'b0;
	 alu_op = 3'b111;
   end   
	
	4'b0101:  // addi
   begin
    alu_src = 1'b1;
	 reg_write = 1'b1;
	 mem_read = 1'b0;
	 mem_write = 1'b0;
	 jump = 1'b0;
	 branch = 1'b0;
	 alu_op = 3'b101;
   end 
	
	4'b1001:  // jal
   begin
    alu_src = 1'bx;
	 reg_write = 1'b1;
	 mem_read = 1'bx;
	 mem_write = 1'b0;
	 jump = 1'b1;
	 branch = 1'bx;
	 alu_op = 3'bxxx;
   end 
	
 default:   // add
	begin
    alu_src = 1'b0;
	 reg_write = 1'b1;
	 mem_read = 1'b0;
	 mem_write = 1'b0;
	 jump = 1'b0;
	 branch = 1'b0;
	 alu_op = 3'b100;
   end
 endcase
 end

endmodule



module Datapath_Unit(
 input clk,
 input jump,mem_read,mem_write,alu_src,reg_write, branch, 
 input[2:0] alu_op,
 output[3:0] opcode,
 output [4:0] functionCode
);
 reg  [15:0] pc_current;
 wire [15:0] pc_current_ra;
 wire [15:0] pc_next,pc2;
 wire [15:0] instr;
 wire [2:0] reg_write_dest;
 wire [15:0] reg_write_data;
 wire [2:0] reg_read_addr_1;
 wire [15:0] reg_read_data_1;
 wire [2:0] reg_read_addr_2;
 wire [15:0] reg_read_data_2;
 wire [15:0] ext_im,read_data2;
 wire [2:0] ALU_Control;
 wire [15:0] ALU_out;
 wire zero_flag;
 wire [15:0] PC_j, PC_beq, PC_2beq,PC_2bne,PC_bne;
 wire beq_control;
 wire [7:0] jump_shift;
 wire [15:0] mem_read_data;
 wire control_bit;
 wire [15:0] rd_data;
 
 // PC 
 initial begin
  pc_current <= 16'd0;
 end
 always @(posedge clk)
 begin 
   pc_current <= pc_next; // Assign next instruction in each posedge clk
 end
 
 // assign probable pc
 assign pc2 = pc_current + 16'd2;
 assign pc_current_ra = pc_current + 16'd0;
 
 // assign function code and control bit
 assign functionCode = instr[4:0];
 assign control_bit = instr[11];
 
 // fetch instruction
 Instruction_Memory im(.pc(pc_current),.current_instruction(instr));
 
 // take jump imm shifted by 1
 assign jump_shift = {instr[6:0],1'b0};
 
 // select reg_dest according to control bit
 assign reg_write_dest = (control_bit==1'b1) ? 3'b111 :instr[7:5];
 
 // select src1 reg and src2 reg
 assign reg_read_addr_1 = instr[10:8];
 assign reg_read_addr_2 = instr[7:5]; 

 // call GPRS module to take input and write output
 GPRs reg_file
 (
  .clk(clk),
  .reg_write_en(reg_write),
  .reg_write_dest(reg_write_dest),
  .reg_write_data(reg_write_data),
  .reg_read_addr_1(reg_read_addr_1),
  .reg_read_data_1(reg_read_data_1),
  .reg_read_addr_2(reg_read_addr_2),
  .reg_read_data_2(reg_read_data_2),
  .zero(zero_flag),
  .ra_data(pc_current_ra),
  .jump(jump),
  .code({control_bit,instr[15:12]}),
  .rd_data(rd_data)
 );
 // extend immediate
 assign ext_im = {{8{instr[7]}},instr[7:0]};  
 
 // call alu control unit and take alu control code
 alu_control ALU_Control_unit(.ALUOp(alu_op),.Opcode(instr[15:12]),.ALU_Cnt(ALU_Control),.FunctionCode(functionCode));
 
 // change the src2 data if the instruction is I type
 assign read_data2 = (alu_src==1'b1) ? ext_im : reg_read_data_2;
 
 // call ALU module and do the calculations
 ALU alu_unit(.src1(reg_read_data_1),.src2(read_data2),.alu_control(ALU_Control),.result(ALU_out));
 
 // PC beq and bne add in a probable scenerio
 assign PC_beq = pc2 + {ext_im[15:0]};
 assign PC_bne = pc2 + {ext_im[14:0]};
 
 // beq and control
 assign beq_control = branch & zero_flag;
 assign bne_control = branch & (~zero_flag);
 
 // If beq control == 1 then change PC
 assign PC_2beq = (beq_control==1'b1) ? PC_beq : pc2;
 // If bne control == 1 then change PC
 assign PC_2bne = (bne_control==1'b1) ? PC_bne : PC_2beq;
 // If jump == 1 then change PC
 assign PC_j = ({control_bit,instr[15:12]} == 5'b10001)? reg_read_data_1 + 16'd2:{pc2[15:8],jump_shift};
 // PC_next
 assign pc_next = (jump == 1'b1) ? PC_j :  PC_2bne;
 
 
 /// Data memory
  Data_Memory dm
   (
    .clk(clk),
    .mem_access_addr(ALU_out),
    .mem_write_data(rd_data),
    .mem_write_en(mem_write),
    .mem_read(mem_read),
    .mem_read_data(mem_read_data)
   );
 

 assign opcode = instr[15:12];
  // write back
 assign reg_write_data = ({alu_op,opcode} == 7'b0111111)?  mem_read_data: ALU_out;

 
endmodule


module Risc_16_bit(
 input clk
);
 wire jump,mem_read,mem_write,alu_src,reg_write, branch;
 wire[2:0] alu_op;
 wire [3:0] opcode;
 wire [4:0] functionCode;
 // Datapath
 Datapath_Unit DU
 (
  .clk(clk),
  .jump(jump),
  .branch(branch),
  .mem_read(mem_read),
  .mem_write(mem_write),
  .alu_src(alu_src),
  .reg_write(reg_write),
  .alu_op(alu_op),
  .opcode(opcode),
  .functionCode(functionCode)
 );
 // control unit
 Control_Unit control
 (
  .opcode(opcode),
  .function_code(functionCode),
  .alu_op(alu_op),
  .jump(jump),
  .branch,
  .mem_read(mem_read),
  .mem_write(mem_write),
  .alu_src(alu_src),
  .reg_write(reg_write)
 );

endmodule
