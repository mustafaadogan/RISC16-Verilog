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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000001499462724_2123150820_init();
    work_m_00000000004258183902_2761737779_init();
    work_m_00000000003037420088_1059438215_init();
    work_m_00000000002302699210_0886308060_init();
    work_m_00000000001580823056_1124448613_init();
    work_m_00000000004050512837_0249416591_init();
    work_m_00000000003983101492_3901337038_init();
    work_m_00000000000581577824_3069964626_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000000581577824_3069964626");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
