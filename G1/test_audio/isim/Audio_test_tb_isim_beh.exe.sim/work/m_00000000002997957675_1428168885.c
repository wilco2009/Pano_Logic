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
static int ng2[] = {1, 0};
static unsigned int ng3[] = {1U, 0U};
static int ng4[] = {0, 0};
static unsigned int ng5[] = {2U, 0U};
static unsigned int ng6[] = {3U, 0U};
static unsigned int ng7[] = {4U, 0U};
static unsigned int ng8[] = {5U, 0U};
static unsigned int ng9[] = {6U, 0U};
static unsigned int ng10[] = {7U, 0U};
static unsigned int ng11[] = {8U, 0U};
static unsigned int ng12[] = {9U, 0U};
static unsigned int ng13[] = {10U, 0U};
static unsigned int ng14[] = {11U, 0U};



static void Cont_46_0(char *t0)
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

LAB0:    t1 = (t0 + 5408U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6056);
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

static void Always_70_1(char *t0)
{
    char t18[8];
    char t22[8];
    char t28[8];
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
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    char *t66;

LAB0:    t1 = (t0 + 5656U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 5976);
    *((int *)t2) = 1;
    t3 = (t0 + 5688);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(70, ng0);

LAB5:    xsi_set_current_line(71, ng0);
    t4 = (t0 + 4488);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 8, t7, 8);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 8, t2, 8);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 8, t2, 8);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 8, t2, 8);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 8, t2, 8);
    if (t8 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 8, t2, 8);
    if (t8 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng9)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 8, t2, 8);
    if (t8 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng10)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 8, t2, 8);
    if (t8 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng11)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 8, t2, 8);
    if (t8 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng12)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 8, t2, 8);
    if (t8 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng13)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 8, t2, 8);
    if (t8 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng14)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 8, t2, 8);
    if (t8 == 1)
        goto LAB29;

LAB30:
LAB32:
LAB31:    xsi_set_current_line(139, ng0);

LAB111:    xsi_set_current_line(140, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3528);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(141, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4488);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);

LAB33:    goto LAB2;

LAB7:    xsi_set_current_line(72, ng0);

LAB34:    xsi_set_current_line(73, ng0);
    t9 = (t0 + 2008U);
    t10 = *((char **)t9);
    t9 = (t10 + 4);
    t11 = *((unsigned int *)t9);
    t12 = (~(t11));
    t13 = *((unsigned int *)t10);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB35;

LAB36:
LAB37:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 2168U);
    t3 = *((char **)t2);
    memset(t18, 0, 8);
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t2) != 0)
        goto LAB40;

LAB41:    t5 = (t18 + 4);
    t19 = *((unsigned int *)t18);
    t20 = *((unsigned int *)t5);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB42;

LAB43:    memcpy(t28, t18, 8);

LAB44:    t59 = (t28 + 4);
    t60 = *((unsigned int *)t59);
    t61 = (~(t60));
    t62 = *((unsigned int *)t28);
    t63 = (t62 & t61);
    t64 = (t63 != 0);
    if (t64 > 0)
        goto LAB52;

LAB53:
LAB54:    goto LAB33;

LAB9:    xsi_set_current_line(81, ng0);

LAB56:    xsi_set_current_line(82, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 3368);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(83, ng0);
    t2 = (t0 + 2648U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t18, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t11 = *((unsigned int *)t3);
    t12 = *((unsigned int *)t2);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t19 = (t14 ^ t15);
    t20 = (t13 | t19);
    t21 = *((unsigned int *)t4);
    t23 = *((unsigned int *)t5);
    t24 = (t21 | t23);
    t25 = (~(t24));
    t26 = (t20 & t25);
    if (t26 != 0)
        goto LAB60;

LAB57:    if (t24 != 0)
        goto LAB59;

LAB58:    *((unsigned int *)t18) = 1;

LAB60:    t9 = (t18 + 4);
    t27 = *((unsigned int *)t9);
    t29 = (~(t27));
    t30 = *((unsigned int *)t18);
    t31 = (t30 & t29);
    t35 = (t31 != 0);
    if (t35 > 0)
        goto LAB61;

LAB62:
LAB63:    goto LAB33;

LAB11:    xsi_set_current_line(87, ng0);

LAB65:    xsi_set_current_line(88, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 4168);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 8);
    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3848);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(90, ng0);
    t2 = (t0 + 4488);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t18, 0, 8);
    xsi_vlog_unsigned_add(t18, 32, t4, 8, t5, 32);
    t7 = (t0 + 4488);
    xsi_vlogvar_assign_value(t7, t18, 0, 0, 8);
    goto LAB33;

LAB13:    xsi_set_current_line(92, ng0);

LAB66:    xsi_set_current_line(93, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 3848);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(94, ng0);
    t2 = (t0 + 2648U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t18, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t11 = *((unsigned int *)t3);
    t12 = *((unsigned int *)t2);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t19 = (t14 ^ t15);
    t20 = (t13 | t19);
    t21 = *((unsigned int *)t4);
    t23 = *((unsigned int *)t5);
    t24 = (t21 | t23);
    t25 = (~(t24));
    t26 = (t20 & t25);
    if (t26 != 0)
        goto LAB70;

LAB67:    if (t24 != 0)
        goto LAB69;

LAB68:    *((unsigned int *)t18) = 1;

LAB70:    t9 = (t18 + 4);
    t27 = *((unsigned int *)t9);
    t29 = (~(t27));
    t30 = *((unsigned int *)t18);
    t31 = (t30 & t29);
    t35 = (t31 != 0);
    if (t35 > 0)
        goto LAB71;

LAB72:
LAB73:    goto LAB33;

LAB15:    xsi_set_current_line(98, ng0);

LAB75:    xsi_set_current_line(99, ng0);
    t3 = (t0 + 2488U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB76;

LAB77:
LAB78:    goto LAB33;

LAB17:    xsi_set_current_line(103, ng0);

LAB80:    xsi_set_current_line(104, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 4168);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 8);
    xsi_set_current_line(105, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3848);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(106, ng0);
    t2 = (t0 + 4488);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t18, 0, 8);
    xsi_vlog_unsigned_add(t18, 32, t4, 8, t5, 32);
    t7 = (t0 + 4488);
    xsi_vlogvar_assign_value(t7, t18, 0, 0, 8);
    goto LAB33;

LAB19:    xsi_set_current_line(108, ng0);

LAB81:    xsi_set_current_line(109, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 3848);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(110, ng0);
    t2 = (t0 + 2648U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t18, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t11 = *((unsigned int *)t3);
    t12 = *((unsigned int *)t2);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t19 = (t14 ^ t15);
    t20 = (t13 | t19);
    t21 = *((unsigned int *)t4);
    t23 = *((unsigned int *)t5);
    t24 = (t21 | t23);
    t25 = (~(t24));
    t26 = (t20 & t25);
    if (t26 != 0)
        goto LAB85;

LAB82:    if (t24 != 0)
        goto LAB84;

LAB83:    *((unsigned int *)t18) = 1;

LAB85:    t9 = (t18 + 4);
    t27 = *((unsigned int *)t9);
    t29 = (~(t27));
    t30 = *((unsigned int *)t18);
    t31 = (t30 & t29);
    t35 = (t31 != 0);
    if (t35 > 0)
        goto LAB86;

LAB87:
LAB88:    goto LAB33;

LAB21:    xsi_set_current_line(114, ng0);

LAB90:    xsi_set_current_line(115, ng0);
    t3 = (t0 + 2488U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB91;

LAB92:
LAB93:    goto LAB33;

LAB23:    xsi_set_current_line(119, ng0);

LAB95:    xsi_set_current_line(120, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    t3 = (t0 + 4168);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 8);
    xsi_set_current_line(121, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3848);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(122, ng0);
    t2 = (t0 + 4488);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t18, 0, 8);
    xsi_vlog_unsigned_add(t18, 32, t4, 8, t5, 32);
    t7 = (t0 + 4488);
    xsi_vlogvar_assign_value(t7, t18, 0, 0, 8);
    goto LAB33;

LAB25:    xsi_set_current_line(124, ng0);

LAB96:    xsi_set_current_line(125, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 3848);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(126, ng0);
    t2 = (t0 + 2648U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t18, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t11 = *((unsigned int *)t3);
    t12 = *((unsigned int *)t2);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t19 = (t14 ^ t15);
    t20 = (t13 | t19);
    t21 = *((unsigned int *)t4);
    t23 = *((unsigned int *)t5);
    t24 = (t21 | t23);
    t25 = (~(t24));
    t26 = (t20 & t25);
    if (t26 != 0)
        goto LAB100;

LAB97:    if (t24 != 0)
        goto LAB99;

LAB98:    *((unsigned int *)t18) = 1;

LAB100:    t9 = (t18 + 4);
    t27 = *((unsigned int *)t9);
    t29 = (~(t27));
    t30 = *((unsigned int *)t18);
    t31 = (t30 & t29);
    t35 = (t31 != 0);
    if (t35 > 0)
        goto LAB101;

LAB102:
LAB103:    goto LAB33;

LAB27:    xsi_set_current_line(130, ng0);

LAB105:    xsi_set_current_line(131, ng0);
    t3 = (t0 + 2488U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB106;

LAB107:
LAB108:    goto LAB33;

LAB29:    xsi_set_current_line(135, ng0);

LAB110:    xsi_set_current_line(136, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 3528);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(137, ng0);
    t2 = (t0 + 4488);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t18, 0, 8);
    xsi_vlog_unsigned_add(t18, 32, t4, 8, t5, 32);
    t7 = (t0 + 4488);
    xsi_vlogvar_assign_value(t7, t18, 0, 0, 8);
    goto LAB33;

LAB35:    xsi_set_current_line(73, ng0);
    t16 = ((char*)((ng2)));
    t17 = (t0 + 4328);
    xsi_vlogvar_assign_value(t17, t16, 0, 0, 1);
    goto LAB37;

LAB38:    *((unsigned int *)t18) = 1;
    goto LAB41;

LAB40:    t4 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB41;

LAB42:    t7 = (t0 + 4328);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memset(t22, 0, 8);
    t16 = (t10 + 4);
    t23 = *((unsigned int *)t16);
    t24 = (~(t23));
    t25 = *((unsigned int *)t10);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB45;

LAB46:    if (*((unsigned int *)t16) != 0)
        goto LAB47;

LAB48:    t29 = *((unsigned int *)t18);
    t30 = *((unsigned int *)t22);
    t31 = (t29 & t30);
    *((unsigned int *)t28) = t31;
    t32 = (t18 + 4);
    t33 = (t22 + 4);
    t34 = (t28 + 4);
    t35 = *((unsigned int *)t32);
    t36 = *((unsigned int *)t33);
    t37 = (t35 | t36);
    *((unsigned int *)t34) = t37;
    t38 = *((unsigned int *)t34);
    t39 = (t38 != 0);
    if (t39 == 1)
        goto LAB49;

LAB50:
LAB51:    goto LAB44;

LAB45:    *((unsigned int *)t22) = 1;
    goto LAB48;

LAB47:    t17 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB48;

LAB49:    t40 = *((unsigned int *)t28);
    t41 = *((unsigned int *)t34);
    *((unsigned int *)t28) = (t40 | t41);
    t42 = (t18 + 4);
    t43 = (t22 + 4);
    t44 = *((unsigned int *)t18);
    t45 = (~(t44));
    t46 = *((unsigned int *)t42);
    t47 = (~(t46));
    t48 = *((unsigned int *)t22);
    t49 = (~(t48));
    t50 = *((unsigned int *)t43);
    t51 = (~(t50));
    t8 = (t45 & t47);
    t52 = (t49 & t51);
    t53 = (~(t8));
    t54 = (~(t52));
    t55 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t55 & t53);
    t56 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t56 & t54);
    t57 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t57 & t53);
    t58 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t58 & t54);
    goto LAB51;

LAB52:    xsi_set_current_line(74, ng0);

LAB55:    xsi_set_current_line(75, ng0);
    t65 = ((char*)((ng3)));
    t66 = (t0 + 3368);
    xsi_vlogvar_assign_value(t66, t65, 0, 0, 1);
    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4328);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(78, ng0);
    t2 = (t0 + 4488);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t18, 0, 8);
    xsi_vlog_unsigned_add(t18, 32, t4, 8, t5, 32);
    t7 = (t0 + 4488);
    xsi_vlogvar_assign_value(t7, t18, 0, 0, 8);
    goto LAB54;

LAB59:    t7 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB60;

LAB61:    xsi_set_current_line(83, ng0);

LAB64:    xsi_set_current_line(84, ng0);
    t10 = (t0 + 4488);
    t16 = (t10 + 56U);
    t17 = *((char **)t16);
    t32 = ((char*)((ng2)));
    memset(t22, 0, 8);
    xsi_vlog_unsigned_add(t22, 32, t17, 8, t32, 32);
    t33 = (t0 + 4488);
    xsi_vlogvar_assign_value(t33, t22, 0, 0, 8);
    goto LAB63;

LAB69:    t7 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB70;

LAB71:    xsi_set_current_line(94, ng0);

LAB74:    xsi_set_current_line(95, ng0);
    t10 = (t0 + 4488);
    t16 = (t10 + 56U);
    t17 = *((char **)t16);
    t32 = ((char*)((ng2)));
    memset(t22, 0, 8);
    xsi_vlog_unsigned_add(t22, 32, t17, 8, t32, 32);
    t33 = (t0 + 4488);
    xsi_vlogvar_assign_value(t33, t22, 0, 0, 8);
    goto LAB73;

LAB76:    xsi_set_current_line(99, ng0);

LAB79:    xsi_set_current_line(100, ng0);
    t5 = (t0 + 4488);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    t10 = ((char*)((ng2)));
    memset(t18, 0, 8);
    xsi_vlog_unsigned_add(t18, 32, t9, 8, t10, 32);
    t16 = (t0 + 4488);
    xsi_vlogvar_assign_value(t16, t18, 0, 0, 8);
    goto LAB78;

LAB84:    t7 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB85;

LAB86:    xsi_set_current_line(110, ng0);

LAB89:    xsi_set_current_line(111, ng0);
    t10 = (t0 + 4488);
    t16 = (t10 + 56U);
    t17 = *((char **)t16);
    t32 = ((char*)((ng2)));
    memset(t22, 0, 8);
    xsi_vlog_unsigned_add(t22, 32, t17, 8, t32, 32);
    t33 = (t0 + 4488);
    xsi_vlogvar_assign_value(t33, t22, 0, 0, 8);
    goto LAB88;

LAB91:    xsi_set_current_line(115, ng0);

LAB94:    xsi_set_current_line(116, ng0);
    t5 = (t0 + 4488);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    t10 = ((char*)((ng2)));
    memset(t18, 0, 8);
    xsi_vlog_unsigned_add(t18, 32, t9, 8, t10, 32);
    t16 = (t0 + 4488);
    xsi_vlogvar_assign_value(t16, t18, 0, 0, 8);
    goto LAB93;

LAB99:    t7 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB100;

LAB101:    xsi_set_current_line(126, ng0);

LAB104:    xsi_set_current_line(127, ng0);
    t10 = (t0 + 4488);
    t16 = (t10 + 56U);
    t17 = *((char **)t16);
    t32 = ((char*)((ng2)));
    memset(t22, 0, 8);
    xsi_vlog_unsigned_add(t22, 32, t17, 8, t32, 32);
    t33 = (t0 + 4488);
    xsi_vlogvar_assign_value(t33, t22, 0, 0, 8);
    goto LAB103;

LAB106:    xsi_set_current_line(131, ng0);

LAB109:    xsi_set_current_line(132, ng0);
    t5 = (t0 + 4488);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    t10 = ((char*)((ng2)));
    memset(t18, 0, 8);
    xsi_vlog_unsigned_add(t18, 32, t9, 8, t10, 32);
    t16 = (t0 + 4488);
    xsi_vlogvar_assign_value(t16, t18, 0, 0, 8);
    goto LAB108;

}


extern void work_m_00000000002997957675_1428168885_init()
{
	static char *pe[] = {(void *)Cont_46_0,(void *)Always_70_1};
	xsi_register_didat("work_m_00000000002997957675_1428168885", "isim/Audio_test_tb_isim_beh.exe.sim/work/m_00000000002997957675_1428168885.didat");
	xsi_register_executes(pe);
}
