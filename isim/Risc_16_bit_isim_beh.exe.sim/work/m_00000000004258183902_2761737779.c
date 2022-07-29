/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "Reg\tUnsigned Value\tSigned Value\n\nReg0:\t%d\t%d\nReg1:\t%d\t%d\nReg2:\t%d\t%d\nReg3:\t%d\t%d\nReg4:\t%d\t%d\nReg5:\t%d\t%d\nReg6:\t%d\t%d\nReg7:\t%d\t%d";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {2, 0};
static int ng4[] = {3, 0};
static int ng5[] = {4, 0};
static int ng6[] = {5, 0};
static int ng7[] = {6, 0};
static int ng8[] = {7, 0};
static const char *ng9 = "C:/Users/MUSTAFA/Desktop/Codes/CORG_Processor_Design/CORG_Processor_Design.v";
static int ng10[] = {8, 0};
static unsigned int ng11[] = {0U, 0U};
static unsigned int ng12[] = {128U, 0U};
static unsigned int ng13[] = {25U, 0U};
static unsigned int ng14[] = {1U, 0U};

void Monitor_131_7(char *);
void Monitor_131_7(char *);


static void Monitor_131_7_Func(char *t0)
{
    char t4[8];
    char t16[8];
    char t27[8];
    char t39[8];
    char t50[8];
    char t62[8];
    char t73[8];
    char t85[8];
    char t96[8];
    char t108[8];
    char t119[8];
    char t131[8];
    char t142[8];
    char t154[8];
    char t165[8];
    char t177[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t13;
    char *t14;
    char *t15;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t36;
    char *t37;
    char *t38;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    char *t59;
    char *t60;
    char *t61;
    char *t63;
    char *t64;
    char *t65;
    char *t66;
    char *t67;
    char *t68;
    char *t69;
    char *t70;
    char *t71;
    char *t72;
    char *t74;
    char *t75;
    char *t76;
    char *t77;
    char *t78;
    char *t79;
    char *t80;
    char *t82;
    char *t83;
    char *t84;
    char *t86;
    char *t87;
    char *t88;
    char *t89;
    char *t90;
    char *t91;
    char *t92;
    char *t93;
    char *t94;
    char *t95;
    char *t97;
    char *t98;
    char *t99;
    char *t100;
    char *t101;
    char *t102;
    char *t103;
    char *t105;
    char *t106;
    char *t107;
    char *t109;
    char *t110;
    char *t111;
    char *t112;
    char *t113;
    char *t114;
    char *t115;
    char *t116;
    char *t117;
    char *t118;
    char *t120;
    char *t121;
    char *t122;
    char *t123;
    char *t124;
    char *t125;
    char *t126;
    char *t128;
    char *t129;
    char *t130;
    char *t132;
    char *t133;
    char *t134;
    char *t135;
    char *t136;
    char *t137;
    char *t138;
    char *t139;
    char *t140;
    char *t141;
    char *t143;
    char *t144;
    char *t145;
    char *t146;
    char *t147;
    char *t148;
    char *t149;
    char *t151;
    char *t152;
    char *t153;
    char *t155;
    char *t156;
    char *t157;
    char *t158;
    char *t159;
    char *t160;
    char *t161;
    char *t162;
    char *t163;
    char *t164;
    char *t166;
    char *t167;
    char *t168;
    char *t169;
    char *t170;
    char *t171;
    char *t172;
    char *t174;
    char *t175;
    char *t176;
    char *t178;
    char *t179;
    char *t180;
    char *t181;
    char *t182;
    char *t183;
    char *t184;

LAB0:    t1 = (t0 + 3368);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t0 + 3368);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 3368);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t4, 16, t3, t7, t10, 2, 1, t11, 32, 1);
    t13 = (t0 + 3368);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t17 = (t0 + 3368);
    t18 = (t17 + 72U);
    t19 = *((char **)t18);
    t20 = (t0 + 3368);
    t21 = (t20 + 64U);
    t22 = *((char **)t21);
    t23 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t16, 16, t15, t19, t22, 2, 1, t23, 32, 1);
    t24 = (t0 + 3368);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t28 = (t0 + 3368);
    t29 = (t28 + 72U);
    t30 = *((char **)t29);
    t31 = (t0 + 3368);
    t32 = (t31 + 64U);
    t33 = *((char **)t32);
    t34 = ((char*)((ng2)));
    xsi_vlog_generic_get_array_select_value(t27, 16, t26, t30, t33, 2, 1, t34, 32, 1);
    t36 = (t0 + 3368);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    t40 = (t0 + 3368);
    t41 = (t40 + 72U);
    t42 = *((char **)t41);
    t43 = (t0 + 3368);
    t44 = (t43 + 64U);
    t45 = *((char **)t44);
    t46 = ((char*)((ng2)));
    xsi_vlog_generic_get_array_select_value(t39, 16, t38, t42, t45, 2, 1, t46, 32, 1);
    t47 = (t0 + 3368);
    t48 = (t47 + 56U);
    t49 = *((char **)t48);
    t51 = (t0 + 3368);
    t52 = (t51 + 72U);
    t53 = *((char **)t52);
    t54 = (t0 + 3368);
    t55 = (t54 + 64U);
    t56 = *((char **)t55);
    t57 = ((char*)((ng3)));
    xsi_vlog_generic_get_array_select_value(t50, 16, t49, t53, t56, 2, 1, t57, 32, 1);
    t59 = (t0 + 3368);
    t60 = (t59 + 56U);
    t61 = *((char **)t60);
    t63 = (t0 + 3368);
    t64 = (t63 + 72U);
    t65 = *((char **)t64);
    t66 = (t0 + 3368);
    t67 = (t66 + 64U);
    t68 = *((char **)t67);
    t69 = ((char*)((ng3)));
    xsi_vlog_generic_get_array_select_value(t62, 16, t61, t65, t68, 2, 1, t69, 32, 1);
    t70 = (t0 + 3368);
    t71 = (t70 + 56U);
    t72 = *((char **)t71);
    t74 = (t0 + 3368);
    t75 = (t74 + 72U);
    t76 = *((char **)t75);
    t77 = (t0 + 3368);
    t78 = (t77 + 64U);
    t79 = *((char **)t78);
    t80 = ((char*)((ng4)));
    xsi_vlog_generic_get_array_select_value(t73, 16, t72, t76, t79, 2, 1, t80, 32, 1);
    t82 = (t0 + 3368);
    t83 = (t82 + 56U);
    t84 = *((char **)t83);
    t86 = (t0 + 3368);
    t87 = (t86 + 72U);
    t88 = *((char **)t87);
    t89 = (t0 + 3368);
    t90 = (t89 + 64U);
    t91 = *((char **)t90);
    t92 = ((char*)((ng4)));
    xsi_vlog_generic_get_array_select_value(t85, 16, t84, t88, t91, 2, 1, t92, 32, 1);
    t93 = (t0 + 3368);
    t94 = (t93 + 56U);
    t95 = *((char **)t94);
    t97 = (t0 + 3368);
    t98 = (t97 + 72U);
    t99 = *((char **)t98);
    t100 = (t0 + 3368);
    t101 = (t100 + 64U);
    t102 = *((char **)t101);
    t103 = ((char*)((ng5)));
    xsi_vlog_generic_get_array_select_value(t96, 16, t95, t99, t102, 2, 1, t103, 32, 1);
    t105 = (t0 + 3368);
    t106 = (t105 + 56U);
    t107 = *((char **)t106);
    t109 = (t0 + 3368);
    t110 = (t109 + 72U);
    t111 = *((char **)t110);
    t112 = (t0 + 3368);
    t113 = (t112 + 64U);
    t114 = *((char **)t113);
    t115 = ((char*)((ng5)));
    xsi_vlog_generic_get_array_select_value(t108, 16, t107, t111, t114, 2, 1, t115, 32, 1);
    t116 = (t0 + 3368);
    t117 = (t116 + 56U);
    t118 = *((char **)t117);
    t120 = (t0 + 3368);
    t121 = (t120 + 72U);
    t122 = *((char **)t121);
    t123 = (t0 + 3368);
    t124 = (t123 + 64U);
    t125 = *((char **)t124);
    t126 = ((char*)((ng6)));
    xsi_vlog_generic_get_array_select_value(t119, 16, t118, t122, t125, 2, 1, t126, 32, 1);
    t128 = (t0 + 3368);
    t129 = (t128 + 56U);
    t130 = *((char **)t129);
    t132 = (t0 + 3368);
    t133 = (t132 + 72U);
    t134 = *((char **)t133);
    t135 = (t0 + 3368);
    t136 = (t135 + 64U);
    t137 = *((char **)t136);
    t138 = ((char*)((ng6)));
    xsi_vlog_generic_get_array_select_value(t131, 16, t130, t134, t137, 2, 1, t138, 32, 1);
    t139 = (t0 + 3368);
    t140 = (t139 + 56U);
    t141 = *((char **)t140);
    t143 = (t0 + 3368);
    t144 = (t143 + 72U);
    t145 = *((char **)t144);
    t146 = (t0 + 3368);
    t147 = (t146 + 64U);
    t148 = *((char **)t147);
    t149 = ((char*)((ng7)));
    xsi_vlog_generic_get_array_select_value(t142, 16, t141, t145, t148, 2, 1, t149, 32, 1);
    t151 = (t0 + 3368);
    t152 = (t151 + 56U);
    t153 = *((char **)t152);
    t155 = (t0 + 3368);
    t156 = (t155 + 72U);
    t157 = *((char **)t156);
    t158 = (t0 + 3368);
    t159 = (t158 + 64U);
    t160 = *((char **)t159);
    t161 = ((char*)((ng7)));
    xsi_vlog_generic_get_array_select_value(t154, 16, t153, t157, t160, 2, 1, t161, 32, 1);
    t162 = (t0 + 3368);
    t163 = (t162 + 56U);
    t164 = *((char **)t163);
    t166 = (t0 + 3368);
    t167 = (t166 + 72U);
    t168 = *((char **)t167);
    t169 = (t0 + 3368);
    t170 = (t169 + 64U);
    t171 = *((char **)t170);
    t172 = ((char*)((ng8)));
    xsi_vlog_generic_get_array_select_value(t165, 16, t164, t168, t171, 2, 1, t172, 32, 1);
    t174 = (t0 + 3368);
    t175 = (t174 + 56U);
    t176 = *((char **)t175);
    t178 = (t0 + 3368);
    t179 = (t178 + 72U);
    t180 = *((char **)t179);
    t181 = (t0 + 3368);
    t182 = (t181 + 64U);
    t183 = *((char **)t182);
    t184 = ((char*)((ng8)));
    xsi_vlog_generic_get_array_select_value(t177, 16, t176, t180, t183, 2, 1, t184, 32, 1);
    xsi_vlogfile_write(1, 0, 3, ng0, 17, t0, (char)118, t4, 16, (char)119, t16, 16, (char)118, t27, 16, (char)119, t39, 16, (char)118, t50, 16, (char)119, t62, 16, (char)118, t73, 16, (char)119, t85, 16, (char)118, t96, 16, (char)119, t108, 16, (char)118, t119, 16, (char)119, t131, 16, (char)118, t142, 16, (char)119, t154, 16, (char)118, t165, 16, (char)119, t177, 16);

LAB1:    return;
}

static void Initial_108_0(char *t0)
{
    char t5[8];
    char t14[8];
    char t15[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    int t27;
    char *t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    unsigned int t33;
    int t34;
    int t35;

LAB0:    xsi_set_current_line(108, ng9);

LAB2:    xsi_set_current_line(109, ng9);
    xsi_set_current_line(109, ng9);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3528);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB3:    t1 = (t0 + 3528);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng10)));
    memset(t5, 0, 8);
    xsi_vlog_signed_less(t5, 32, t3, 32, t4, 32);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB4;

LAB5:    xsi_set_current_line(112, ng9);
    t1 = ((char*)((ng12)));
    t2 = (t0 + 3368);
    t3 = (t0 + 3368);
    t4 = (t3 + 72U);
    t6 = *((char **)t4);
    t12 = (t0 + 3368);
    t13 = (t12 + 64U);
    t16 = *((char **)t13);
    t17 = ((char*)((ng7)));
    xsi_vlog_generic_convert_array_indices(t5, t14, t6, t16, 2, 1, t17, 32, 1);
    t18 = (t5 + 4);
    t7 = *((unsigned int *)t18);
    t27 = (!(t7));
    t19 = (t14 + 4);
    t8 = *((unsigned int *)t19);
    t30 = (!(t8));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB9;

LAB10:
LAB1:    return;
LAB4:    xsi_set_current_line(109, ng9);

LAB6:    xsi_set_current_line(110, ng9);
    t12 = ((char*)((ng11)));
    t13 = (t0 + 3368);
    t16 = (t0 + 3368);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = (t0 + 3368);
    t20 = (t19 + 64U);
    t21 = *((char **)t20);
    t22 = (t0 + 3528);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    xsi_vlog_generic_convert_array_indices(t14, t15, t18, t21, 2, 1, t24, 32, 1);
    t25 = (t14 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (!(t26));
    t28 = (t15 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB7;

LAB8:    xsi_set_current_line(109, ng9);
    t1 = (t0 + 3528);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng2)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t3, 32, t4, 32);
    t6 = (t0 + 3528);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    goto LAB3;

LAB7:    t32 = *((unsigned int *)t14);
    t33 = *((unsigned int *)t15);
    t34 = (t32 - t33);
    t35 = (t34 + 1);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, *((unsigned int *)t15), t35, 0LL);
    goto LAB8;

LAB9:    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t14);
    t34 = (t9 - t10);
    t35 = (t34 + 1);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, *((unsigned int *)t14), t35, 0LL);
    goto LAB10;

}

static void Always_115_1(char *t0)
{
    char t13[8];
    char t14[8];
    char t33[8];
    char t54[8];
    char t62[8];
    char t63[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    int t24;
    char *t25;
    unsigned int t26;
    int t27;
    int t28;
    unsigned int t29;
    unsigned int t30;
    int t31;
    int t32;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t64;
    char *t65;
    char *t66;
    char *t67;
    char *t68;
    char *t69;
    char *t70;
    char *t71;
    unsigned int t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;

LAB0:    t1 = (t0 + 4696U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(115, ng9);
    t2 = (t0 + 6504);
    *((int *)t2) = 1;
    t3 = (t0 + 4728);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(115, ng9);

LAB5:    xsi_set_current_line(116, ng9);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:
LAB8:    xsi_set_current_line(119, ng9);
    t2 = (t0 + 2648U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB12;

LAB13:
LAB14:    goto LAB2;

LAB6:    xsi_set_current_line(116, ng9);

LAB9:    xsi_set_current_line(117, ng9);
    t11 = (t0 + 1528U);
    t12 = *((char **)t11);
    t11 = (t0 + 3368);
    t15 = (t0 + 3368);
    t16 = (t15 + 72U);
    t17 = *((char **)t16);
    t18 = (t0 + 3368);
    t19 = (t18 + 64U);
    t20 = *((char **)t19);
    t21 = (t0 + 1368U);
    t22 = *((char **)t21);
    xsi_vlog_generic_convert_array_indices(t13, t14, t17, t20, 2, 1, t22, 3, 2);
    t21 = (t13 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (!(t23));
    t25 = (t14 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (!(t26));
    t28 = (t24 && t27);
    if (t28 == 1)
        goto LAB10;

LAB11:    goto LAB8;

LAB10:    t29 = *((unsigned int *)t13);
    t30 = *((unsigned int *)t14);
    t31 = (t29 - t30);
    t32 = (t31 + 1);
    xsi_vlogvar_wait_assign_value(t11, t12, 0, *((unsigned int *)t14), t32, 0LL);
    goto LAB11;

LAB12:    xsi_set_current_line(119, ng9);

LAB15:    xsi_set_current_line(120, ng9);
    t4 = (t0 + 2968U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng13)));
    memset(t33, 0, 8);
    t11 = (t5 + 4);
    t12 = (t4 + 4);
    t23 = *((unsigned int *)t5);
    t26 = *((unsigned int *)t4);
    t29 = (t23 ^ t26);
    t30 = *((unsigned int *)t11);
    t34 = *((unsigned int *)t12);
    t35 = (t30 ^ t34);
    t36 = (t29 | t35);
    t37 = *((unsigned int *)t11);
    t38 = *((unsigned int *)t12);
    t39 = (t37 | t38);
    t40 = (~(t39));
    t41 = (t36 & t40);
    if (t41 != 0)
        goto LAB19;

LAB16:    if (t39 != 0)
        goto LAB18;

LAB17:    *((unsigned int *)t33) = 1;

LAB19:    memset(t14, 0, 8);
    t16 = (t33 + 4);
    t42 = *((unsigned int *)t16);
    t43 = (~(t42));
    t44 = *((unsigned int *)t33);
    t45 = (t44 & t43);
    t46 = (t45 & 1U);
    if (t46 != 0)
        goto LAB20;

LAB21:    if (*((unsigned int *)t16) != 0)
        goto LAB22;

LAB23:    t18 = (t14 + 4);
    t47 = *((unsigned int *)t14);
    t48 = *((unsigned int *)t18);
    t49 = (t47 || t48);
    if (t49 > 0)
        goto LAB24;

LAB25:    t50 = *((unsigned int *)t14);
    t51 = (~(t50));
    t52 = *((unsigned int *)t18);
    t53 = (t51 || t52);
    if (t53 > 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t18) > 0)
        goto LAB28;

LAB29:    if (*((unsigned int *)t14) > 0)
        goto LAB30;

LAB31:    memcpy(t13, t54, 8);

LAB32:    t61 = (t0 + 3368);
    t64 = (t0 + 3368);
    t65 = (t64 + 72U);
    t66 = *((char **)t65);
    t67 = (t0 + 3368);
    t68 = (t67 + 64U);
    t69 = *((char **)t68);
    t70 = ((char*)((ng6)));
    xsi_vlog_generic_convert_array_indices(t62, t63, t66, t69, 2, 1, t70, 32, 1);
    t71 = (t62 + 4);
    t72 = *((unsigned int *)t71);
    t24 = (!(t72));
    t73 = (t63 + 4);
    t74 = *((unsigned int *)t73);
    t27 = (!(t74));
    t28 = (t24 && t27);
    if (t28 == 1)
        goto LAB33;

LAB34:    goto LAB14;

LAB18:    t15 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB19;

LAB20:    *((unsigned int *)t14) = 1;
    goto LAB23;

LAB22:    t17 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB23;

LAB24:    t19 = (t0 + 2488U);
    t20 = *((char **)t19);
    goto LAB25;

LAB26:    t19 = (t0 + 3368);
    t21 = (t19 + 56U);
    t22 = *((char **)t21);
    t25 = (t0 + 3368);
    t55 = (t25 + 72U);
    t56 = *((char **)t55);
    t57 = (t0 + 3368);
    t58 = (t57 + 64U);
    t59 = *((char **)t58);
    t60 = ((char*)((ng6)));
    xsi_vlog_generic_get_array_select_value(t54, 16, t22, t56, t59, 2, 1, t60, 32, 1);
    goto LAB27;

LAB28:    xsi_vlog_unsigned_bit_combine(t13, 16, t20, 16, t54, 16);
    goto LAB32;

LAB30:    memcpy(t13, t20, 8);
    goto LAB32;

LAB33:    t75 = *((unsigned int *)t62);
    t76 = *((unsigned int *)t63);
    t31 = (t75 - t76);
    t32 = (t31 + 1);
    xsi_vlogvar_wait_assign_value(t61, t13, 0, *((unsigned int *)t63), t32, 0LL);
    goto LAB34;

}

static void Cont_125_2(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;

LAB0:    t1 = (t0 + 4944U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(125, ng9);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 3368);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3368);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = (t0 + 1688U);
    t13 = *((char **)t12);
    xsi_vlog_generic_get_array_select_value(t5, 16, t4, t8, t11, 2, 1, t13, 3, 2);
    t12 = (t0 + 6664);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memset(t17, 0, 8);
    t18 = 65535U;
    t19 = t18;
    t20 = (t5 + 4);
    t21 = *((unsigned int *)t5);
    t18 = (t18 & t21);
    t22 = *((unsigned int *)t20);
    t19 = (t19 & t22);
    t23 = (t17 + 4);
    t24 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t24 | t18);
    t25 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t25 | t19);
    xsi_driver_vfirst_trans(t12, 0, 15);
    t26 = (t0 + 6520);
    *((int *)t26) = 1;

LAB1:    return;
}

static void Cont_126_3(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;

LAB0:    t1 = (t0 + 5192U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(126, ng9);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 3368);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3368);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = (t0 + 2008U);
    t13 = *((char **)t12);
    xsi_vlog_generic_get_array_select_value(t5, 16, t4, t8, t11, 2, 1, t13, 3, 2);
    t12 = (t0 + 6728);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memset(t17, 0, 8);
    t18 = 65535U;
    t19 = t18;
    t20 = (t5 + 4);
    t21 = *((unsigned int *)t5);
    t18 = (t18 & t21);
    t22 = *((unsigned int *)t20);
    t19 = (t19 & t22);
    t23 = (t17 + 4);
    t24 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t24 | t18);
    t25 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t25 | t19);
    xsi_driver_vfirst_trans(t12, 0, 15);
    t26 = (t0 + 6536);
    *((int *)t26) = 1;

LAB1:    return;
}

static void Cont_127_4(char *t0)
{
    char t3[8];
    char t4[8];
    char t8[8];
    char t16[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;

LAB0:    t1 = (t0 + 5440U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(127, ng9);
    t2 = (t0 + 1848U);
    t5 = *((char **)t2);
    t2 = (t0 + 3368);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t9 = (t0 + 3368);
    t10 = (t9 + 72U);
    t11 = *((char **)t10);
    t12 = (t0 + 3368);
    t13 = (t12 + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng8)));
    xsi_vlog_generic_get_array_select_value(t8, 16, t7, t11, t14, 2, 1, t15, 32, 1);
    memset(t16, 0, 8);
    t17 = (t5 + 4);
    t18 = (t8 + 4);
    t19 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t8);
    t21 = (t19 ^ t20);
    t22 = *((unsigned int *)t17);
    t23 = *((unsigned int *)t18);
    t24 = (t22 ^ t23);
    t25 = (t21 | t24);
    t26 = *((unsigned int *)t17);
    t27 = *((unsigned int *)t18);
    t28 = (t26 | t27);
    t29 = (~(t28));
    t30 = (t25 & t29);
    if (t30 != 0)
        goto LAB7;

LAB4:    if (t28 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t16) = 1;

LAB7:    memset(t4, 0, 8);
    t32 = (t16 + 4);
    t33 = *((unsigned int *)t32);
    t34 = (~(t33));
    t35 = *((unsigned int *)t16);
    t36 = (t35 & t34);
    t37 = (t36 & 1U);
    if (t37 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t32) != 0)
        goto LAB10;

LAB11:    t39 = (t4 + 4);
    t40 = *((unsigned int *)t4);
    t41 = *((unsigned int *)t39);
    t42 = (t40 || t41);
    if (t42 > 0)
        goto LAB12;

LAB13:    t44 = *((unsigned int *)t4);
    t45 = (~(t44));
    t46 = *((unsigned int *)t39);
    t47 = (t45 || t46);
    if (t47 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t39) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t48, 8);

LAB20:    t49 = (t0 + 6792);
    t50 = (t49 + 56U);
    t51 = *((char **)t50);
    t52 = (t51 + 56U);
    t53 = *((char **)t52);
    memset(t53, 0, 8);
    t54 = 1U;
    t55 = t54;
    t56 = (t3 + 4);
    t57 = *((unsigned int *)t3);
    t54 = (t54 & t57);
    t58 = *((unsigned int *)t56);
    t55 = (t55 & t58);
    t59 = (t53 + 4);
    t60 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t60 | t54);
    t61 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t61 | t55);
    xsi_driver_vfirst_trans(t49, 0, 0);
    t62 = (t0 + 6552);
    *((int *)t62) = 1;

LAB1:    return;
LAB6:    t31 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t38 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t38) = 1;
    goto LAB11;

LAB12:    t43 = ((char*)((ng14)));
    goto LAB13;

LAB14:    t48 = ((char*)((ng11)));
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 1, t43, 1, t48, 1);
    goto LAB20;

LAB18:    memcpy(t3, t43, 8);
    goto LAB20;

}

static void Cont_128_5(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;

LAB0:    t1 = (t0 + 5688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(128, ng9);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 3368);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3368);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng8)));
    xsi_vlog_generic_get_array_select_value(t5, 16, t4, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t0 + 6856);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memset(t17, 0, 8);
    t18 = 65535U;
    t19 = t18;
    t20 = (t5 + 4);
    t21 = *((unsigned int *)t5);
    t18 = (t18 & t21);
    t22 = *((unsigned int *)t20);
    t19 = (t19 & t22);
    t23 = (t17 + 4);
    t24 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t24 | t18);
    t25 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t25 | t19);
    xsi_driver_vfirst_trans(t13, 0, 15);
    t26 = (t0 + 6568);
    *((int *)t26) = 1;

LAB1:    return;
}

static void Initial_130_6(char *t0)
{

LAB0:    xsi_set_current_line(130, ng9);

LAB2:    xsi_set_current_line(131, ng9);
    Monitor_131_7(t0);

LAB1:    return;
}

void Monitor_131_7(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 5992);
    t2 = (t0 + 6584);
    xsi_vlogfile_monitor((void *)Monitor_131_7_Func, t1, t2);

LAB1:    return;
}


extern void work_m_00000000004258183902_2761737779_init()
{
	static char *pe[] = {(void *)Initial_108_0,(void *)Always_115_1,(void *)Cont_125_2,(void *)Cont_126_3,(void *)Cont_127_4,(void *)Cont_128_5,(void *)Initial_130_6,(void *)Monitor_131_7};
	xsi_register_didat("work_m_00000000004258183902_2761737779", "isim/Risc_16_bit_isim_beh.exe.sim/work/m_00000000004258183902_2761737779.didat");
	xsi_register_executes(pe);
}
