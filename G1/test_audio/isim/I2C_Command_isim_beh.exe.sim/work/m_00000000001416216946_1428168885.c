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
static const char *ng0 = "C:/Users/aleja/OneDrive/Github/Mio/Pano/Pano_Logic/G1/test_audio/I2C_Command.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {3U, 0U};
static unsigned int ng6[] = {4U, 0U};
static unsigned int ng7[] = {5U, 0U};
static unsigned int ng8[] = {6U, 0U};
static unsigned int ng9[] = {7U, 0U};
static unsigned int ng10[] = {8U, 0U};
static unsigned int ng11[] = {9U, 0U};
static unsigned int ng12[] = {10U, 0U};
static unsigned int ng13[] = {11U, 0U};
static unsigned int ng14[] = {12U, 0U};
static int ng15[] = {0, 0};



static void Cont_44_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 5088U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5736);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 0);

LAB1:    return;
}

static void Always_67_1(char *t0)
{
    char t11[8];
    char t32[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
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
    char *t29;
    char *t30;
    char *t31;
    char *t33;

LAB0:    t1 = (t0 + 5336U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 5656);
    *((int *)t2) = 1;
    t3 = (t0 + 5368);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(67, ng0);

LAB5:    xsi_set_current_line(68, ng0);
    t4 = (t0 + 4168);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 8, t7, 8);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 8, t2, 8);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 8, t2, 8);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 8, t2, 8);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 8, t2, 8);
    if (t8 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 8, t2, 8);
    if (t8 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 8, t2, 8);
    if (t8 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng9)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 8, t2, 8);
    if (t8 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng10)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 8, t2, 8);
    if (t8 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng11)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 8, t2, 8);
    if (t8 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng12)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 8, t2, 8);
    if (t8 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng13)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 8, t2, 8);
    if (t8 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng14)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 8, t2, 8);
    if (t8 == 1)
        goto LAB31;

LAB32:
LAB34:
LAB33:    xsi_set_current_line(137, ng0);

LAB97:    xsi_set_current_line(138, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 4168);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);

LAB35:    goto LAB2;

LAB7:    xsi_set_current_line(69, ng0);

LAB36:    xsi_set_current_line(70, ng0);
    t9 = ((char*)((ng2)));
    t10 = (t0 + 3208);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 1);
    xsi_set_current_line(71, ng0);
    t2 = (t0 + 4168);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_add(t11, 32, t4, 8, t5, 32);
    t7 = (t0 + 4168);
    xsi_vlogvar_assign_value(t7, t11, 0, 0, 8);
    goto LAB35;

LAB9:    xsi_set_current_line(73, ng0);

LAB37:    xsi_set_current_line(74, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 3208);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(75, ng0);
    t2 = (t0 + 2488U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t11, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t12 = *((unsigned int *)t3);
    t13 = *((unsigned int *)t2);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t5);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t4);
    t20 = *((unsigned int *)t5);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB41;

LAB38:    if (t21 != 0)
        goto LAB40;

LAB39:    *((unsigned int *)t11) = 1;

LAB41:    t9 = (t11 + 4);
    t24 = *((unsigned int *)t9);
    t25 = (~(t24));
    t26 = *((unsigned int *)t11);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB42;

LAB43:
LAB44:    goto LAB35;

LAB11:    xsi_set_current_line(79, ng0);

LAB46:    xsi_set_current_line(80, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 4008);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 8);
    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3688);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 4168);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_add(t11, 32, t4, 8, t5, 32);
    t7 = (t0 + 4168);
    xsi_vlogvar_assign_value(t7, t11, 0, 0, 8);
    goto LAB35;

LAB13:    xsi_set_current_line(84, ng0);

LAB47:    xsi_set_current_line(85, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 3688);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(86, ng0);
    t2 = (t0 + 2488U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t11, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t12 = *((unsigned int *)t3);
    t13 = *((unsigned int *)t2);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t5);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t4);
    t20 = *((unsigned int *)t5);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB51;

LAB48:    if (t21 != 0)
        goto LAB50;

LAB49:    *((unsigned int *)t11) = 1;

LAB51:    t9 = (t11 + 4);
    t24 = *((unsigned int *)t9);
    t25 = (~(t24));
    t26 = *((unsigned int *)t11);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB52;

LAB53:
LAB54:    goto LAB35;

LAB15:    xsi_set_current_line(90, ng0);

LAB56:    xsi_set_current_line(91, ng0);
    t3 = (t0 + 2328U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t12 = *((unsigned int *)t3);
    t13 = (~(t12));
    t14 = *((unsigned int *)t4);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB57;

LAB58:
LAB59:    goto LAB35;

LAB17:    xsi_set_current_line(95, ng0);

LAB61:    xsi_set_current_line(96, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 4008);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 8);
    xsi_set_current_line(97, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3688);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(98, ng0);
    t2 = (t0 + 4168);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_add(t11, 32, t4, 8, t5, 32);
    t7 = (t0 + 4168);
    xsi_vlogvar_assign_value(t7, t11, 0, 0, 8);
    goto LAB35;

LAB19:    xsi_set_current_line(100, ng0);

LAB62:    xsi_set_current_line(101, ng0);
    t3 = (t0 + 2488U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng2)));
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t7 = (t3 + 4);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t3);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t5);
    t16 = *((unsigned int *)t7);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t7);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB66;

LAB63:    if (t21 != 0)
        goto LAB65;

LAB64:    *((unsigned int *)t11) = 1;

LAB66:    t10 = (t11 + 4);
    t24 = *((unsigned int *)t10);
    t25 = (~(t24));
    t26 = *((unsigned int *)t11);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB67;

LAB68:
LAB69:    goto LAB35;

LAB21:    xsi_set_current_line(106, ng0);

LAB71:    xsi_set_current_line(107, ng0);
    t3 = (t0 + 2328U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t12 = *((unsigned int *)t3);
    t13 = (~(t12));
    t14 = *((unsigned int *)t4);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB72;

LAB73:
LAB74:    goto LAB35;

LAB23:    xsi_set_current_line(111, ng0);

LAB76:    xsi_set_current_line(112, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    t3 = (t0 + 4008);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 8);
    xsi_set_current_line(113, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3688);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(114, ng0);
    t2 = (t0 + 4168);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_add(t11, 32, t4, 8, t5, 32);
    t7 = (t0 + 4168);
    xsi_vlogvar_assign_value(t7, t11, 0, 0, 8);
    goto LAB35;

LAB25:    xsi_set_current_line(116, ng0);

LAB77:    xsi_set_current_line(117, ng0);
    t3 = (t0 + 2488U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng2)));
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t7 = (t3 + 4);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t3);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t5);
    t16 = *((unsigned int *)t7);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t7);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB81;

LAB78:    if (t21 != 0)
        goto LAB80;

LAB79:    *((unsigned int *)t11) = 1;

LAB81:    t10 = (t11 + 4);
    t24 = *((unsigned int *)t10);
    t25 = (~(t24));
    t26 = *((unsigned int *)t11);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB82;

LAB83:
LAB84:    goto LAB35;

LAB27:    xsi_set_current_line(122, ng0);

LAB86:    xsi_set_current_line(123, ng0);
    t3 = (t0 + 2328U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t12 = *((unsigned int *)t3);
    t13 = (~(t12));
    t14 = *((unsigned int *)t4);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB87;

LAB88:
LAB89:    goto LAB35;

LAB29:    xsi_set_current_line(127, ng0);

LAB91:    xsi_set_current_line(128, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 3368);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(129, ng0);
    t2 = (t0 + 4168);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_add(t11, 32, t4, 8, t5, 32);
    t7 = (t0 + 4168);
    xsi_vlogvar_assign_value(t7, t11, 0, 0, 8);
    goto LAB35;

LAB31:    xsi_set_current_line(131, ng0);

LAB92:    xsi_set_current_line(132, ng0);
    t3 = (t0 + 2488U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t12 = *((unsigned int *)t3);
    t13 = (~(t12));
    t14 = *((unsigned int *)t4);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB93;

LAB94:
LAB95:    goto LAB35;

LAB40:    t7 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB41;

LAB42:    xsi_set_current_line(75, ng0);

LAB45:    xsi_set_current_line(76, ng0);
    t10 = (t0 + 4168);
    t29 = (t10 + 56U);
    t30 = *((char **)t29);
    t31 = ((char*)((ng3)));
    memset(t32, 0, 8);
    xsi_vlog_unsigned_add(t32, 32, t30, 8, t31, 32);
    t33 = (t0 + 4168);
    xsi_vlogvar_assign_value(t33, t32, 0, 0, 8);
    goto LAB44;

LAB50:    t7 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB51;

LAB52:    xsi_set_current_line(86, ng0);

LAB55:    xsi_set_current_line(87, ng0);
    t10 = (t0 + 4168);
    t29 = (t10 + 56U);
    t30 = *((char **)t29);
    t31 = ((char*)((ng3)));
    memset(t32, 0, 8);
    xsi_vlog_unsigned_add(t32, 32, t30, 8, t31, 32);
    t33 = (t0 + 4168);
    xsi_vlogvar_assign_value(t33, t32, 0, 0, 8);
    goto LAB54;

LAB57:    xsi_set_current_line(91, ng0);

LAB60:    xsi_set_current_line(92, ng0);
    t5 = (t0 + 4168);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    t10 = ((char*)((ng3)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_add(t11, 32, t9, 8, t10, 32);
    t29 = (t0 + 4168);
    xsi_vlogvar_assign_value(t29, t11, 0, 0, 8);
    goto LAB59;

LAB65:    t9 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB66;

LAB67:    xsi_set_current_line(101, ng0);

LAB70:    xsi_set_current_line(102, ng0);
    t29 = ((char*)((ng1)));
    t30 = (t0 + 3688);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 1);
    xsi_set_current_line(103, ng0);
    t2 = (t0 + 4168);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_add(t11, 32, t4, 8, t5, 32);
    t7 = (t0 + 4168);
    xsi_vlogvar_assign_value(t7, t11, 0, 0, 8);
    goto LAB69;

LAB72:    xsi_set_current_line(107, ng0);

LAB75:    xsi_set_current_line(108, ng0);
    t5 = (t0 + 4168);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    t10 = ((char*)((ng3)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_add(t11, 32, t9, 8, t10, 32);
    t29 = (t0 + 4168);
    xsi_vlogvar_assign_value(t29, t11, 0, 0, 8);
    goto LAB74;

LAB80:    t9 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB81;

LAB82:    xsi_set_current_line(117, ng0);

LAB85:    xsi_set_current_line(118, ng0);
    t29 = ((char*)((ng1)));
    t30 = (t0 + 3688);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 1);
    xsi_set_current_line(119, ng0);
    t2 = (t0 + 4168);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_add(t11, 32, t4, 8, t5, 32);
    t7 = (t0 + 4168);
    xsi_vlogvar_assign_value(t7, t11, 0, 0, 8);
    goto LAB84;

LAB87:    xsi_set_current_line(123, ng0);

LAB90:    xsi_set_current_line(124, ng0);
    t5 = (t0 + 4168);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    t10 = ((char*)((ng3)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_add(t11, 32, t9, 8, t10, 32);
    t29 = (t0 + 4168);
    xsi_vlogvar_assign_value(t29, t11, 0, 0, 8);
    goto LAB89;

LAB93:    xsi_set_current_line(132, ng0);

LAB96:    xsi_set_current_line(133, ng0);
    t5 = ((char*)((ng1)));
    t7 = (t0 + 3368);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 1);
    xsi_set_current_line(134, ng0);
    t2 = (t0 + 4168);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_add(t11, 32, t4, 8, t5, 32);
    t7 = (t0 + 4168);
    xsi_vlogvar_assign_value(t7, t11, 0, 0, 8);
    goto LAB95;

}


extern void work_m_00000000001416216946_1428168885_init()
{
	static char *pe[] = {(void *)Cont_44_0,(void *)Always_67_1};
	xsi_register_didat("work_m_00000000001416216946_1428168885", "isim/I2C_Command_isim_beh.exe.sim/work/m_00000000001416216946_1428168885.didat");
	xsi_register_executes(pe);
}
