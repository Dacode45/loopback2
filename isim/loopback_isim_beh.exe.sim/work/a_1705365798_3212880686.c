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
static const char *ng0 = "C:/vhdl_stuff/loopback2/loopback.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );
char *ieee_p_2592010699_sub_1837678034_503743352(char *, char *, char *, char *);
unsigned char ieee_p_3620187407_sub_2546382208_3965413181(char *, char *, char *, int );
unsigned char ieee_p_3620187407_sub_2546418145_3965413181(char *, char *, char *, int );
unsigned char ieee_p_3620187407_sub_2599083972_3965413181(char *, int , char *, char *);
unsigned char ieee_p_3620187407_sub_3958461249_3965413181(char *, int , char *, char *);
char *ieee_p_3620187407_sub_436279890_3965413181(char *, char *, char *, char *, int );


static void work_a_1705365798_3212880686_p_0(char *t0)
{
    char t41[16];
    char *t1;
    unsigned char t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned char t15;
    unsigned char t16;
    unsigned char t17;
    unsigned char t18;
    unsigned char t19;
    unsigned char t20;
    unsigned char t21;
    unsigned char t22;
    unsigned char t23;
    unsigned char t24;
    unsigned char t25;
    unsigned char t26;
    unsigned char t27;
    unsigned char t28;
    unsigned char t29;
    unsigned char t30;
    unsigned char t31;
    char *t32;
    unsigned char t33;
    unsigned char t34;
    char *t35;
    unsigned char t36;
    unsigned char t37;
    char *t38;
    unsigned char t39;
    unsigned char t40;
    char *t42;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned char t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;

LAB0:    xsi_set_current_line(153, ng0);
    t1 = (t0 + 4672U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 20328);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(155, ng0);
    t4 = (t0 + 7752U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    if (t7 == 1)
        goto LAB8;

LAB9:    t4 = (t0 + 9672U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    t3 = t10;

LAB10:    if (t3 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(158, ng0);
    t1 = (t0 + 4552U);
    t4 = *((char **)t1);
    t2 = *((unsigned char *)t4);
    t1 = (t0 + 20968);
    t5 = (t1 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t2;
    xsi_driver_first_trans_fast(t1);

LAB6:    xsi_set_current_line(161, ng0);
    t1 = (t0 + 5832U);
    t4 = *((char **)t1);
    t1 = (t0 + 21032);
    t5 = (t1 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t4, 1U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(164, ng0);
    t1 = (t0 + 8392U);
    t4 = *((char **)t1);
    t2 = *((unsigned char *)t4);
    t1 = (t0 + 21096);
    t5 = (t1 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(165, ng0);
    t1 = (t0 + 8232U);
    t4 = *((char **)t1);
    t2 = *((unsigned char *)t4);
    t1 = (t0 + 21160);
    t5 = (t1 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(168, ng0);
    t1 = (t0 + 5192U);
    t4 = *((char **)t1);
    t2 = *((unsigned char *)t4);
    t3 = (t2 == (unsigned char)3);
    if (t3 != 0)
        goto LAB11;

LAB13:
LAB12:    xsi_set_current_line(172, ng0);
    t1 = (t0 + 4392U);
    t4 = *((char **)t1);
    t2 = *((unsigned char *)t4);
    t3 = (t2 == (unsigned char)0);
    if (t3 != 0)
        goto LAB14;

LAB16:
LAB15:    xsi_set_current_line(176, ng0);
    t1 = (t0 + 5512U);
    t4 = *((char **)t1);
    t2 = *((unsigned char *)t4);
    t3 = (t2 == (unsigned char)3);
    if (t3 != 0)
        goto LAB17;

LAB19:
LAB18:    xsi_set_current_line(180, ng0);
    t1 = (t0 + 4392U);
    t4 = *((char **)t1);
    t2 = *((unsigned char *)t4);
    t3 = (t2 == (unsigned char)0);
    if (t3 != 0)
        goto LAB20;

LAB22:
LAB21:    xsi_set_current_line(184, ng0);
    t1 = (t0 + 4392U);
    t4 = *((char **)t1);
    t18 = *((unsigned char *)t4);
    t19 = (t18 == (unsigned char)0);
    if (t19 == 1)
        goto LAB50;

LAB51:    t1 = (t0 + 4392U);
    t5 = *((char **)t1);
    t20 = *((unsigned char *)t5);
    t21 = (t20 == (unsigned char)1);
    t17 = t21;

LAB52:    if (t17 == 1)
        goto LAB47;

LAB48:    t1 = (t0 + 4392U);
    t8 = *((char **)t1);
    t22 = *((unsigned char *)t8);
    t23 = (t22 == (unsigned char)2);
    t16 = t23;

LAB49:    if (t16 == 1)
        goto LAB44;

LAB45:    t1 = (t0 + 4392U);
    t11 = *((char **)t1);
    t24 = *((unsigned char *)t11);
    t25 = (t24 == (unsigned char)3);
    t15 = t25;

LAB46:    if (t15 == 1)
        goto LAB41;

LAB42:    t1 = (t0 + 4392U);
    t12 = *((char **)t1);
    t26 = *((unsigned char *)t12);
    t27 = (t26 == (unsigned char)4);
    t10 = t27;

LAB43:    if (t10 == 1)
        goto LAB38;

LAB39:    t1 = (t0 + 4392U);
    t13 = *((char **)t1);
    t28 = *((unsigned char *)t13);
    t29 = (t28 == (unsigned char)5);
    t9 = t29;

LAB40:    if (t9 == 1)
        goto LAB35;

LAB36:    t1 = (t0 + 4392U);
    t14 = *((char **)t1);
    t30 = *((unsigned char *)t14);
    t31 = (t30 == (unsigned char)6);
    t7 = t31;

LAB37:    if (t7 == 1)
        goto LAB32;

LAB33:    t1 = (t0 + 4392U);
    t32 = *((char **)t1);
    t33 = *((unsigned char *)t32);
    t34 = (t33 == (unsigned char)7);
    t6 = t34;

LAB34:    if (t6 == 1)
        goto LAB29;

LAB30:    t1 = (t0 + 4392U);
    t35 = *((char **)t1);
    t36 = *((unsigned char *)t35);
    t37 = (t36 == (unsigned char)8);
    t3 = t37;

LAB31:    if (t3 == 1)
        goto LAB26;

LAB27:    t1 = (t0 + 4392U);
    t38 = *((char **)t1);
    t39 = *((unsigned char *)t38);
    t40 = (t39 == (unsigned char)9);
    t2 = t40;

LAB28:    if (t2 != 0)
        goto LAB23;

LAB25:    xsi_set_current_line(187, ng0);
    t1 = xsi_get_transient_memory(2U);
    memset(t1, 0, 2U);
    t4 = t1;
    memset(t4, (unsigned char)2, 2U);
    t5 = (t0 + 21352);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t1, 2U);
    xsi_driver_first_trans_fast(t5);

LAB24:    goto LAB3;

LAB5:    xsi_set_current_line(156, ng0);
    t4 = (t0 + 20968);
    t11 = (t4 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)0;
    xsi_driver_first_trans_fast(t4);
    goto LAB6;

LAB8:    t3 = (unsigned char)1;
    goto LAB10;

LAB11:    xsi_set_current_line(169, ng0);
    t1 = (t0 + 2472U);
    t5 = *((char **)t1);
    t1 = (t0 + 21224);
    t8 = (t1 + 56U);
    t11 = *((char **)t8);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t5, 8U);
    xsi_driver_first_trans_fast(t1);
    goto LAB12;

LAB14:    xsi_set_current_line(173, ng0);
    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t5 = t1;
    memset(t5, (unsigned char)2, 8U);
    t8 = (t0 + 21224);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t1, 8U);
    xsi_driver_first_trans_fast(t8);
    goto LAB15;

LAB17:    xsi_set_current_line(177, ng0);
    t1 = (t0 + 5032U);
    t5 = *((char **)t1);
    t1 = (t0 + 21288);
    t8 = (t1 + 56U);
    t11 = *((char **)t8);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t5, 8U);
    xsi_driver_first_trans_fast(t1);
    goto LAB18;

LAB20:    xsi_set_current_line(181, ng0);
    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t5 = t1;
    memset(t5, (unsigned char)2, 8U);
    t8 = (t0 + 21288);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t1, 8U);
    xsi_driver_first_trans_fast(t8);
    goto LAB21;

LAB23:    xsi_set_current_line(185, ng0);
    t1 = (t0 + 6472U);
    t42 = *((char **)t1);
    t1 = (t0 + 30268U);
    t43 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t41, t42, t1, 1);
    t44 = (t41 + 12U);
    t45 = *((unsigned int *)t44);
    t46 = (1U * t45);
    t47 = (2U != t46);
    if (t47 == 1)
        goto LAB53;

LAB54:    t48 = (t0 + 21352);
    t49 = (t48 + 56U);
    t50 = *((char **)t49);
    t51 = (t50 + 56U);
    t52 = *((char **)t51);
    memcpy(t52, t43, 2U);
    xsi_driver_first_trans_fast(t48);
    goto LAB24;

LAB26:    t2 = (unsigned char)1;
    goto LAB28;

LAB29:    t3 = (unsigned char)1;
    goto LAB31;

LAB32:    t6 = (unsigned char)1;
    goto LAB34;

LAB35:    t7 = (unsigned char)1;
    goto LAB37;

LAB38:    t9 = (unsigned char)1;
    goto LAB40;

LAB41:    t10 = (unsigned char)1;
    goto LAB43;

LAB44:    t15 = (unsigned char)1;
    goto LAB46;

LAB47:    t16 = (unsigned char)1;
    goto LAB49;

LAB50:    t17 = (unsigned char)1;
    goto LAB52;

LAB53:    xsi_size_not_matching(2U, t46, 0);
    goto LAB54;

}

static void work_a_1705365798_3212880686_p_1(char *t0)
{
    char t13[16];
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    xsi_set_current_line(198, ng0);
    t1 = (t0 + 4832U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 20344);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(200, ng0);
    t3 = (t0 + 8552U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(203, ng0);
    t1 = (t0 + 6952U);
    t3 = *((char **)t1);
    t1 = (t0 + 30316U);
    t4 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t13, t3, t1, 1);
    t7 = (t13 + 12U);
    t14 = *((unsigned int *)t7);
    t15 = (1U * t14);
    t2 = (10U != t15);
    if (t2 == 1)
        goto LAB8;

LAB9:    t8 = (t0 + 21416);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t4, 10U);
    xsi_driver_first_trans_fast(t8);

LAB6:    xsi_set_current_line(207, ng0);
    t1 = (t0 + 8712U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB10;

LAB12:    t1 = (t0 + 8552U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB13;

LAB14:
LAB11:    goto LAB3;

LAB5:    xsi_set_current_line(201, ng0);
    t3 = xsi_get_transient_memory(10U);
    memset(t3, 0, 10U);
    t7 = t3;
    memset(t7, (unsigned char)2, 10U);
    t8 = (t0 + 21416);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t3, 10U);
    xsi_driver_first_trans_fast(t8);
    goto LAB6;

LAB8:    xsi_size_not_matching(10U, t15, 0);
    goto LAB9;

LAB10:    xsi_set_current_line(208, ng0);
    t1 = xsi_get_transient_memory(10U);
    memset(t1, 0, 10U);
    t4 = t1;
    memset(t4, (unsigned char)2, 10U);
    t7 = (t0 + 21480);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 10U);
    xsi_driver_first_trans_fast(t7);
    goto LAB11;

LAB13:    xsi_set_current_line(210, ng0);
    t1 = (t0 + 7112U);
    t4 = *((char **)t1);
    t1 = (t0 + 30332U);
    t7 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t13, t4, t1, 1);
    t8 = (t13 + 12U);
    t14 = *((unsigned int *)t8);
    t15 = (1U * t14);
    t6 = (10U != t15);
    if (t6 == 1)
        goto LAB15;

LAB16:    t9 = (t0 + 21480);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t16 = *((char **)t12);
    memcpy(t16, t7, 10U);
    xsi_driver_first_trans_fast(t9);
    goto LAB11;

LAB15:    xsi_size_not_matching(10U, t15, 0);
    goto LAB16;

}

static void work_a_1705365798_3212880686_p_2(char *t0)
{
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    xsi_set_current_line(219, ng0);
    t1 = (t0 + 4832U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 20360);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(220, ng0);
    t3 = (t0 + 9032U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)2);
    if (t6 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(223, ng0);
    t1 = (t0 + 6632U);
    t3 = *((char **)t1);
    t1 = (t0 + 21544);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t3, 9U);
    xsi_driver_first_trans_fast(t1);

LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(221, ng0);
    t3 = xsi_get_transient_memory(9U);
    memset(t3, 0, 9U);
    t7 = t3;
    memset(t7, (unsigned char)2, 9U);
    t8 = (t0 + 21544);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t3, 9U);
    xsi_driver_first_trans_fast(t8);
    goto LAB6;

}

static void work_a_1705365798_3212880686_p_3(char *t0)
{
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    xsi_set_current_line(231, ng0);
    t1 = (t0 + 4832U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 20376);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(232, ng0);
    t3 = (t0 + 9192U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t3 = (t0 + 21608);
    t6 = (t3 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t5;
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(233, ng0);
    t1 = (t0 + 9352U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (t0 + 21672);
    t4 = (t1 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t2;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

}

static void work_a_1705365798_3212880686_p_4(char *t0)
{
    char t13[16];
    char t17[16];
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    int t14;
    unsigned int t15;
    unsigned char t16;
    char *t18;
    unsigned int t19;
    unsigned char t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;

LAB0:    xsi_set_current_line(241, ng0);
    t1 = (t0 + 4672U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 20392);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(242, ng0);
    t3 = (t0 + 4392U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)0);
    if (t6 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(245, ng0);
    t1 = (t0 + 5672U);
    t3 = *((char **)t1);
    t1 = (t0 + 30204U);
    t4 = (t0 + 30559);
    t8 = (t13 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 0;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t14 = (0 - 0);
    t15 = (t14 * 1);
    t15 = (t15 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t15;
    t5 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t3, t1, t4, t13);
    if (t5 == 1)
        goto LAB11;

LAB12:    t2 = (unsigned char)0;

LAB13:    if (t2 != 0)
        goto LAB8;

LAB10:
LAB9:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(243, ng0);
    t3 = xsi_get_transient_memory(16U);
    memset(t3, 0, 16U);
    t7 = t3;
    memset(t7, (unsigned char)2, 16U);
    t8 = (t0 + 21736);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t3, 16U);
    xsi_driver_first_trans_fast(t8);
    goto LAB6;

LAB8:    xsi_set_current_line(246, ng0);
    t9 = (t0 + 6152U);
    t11 = *((char **)t9);
    t9 = (t0 + 30236U);
    t12 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t17, t11, t9, 1);
    t18 = (t17 + 12U);
    t15 = *((unsigned int *)t18);
    t19 = (1U * t15);
    t20 = (16U != t19);
    if (t20 == 1)
        goto LAB14;

LAB15:    t21 = (t0 + 21736);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memcpy(t25, t12, 16U);
    xsi_driver_first_trans_fast(t21);
    goto LAB9;

LAB11:    t9 = (t0 + 5992U);
    t10 = *((char **)t9);
    t6 = *((unsigned char *)t10);
    t16 = (t6 == (unsigned char)2);
    t2 = t16;
    goto LAB13;

LAB14:    xsi_size_not_matching(16U, t19, 0);
    goto LAB15;

}

static void work_a_1705365798_3212880686_p_5(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned char t9;
    static char *nl0[] = {&&LAB3, &&LAB4, &&LAB5, &&LAB6, &&LAB7, &&LAB8, &&LAB9, &&LAB10, &&LAB11, &&LAB12};

LAB0:    xsi_set_current_line(255, ng0);
    t1 = (t0 + 4392U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t3);
    goto **((char **)t1);

LAB2:    t1 = (t0 + 20408);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(256, ng0);
    t4 = (t0 + 21800);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)1;
    xsi_driver_first_trans_fast(t4);
    goto LAB2;

LAB4:    xsi_set_current_line(257, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t9 = (t3 == (unsigned char)3);
    if (t9 != 0)
        goto LAB13;

LAB15:    xsi_set_current_line(260, ng0);
    t1 = (t0 + 21800);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB14:    goto LAB2;

LAB5:    xsi_set_current_line(262, ng0);
    t1 = (t0 + 21800);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB6:    xsi_set_current_line(263, ng0);
    t1 = (t0 + 21800);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)4;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB7:    xsi_set_current_line(264, ng0);
    t1 = (t0 + 21800);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)5;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB8:    xsi_set_current_line(265, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t9 = (t3 == (unsigned char)3);
    if (t9 != 0)
        goto LAB16;

LAB18:    xsi_set_current_line(268, ng0);
    t1 = (t0 + 21800);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)6;
    xsi_driver_first_trans_fast(t1);

LAB17:    goto LAB2;

LAB9:    xsi_set_current_line(270, ng0);
    t1 = (t0 + 21800);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)7;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB10:    xsi_set_current_line(271, ng0);
    t1 = (t0 + 21800);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)8;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB11:    xsi_set_current_line(272, ng0);
    t1 = (t0 + 21800);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)9;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB12:    xsi_set_current_line(273, ng0);
    t1 = (t0 + 21800);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB13:    xsi_set_current_line(258, ng0);
    t1 = (t0 + 21800);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    goto LAB14;

LAB16:    xsi_set_current_line(266, ng0);
    t1 = (t0 + 21800);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)5;
    xsi_driver_first_trans_fast(t1);
    goto LAB17;

}

static void work_a_1705365798_3212880686_p_6(char *t0)
{
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    xsi_set_current_line(281, ng0);
    t1 = (t0 + 4672U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 20424);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(282, ng0);
    t3 = (t0 + 8072U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t3 = (t0 + 21864);
    t6 = (t3 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t5;
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(283, ng0);
    t1 = (t0 + 7912U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (t0 + 21928);
    t4 = (t1 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB3;

}

static void work_a_1705365798_3212880686_p_7(char *t0)
{
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(291, ng0);
    t1 = (t0 + 4832U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 20440);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(292, ng0);
    t3 = (t0 + 9512U);
    t4 = *((char **)t3);
    t3 = (t0 + 21992);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t4, 16U);
    xsi_driver_first_trans_fast(t3);
    goto LAB3;

}

static void work_a_1705365798_3212880686_p_8(char *t0)
{
    unsigned char t1;
    unsigned char t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    char *t11;
    unsigned char t12;
    unsigned char t13;
    char *t14;
    unsigned char t15;
    unsigned char t16;
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

LAB0:    xsi_set_current_line(297, ng0);
    t4 = (t0 + 4392U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)2);
    if (t7 == 1)
        goto LAB11;

LAB12:    t4 = (t0 + 4392U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    t3 = t10;

LAB13:    if (t3 == 1)
        goto LAB8;

LAB9:    t4 = (t0 + 4392U);
    t11 = *((char **)t4);
    t12 = *((unsigned char *)t11);
    t13 = (t12 == (unsigned char)6);
    t2 = t13;

LAB10:    if (t2 == 1)
        goto LAB5;

LAB6:    t4 = (t0 + 4392U);
    t14 = *((char **)t4);
    t15 = *((unsigned char *)t14);
    t16 = (t15 == (unsigned char)7);
    t1 = t16;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB14:    t21 = (t0 + 22056);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    *((unsigned char *)t25) = (unsigned char)3;
    xsi_driver_first_trans_fast(t21);

LAB2:    t26 = (t0 + 20456);
    *((int *)t26) = 1;

LAB1:    return;
LAB3:    t4 = (t0 + 22056);
    t17 = (t4 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = (unsigned char)2;
    xsi_driver_first_trans_fast(t4);
    goto LAB2;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

LAB8:    t2 = (unsigned char)1;
    goto LAB10;

LAB11:    t3 = (unsigned char)1;
    goto LAB13;

LAB15:    goto LAB2;

}

static void work_a_1705365798_3212880686_p_9(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    xsi_set_current_line(298, ng0);
    t2 = (t0 + 4392U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)3);
    if (t5 == 1)
        goto LAB5;

LAB6:    t2 = (t0 + 4392U);
    t6 = *((char **)t2);
    t7 = *((unsigned char *)t6);
    t8 = (t7 == (unsigned char)7);
    t1 = t8;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB8:    t13 = (t0 + 22120);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = (unsigned char)3;
    xsi_driver_first_trans_fast(t13);

LAB2:    t18 = (t0 + 20472);
    *((int *)t18) = 1;

LAB1:    return;
LAB3:    t2 = (t0 + 22120);
    t9 = (t2 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB2;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

LAB9:    goto LAB2;

}

static void work_a_1705365798_3212880686_p_10(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    xsi_set_current_line(299, ng0);
    t2 = (t0 + 4392U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)3);
    if (t5 == 1)
        goto LAB5;

LAB6:    t2 = (t0 + 4392U);
    t6 = *((char **)t2);
    t7 = *((unsigned char *)t6);
    t8 = (t7 == (unsigned char)7);
    t1 = t8;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB8:    t13 = (t0 + 22184);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = (unsigned char)2;
    xsi_driver_first_trans_fast(t13);

LAB2:    t18 = (t0 + 20488);
    *((int *)t18) = 1;

LAB1:    return;
LAB3:    t2 = (t0 + 22184);
    t9 = (t2 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB2;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

LAB9:    goto LAB2;

}

static void work_a_1705365798_3212880686_p_11(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(300, ng0);
    t1 = (t0 + 4392U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)7);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t9 = (t0 + 22248);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_first_trans_fast(t9);

LAB2:    t14 = (t0 + 20504);
    *((int *)t14) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 22248);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_1705365798_3212880686_p_12(char *t0)
{
    char t4[16];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned char t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;

LAB0:    xsi_set_current_line(303, ng0);

LAB3:    t1 = (t0 + 5352U);
    t2 = *((char **)t1);
    t1 = (t0 + 5032U);
    t3 = *((char **)t1);
    t5 = ((IEEE_P_2592010699) + 4024);
    t6 = (t0 + 30188U);
    t7 = (t0 + 30172U);
    t1 = xsi_base_array_concat(t1, t4, t5, (char)97, t2, t6, (char)97, t3, t7, (char)101);
    t8 = (8U + 8U);
    t9 = (16U != t8);
    if (t9 == 1)
        goto LAB5;

LAB6:    t10 = (t0 + 22312);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t1, 16U);
    xsi_driver_first_trans_fast(t10);

LAB2:    t15 = (t0 + 20520);
    *((int *)t15) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(16U, t8, 0);
    goto LAB6;

}

static void work_a_1705365798_3212880686_p_13(char *t0)
{
    char t1[16];
    char t5[16];
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    xsi_set_current_line(304, ng0);
    t2 = (t0 + 5352U);
    t3 = *((char **)t2);
    t2 = (t0 + 5032U);
    t4 = *((char **)t2);
    t6 = ((IEEE_P_2592010699) + 4024);
    t7 = (t0 + 30188U);
    t8 = (t0 + 30172U);
    t2 = xsi_base_array_concat(t2, t5, t6, (char)97, t3, t7, (char)97, t4, t8, (char)101);
    t9 = ieee_p_2592010699_sub_1837678034_503743352(IEEE_P_2592010699, t1, t2, t5);
    t10 = ieee_p_3620187407_sub_2546418145_3965413181(IEEE_P_3620187407, t9, t1, 0);
    if (t10 != 0)
        goto LAB3;

LAB4:
LAB5:    t16 = (t0 + 22376);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = (unsigned char)2;
    xsi_driver_first_trans_fast(t16);

LAB2:    t21 = (t0 + 20536);
    *((int *)t21) = 1;

LAB1:    return;
LAB3:    t11 = (t0 + 22376);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)3;
    xsi_driver_first_trans_fast(t11);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_1705365798_3212880686_p_14(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(305, ng0);

LAB3:    t1 = (t0 + 7592U);
    t2 = *((char **)t1);
    t3 = (15 - 8);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 22440);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 9U);
    xsi_driver_first_trans_fast(t6);

LAB2:    t11 = (t0 + 20552);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1705365798_3212880686_p_15(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    char *t4;
    unsigned char t5;
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

LAB0:    xsi_set_current_line(306, ng0);
    t2 = (t0 + 6152U);
    t3 = *((char **)t2);
    t2 = (t0 + 30236U);
    t4 = ieee_p_2592010699_sub_1837678034_503743352(IEEE_P_2592010699, t1, t3, t2);
    t5 = ieee_p_3620187407_sub_2546418145_3965413181(IEEE_P_3620187407, t4, t1, 0);
    if (t5 != 0)
        goto LAB3;

LAB4:
LAB5:    t11 = (t0 + 22504);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)2;
    xsi_driver_first_trans_fast(t11);

LAB2:    t16 = (t0 + 20568);
    *((int *)t16) = 1;

LAB1:    return;
LAB3:    t6 = (t0 + 22504);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast(t6);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_1705365798_3212880686_p_16(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
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
    char *t18;

LAB0:    xsi_set_current_line(307, ng0);
    t1 = (t0 + 4392U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)9);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t11 = xsi_get_transient_memory(1U);
    memset(t11, 0, 1U);
    t12 = t11;
    memset(t12, (unsigned char)2, 1U);
    t13 = (t0 + 22568);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t11, 1U);
    xsi_driver_first_trans_fast(t13);

LAB2:    t18 = (t0 + 20584);
    *((int *)t18) = 1;

LAB1:    return;
LAB3:    t1 = xsi_get_transient_memory(1U);
    memset(t1, 0, 1U);
    t5 = t1;
    memset(t5, (unsigned char)3, 1U);
    t6 = (t0 + 22568);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 1U);
    xsi_driver_first_trans_fast(t6);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_1705365798_3212880686_p_17(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(310, ng0);
    t1 = (t0 + 6952U);
    t2 = *((char **)t1);
    t1 = (t0 + 30316U);
    t3 = ieee_p_3620187407_sub_2546418145_3965413181(IEEE_P_3620187407, t2, t1, 799);
    if (t3 != 0)
        goto LAB3;

LAB4:
LAB5:    t9 = (t0 + 22632);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_first_trans_fast(t9);

LAB2:    t14 = (t0 + 20600);
    *((int *)t14) = 1;

LAB1:    return;
LAB3:    t4 = (t0 + 22632);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t4);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_1705365798_3212880686_p_18(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(311, ng0);
    t1 = (t0 + 7112U);
    t2 = *((char **)t1);
    t1 = (t0 + 30332U);
    t3 = ieee_p_3620187407_sub_2546418145_3965413181(IEEE_P_3620187407, t2, t1, 524);
    if (t3 != 0)
        goto LAB3;

LAB4:
LAB5:    t9 = (t0 + 22696);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_first_trans_fast(t9);

LAB2:    t14 = (t0 + 20616);
    *((int *)t14) = 1;

LAB1:    return;
LAB3:    t4 = (t0 + 22696);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t4);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_1705365798_3212880686_p_19(char *t0)
{
    char t1[16];
    char t7[16];
    char t13[16];
    char t18[16];
    char t25[16];
    char *t2;
    char *t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    char *t8;
    char *t9;
    int t10;
    unsigned int t11;
    int t12;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t19;
    char *t20;
    int t21;
    unsigned int t22;
    int t23;
    char *t24;
    char *t26;
    char *t27;
    unsigned int t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned char t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;

LAB0:    xsi_set_current_line(313, ng0);

LAB3:    t2 = (t0 + 7112U);
    t3 = *((char **)t2);
    t4 = (9 - 7);
    t5 = (t4 * 1U);
    t6 = (0 + t5);
    t2 = (t3 + t6);
    t8 = (t7 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 7;
    t9 = (t8 + 4U);
    *((int *)t9) = 0;
    t9 = (t8 + 8U);
    *((int *)t9) = -1;
    t10 = (0 - 7);
    t11 = (t10 * -1);
    t11 = (t11 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t11;
    t12 = (256 - 45);
    t9 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t1, t2, t7, t12);
    t14 = (t0 + 6952U);
    t15 = *((char **)t14);
    t11 = (9 - 7);
    t16 = (t11 * 1U);
    t17 = (0 + t16);
    t14 = (t15 + t17);
    t19 = (t18 + 0U);
    t20 = (t19 + 0U);
    *((int *)t20) = 7;
    t20 = (t19 + 4U);
    *((int *)t20) = 0;
    t20 = (t19 + 8U);
    *((int *)t20) = -1;
    t21 = (0 - 7);
    t22 = (t21 * -1);
    t22 = (t22 + 1);
    t20 = (t19 + 12U);
    *((unsigned int *)t20) = t22;
    t23 = (256 - 157);
    t20 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t13, t14, t18, t23);
    t26 = ((IEEE_P_2592010699) + 4024);
    t24 = xsi_base_array_concat(t24, t25, t26, (char)97, t9, t1, (char)97, t20, t13, (char)101);
    t27 = (t1 + 12U);
    t22 = *((unsigned int *)t27);
    t28 = (1U * t22);
    t29 = (t13 + 12U);
    t30 = *((unsigned int *)t29);
    t31 = (1U * t30);
    t32 = (t28 + t31);
    t33 = (16U != t32);
    if (t33 == 1)
        goto LAB5;

LAB6:    t34 = (t0 + 22760);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    memcpy(t38, t24, 16U);
    xsi_driver_first_trans_fast(t34);

LAB2:    t39 = (t0 + 20632);
    *((int *)t39) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(16U, t32, 0);
    goto LAB6;

}

static void work_a_1705365798_3212880686_p_20(char *t0)
{
    unsigned char t1;
    unsigned char t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    char *t7;
    char *t8;
    unsigned char t9;
    char *t10;
    char *t11;
    unsigned char t12;
    char *t13;
    char *t14;
    unsigned char t15;
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
    char *t26;

LAB0:    xsi_set_current_line(315, ng0);
    t4 = (t0 + 6952U);
    t5 = *((char **)t4);
    t4 = (t0 + 30316U);
    t6 = ieee_p_3620187407_sub_3958461249_3965413181(IEEE_P_3620187407, 159, t5, t4);
    if (t6 == 1)
        goto LAB11;

LAB12:    t3 = (unsigned char)0;

LAB13:    if (t3 == 1)
        goto LAB8;

LAB9:    t2 = (unsigned char)0;

LAB10:    if (t2 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB14:    t21 = (t0 + 22824);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    *((unsigned char *)t25) = (unsigned char)2;
    xsi_driver_first_trans_fast(t21);

LAB2:    t26 = (t0 + 20648);
    *((int *)t26) = 1;

LAB1:    return;
LAB3:    t16 = (t0 + 22824);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = (unsigned char)3;
    xsi_driver_first_trans_fast(t16);
    goto LAB2;

LAB5:    t13 = (t0 + 7112U);
    t14 = *((char **)t13);
    t13 = (t0 + 30332U);
    t15 = ieee_p_3620187407_sub_2546382208_3965413181(IEEE_P_3620187407, t14, t13, 525);
    t1 = t15;
    goto LAB7;

LAB8:    t10 = (t0 + 7112U);
    t11 = *((char **)t10);
    t10 = (t0 + 30332U);
    t12 = ieee_p_3620187407_sub_2599083972_3965413181(IEEE_P_3620187407, 44, t11, t10);
    t2 = t12;
    goto LAB10;

LAB11:    t7 = (t0 + 6952U);
    t8 = *((char **)t7);
    t7 = (t0 + 30316U);
    t9 = ieee_p_3620187407_sub_2546382208_3965413181(IEEE_P_3620187407, t8, t7, 800);
    t3 = t9;
    goto LAB13;

LAB15:    goto LAB2;

}

static void work_a_1705365798_3212880686_p_21(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    char *t5;
    char *t6;
    unsigned char t7;
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
    char *t18;

LAB0:    xsi_set_current_line(317, ng0);
    t2 = (t0 + 6952U);
    t3 = *((char **)t2);
    t2 = (t0 + 30316U);
    t4 = ieee_p_3620187407_sub_3958461249_3965413181(IEEE_P_3620187407, 0, t3, t2);
    if (t4 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB8:    t13 = (t0 + 22888);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = (unsigned char)3;
    xsi_driver_first_trans_fast(t13);

LAB2:    t18 = (t0 + 20664);
    *((int *)t18) = 1;

LAB1:    return;
LAB3:    t8 = (t0 + 22888);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)2;
    xsi_driver_first_trans_fast(t8);
    goto LAB2;

LAB5:    t5 = (t0 + 6952U);
    t6 = *((char **)t5);
    t5 = (t0 + 30316U);
    t7 = ieee_p_3620187407_sub_2546382208_3965413181(IEEE_P_3620187407, t6, t5, 96);
    t1 = t7;
    goto LAB7;

LAB9:    goto LAB2;

}

static void work_a_1705365798_3212880686_p_22(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    char *t5;
    char *t6;
    unsigned char t7;
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
    char *t18;

LAB0:    xsi_set_current_line(318, ng0);
    t2 = (t0 + 7112U);
    t3 = *((char **)t2);
    t2 = (t0 + 30332U);
    t4 = ieee_p_3620187407_sub_3958461249_3965413181(IEEE_P_3620187407, 0, t3, t2);
    if (t4 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB8:    t13 = (t0 + 22952);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = (unsigned char)3;
    xsi_driver_first_trans_fast(t13);

LAB2:    t18 = (t0 + 20680);
    *((int *)t18) = 1;

LAB1:    return;
LAB3:    t8 = (t0 + 22952);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)2;
    xsi_driver_first_trans_fast(t8);
    goto LAB2;

LAB5:    t5 = (t0 + 7112U);
    t6 = *((char **)t5);
    t5 = (t0 + 30332U);
    t7 = ieee_p_3620187407_sub_2546382208_3965413181(IEEE_P_3620187407, t6, t5, 2);
    t1 = t7;
    goto LAB7;

LAB9:    goto LAB2;

}

static void work_a_1705365798_3212880686_p_23(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(319, ng0);

LAB3:    t1 = (t0 + 7272U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 23016);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 20696);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1705365798_3212880686_p_24(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(320, ng0);

LAB3:    t1 = (t0 + 7432U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 23080);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 20712);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1705365798_3212880686_p_25(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(322, ng0);

LAB3:    t1 = (t0 + 6792U);
    t2 = *((char **)t1);
    t3 = (8 - 8);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 23144);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t7;
    xsi_driver_first_trans_fast_port(t8);

LAB2:    t13 = (t0 + 20728);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1705365798_3212880686_p_26(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(323, ng0);

LAB3:    t1 = (t0 + 6792U);
    t2 = *((char **)t1);
    t3 = (7 - 8);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 23208);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t7;
    xsi_driver_first_trans_fast_port(t8);

LAB2:    t13 = (t0 + 20744);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1705365798_3212880686_p_27(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(324, ng0);

LAB3:    t1 = (t0 + 6792U);
    t2 = *((char **)t1);
    t3 = (6 - 8);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 23272);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t7;
    xsi_driver_first_trans_fast_port(t8);

LAB2:    t13 = (t0 + 20760);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1705365798_3212880686_p_28(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(325, ng0);

LAB3:    t1 = (t0 + 6792U);
    t2 = *((char **)t1);
    t3 = (5 - 8);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 23336);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t7;
    xsi_driver_first_trans_fast_port(t8);

LAB2:    t13 = (t0 + 20776);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1705365798_3212880686_p_29(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(326, ng0);

LAB3:    t1 = (t0 + 6792U);
    t2 = *((char **)t1);
    t3 = (4 - 8);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 23400);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t7;
    xsi_driver_first_trans_fast_port(t8);

LAB2:    t13 = (t0 + 20792);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1705365798_3212880686_p_30(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(327, ng0);

LAB3:    t1 = (t0 + 6792U);
    t2 = *((char **)t1);
    t3 = (3 - 8);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 23464);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t7;
    xsi_driver_first_trans_fast_port(t8);

LAB2:    t13 = (t0 + 20808);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1705365798_3212880686_p_31(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(328, ng0);

LAB3:    t1 = (t0 + 6792U);
    t2 = *((char **)t1);
    t3 = (2 - 8);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 23528);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t7;
    xsi_driver_first_trans_fast_port(t8);

LAB2:    t13 = (t0 + 20824);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1705365798_3212880686_p_32(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(329, ng0);

LAB3:    t1 = (t0 + 6792U);
    t2 = *((char **)t1);
    t3 = (1 - 8);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 23592);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t7;
    xsi_driver_first_trans_fast_port(t8);

LAB2:    t13 = (t0 + 20840);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1705365798_3212880686_p_33(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(330, ng0);

LAB3:    t1 = (t0 + 6792U);
    t2 = *((char **)t1);
    t3 = (0 - 8);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 23656);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t7;
    xsi_driver_first_trans_fast_port(t8);

LAB2:    t13 = (t0 + 20856);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1705365798_3212880686_p_34(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    char *t4;
    unsigned char t5;
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

LAB0:    xsi_set_current_line(332, ng0);
    t2 = (t0 + 6472U);
    t3 = *((char **)t2);
    t2 = (t0 + 30268U);
    t4 = ieee_p_2592010699_sub_1837678034_503743352(IEEE_P_2592010699, t1, t3, t2);
    t5 = ieee_p_3620187407_sub_2546418145_3965413181(IEEE_P_3620187407, t4, t1, 0);
    if (t5 != 0)
        goto LAB3;

LAB4:
LAB5:    t11 = (t0 + 23720);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t11);

LAB2:    t16 = (t0 + 20872);
    *((int *)t16) = 1;

LAB1:    return;
LAB3:    t6 = (t0 + 23720);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t6);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_1705365798_3212880686_p_35(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(334, ng0);

LAB3:    t1 = (t0 + 23784);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1705365798_3212880686_p_36(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(335, ng0);

LAB3:    t1 = (t0 + 23848);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1705365798_3212880686_p_37(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    xsi_set_current_line(338, ng0);

LAB3:    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t3);
    t1 = (t0 + 23912);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t4;
    xsi_driver_first_trans_fast(t1);

LAB2:    t9 = (t0 + 20888);
    *((int *)t9) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_1705365798_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1705365798_3212880686_p_0,(void *)work_a_1705365798_3212880686_p_1,(void *)work_a_1705365798_3212880686_p_2,(void *)work_a_1705365798_3212880686_p_3,(void *)work_a_1705365798_3212880686_p_4,(void *)work_a_1705365798_3212880686_p_5,(void *)work_a_1705365798_3212880686_p_6,(void *)work_a_1705365798_3212880686_p_7,(void *)work_a_1705365798_3212880686_p_8,(void *)work_a_1705365798_3212880686_p_9,(void *)work_a_1705365798_3212880686_p_10,(void *)work_a_1705365798_3212880686_p_11,(void *)work_a_1705365798_3212880686_p_12,(void *)work_a_1705365798_3212880686_p_13,(void *)work_a_1705365798_3212880686_p_14,(void *)work_a_1705365798_3212880686_p_15,(void *)work_a_1705365798_3212880686_p_16,(void *)work_a_1705365798_3212880686_p_17,(void *)work_a_1705365798_3212880686_p_18,(void *)work_a_1705365798_3212880686_p_19,(void *)work_a_1705365798_3212880686_p_20,(void *)work_a_1705365798_3212880686_p_21,(void *)work_a_1705365798_3212880686_p_22,(void *)work_a_1705365798_3212880686_p_23,(void *)work_a_1705365798_3212880686_p_24,(void *)work_a_1705365798_3212880686_p_25,(void *)work_a_1705365798_3212880686_p_26,(void *)work_a_1705365798_3212880686_p_27,(void *)work_a_1705365798_3212880686_p_28,(void *)work_a_1705365798_3212880686_p_29,(void *)work_a_1705365798_3212880686_p_30,(void *)work_a_1705365798_3212880686_p_31,(void *)work_a_1705365798_3212880686_p_32,(void *)work_a_1705365798_3212880686_p_33,(void *)work_a_1705365798_3212880686_p_34,(void *)work_a_1705365798_3212880686_p_35,(void *)work_a_1705365798_3212880686_p_36,(void *)work_a_1705365798_3212880686_p_37};
	xsi_register_didat("work_a_1705365798_3212880686", "isim/loopback_isim_beh.exe.sim/work/a_1705365798_3212880686.didat");
	xsi_register_executes(pe);
}
