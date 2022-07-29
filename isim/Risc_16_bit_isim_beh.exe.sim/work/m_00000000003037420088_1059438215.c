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
static const char *ng0 = "C:/Users/MUSTAFA/Desktop/Codes/CORG_Processor_Design/CORG_Processor_Design.v";
static unsigned int ng1[] = {8U, 0U};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {85U, 0U};
static unsigned int ng4[] = {63U, 0U};
static unsigned int ng5[] = {51U, 0U};
static unsigned int ng6[] = {13U, 0U};
static unsigned int ng7[] = {1U, 0U};
static unsigned int ng8[] = {5U, 0U};
static unsigned int ng9[] = {2U, 0U};
static unsigned int ng10[] = {29U, 0U};
static unsigned int ng11[] = {106U, 64U};
static unsigned int ng12[] = {3U, 0U};
static unsigned int ng13[] = {110U, 64U};
static unsigned int ng14[] = {7U, 7U};
static unsigned int ng15[] = {102U, 64U};
static unsigned int ng16[] = {4U, 0U};
static unsigned int ng17[] = {6U, 0U};
static unsigned int ng18[] = {123U, 0U};
static unsigned int ng19[] = {10U, 0U};
static unsigned int ng20[] = {7U, 0U};
static unsigned int ng21[] = {12U, 0U};



static void Cont_205_0(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t33[8];
    char t40[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;

LAB0:    t1 = (t0 + 2848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(205, ng0);
    t2 = (t0 + 1368U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t2 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB7;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t6) = 1;

LAB7:    memset(t4, 0, 8);
    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t22) != 0)
        goto LAB10;

LAB11:    t29 = (t4 + 4);
    t30 = *((unsigned int *)t4);
    t31 = *((unsigned int *)t29);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB12;

LAB13:    t36 = *((unsigned int *)t4);
    t37 = (~(t36));
    t38 = *((unsigned int *)t29);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t29) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t40, 8);

LAB20:    t41 = (t0 + 3512);
    t44 = (t41 + 56U);
    t45 = *((char **)t44);
    t46 = (t45 + 56U);
    t47 = *((char **)t46);
    memset(t47, 0, 8);
    t48 = 127U;
    t49 = t48;
    t50 = (t3 + 4);
    t51 = *((unsigned int *)t3);
    t48 = (t48 & t51);
    t52 = *((unsigned int *)t50);
    t49 = (t49 & t52);
    t53 = (t47 + 4);
    t54 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t54 | t48);
    t55 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t55 | t49);
    xsi_driver_vfirst_trans(t41, 0, 6);
    t56 = (t0 + 3416);
    *((int *)t56) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t28 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB11;

LAB12:    t34 = (t0 + 1208U);
    t35 = *((char **)t34);
    t34 = ((char*)((ng2)));
    xsi_vlogtype_concat(t33, 7, 7, 2U, t34, 2, t35, 5);
    goto LAB13;

LAB14:    t41 = (t0 + 1368U);
    t42 = *((char **)t41);
    t41 = (t0 + 1048U);
    t43 = *((char **)t41);
    xsi_vlogtype_concat(t40, 7, 7, 2U, t43, 3, t42, 4);
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 7, t33, 7, t40, 7);
    goto LAB20;

LAB18:    memcpy(t3, t33, 8);
    goto LAB20;

}

static void Always_206_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 3096U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(206, ng0);
    t2 = (t0 + 3432);
    *((int *)t2) = 1;
    t3 = (t0 + 3128);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(208, ng0);
    t4 = (t0 + 1528U);
    t5 = *((char **)t4);

LAB5:    t4 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_xcompare(t5, 7, t4, 7);
    if (t6 == 1)
        goto LAB6;

LAB7:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_xcompare(t5, 7, t2, 7);
    if (t6 == 1)
        goto LAB8;

LAB9:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_xcompare(t5, 7, t2, 7);
    if (t6 == 1)
        goto LAB10;

LAB11:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_xcompare(t5, 7, t2, 7);
    if (t6 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_xcompare(t5, 7, t2, 7);
    if (t6 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_xcompare(t5, 7, t2, 7);
    if (t6 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_xcompare(t5, 7, t2, 7);
    if (t6 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_xcompare(t5, 7, t2, 7);
    if (t6 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng13)));
    t6 = xsi_vlog_unsigned_case_xcompare(t5, 7, t2, 7);
    if (t6 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng15)));
    t6 = xsi_vlog_unsigned_case_xcompare(t5, 7, t2, 7);
    if (t6 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_xcompare(t5, 7, t2, 7);
    if (t6 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_xcompare(t5, 7, t2, 7);
    if (t6 == 1)
        goto LAB28;

LAB29:    t2 = ((char*)((ng18)));
    t6 = xsi_vlog_unsigned_case_xcompare(t5, 7, t2, 7);
    if (t6 == 1)
        goto LAB30;

LAB31:    t2 = ((char*)((ng19)));
    t6 = xsi_vlog_unsigned_case_xcompare(t5, 7, t2, 7);
    if (t6 == 1)
        goto LAB32;

LAB33:    t2 = ((char*)((ng21)));
    t6 = xsi_vlog_unsigned_case_xcompare(t5, 7, t2, 7);
    if (t6 == 1)
        goto LAB34;

LAB35:
LAB37:
LAB36:    xsi_set_current_line(234, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB38:    goto LAB2;

LAB6:    xsi_set_current_line(209, ng0);
    t7 = ((char*)((ng2)));
    t8 = (t0 + 1928);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 3);
    goto LAB38;

LAB8:    xsi_set_current_line(210, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB38;

LAB10:    xsi_set_current_line(211, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB38;

LAB12:    xsi_set_current_line(212, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB38;

LAB14:    xsi_set_current_line(214, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB38;

LAB16:    xsi_set_current_line(216, ng0);
    t3 = ((char*)((ng9)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB38;

LAB18:    xsi_set_current_line(217, ng0);
    t3 = ((char*)((ng9)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB38;

LAB20:    xsi_set_current_line(219, ng0);
    t3 = ((char*)((ng12)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB38;

LAB22:    xsi_set_current_line(221, ng0);
    t3 = ((char*)((ng14)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB38;

LAB24:    xsi_set_current_line(223, ng0);
    t3 = ((char*)((ng16)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB38;

LAB26:    xsi_set_current_line(225, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB38;

LAB28:    xsi_set_current_line(227, ng0);
    t3 = ((char*)((ng17)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB38;

LAB30:    xsi_set_current_line(228, ng0);
    t3 = ((char*)((ng17)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB38;

LAB32:    xsi_set_current_line(231, ng0);
    t3 = ((char*)((ng20)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB38;

LAB34:    xsi_set_current_line(232, ng0);
    t3 = ((char*)((ng20)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB38;

}


extern void work_m_00000000003037420088_1059438215_init()
{
	static char *pe[] = {(void *)Cont_205_0,(void *)Always_206_1};
	xsi_register_didat("work_m_00000000003037420088_1059438215", "isim/Risc_16_bit_isim_beh.exe.sim/work/m_00000000003037420088_1059438215.didat");
	xsi_register_executes(pe);
}
