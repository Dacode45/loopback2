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

/* This file is designed for use with ISim build 0x8ef4fb42 */

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

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_3620187407_sub_2546382208_3965413181(char *, char *, char *, int );
unsigned char ieee_p_3620187407_sub_4058165771_3965413181(char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_436279890_3965413181(char *, char *, char *, char *, int );


static void work_a_1705365798_3212880686_p_0(char *t0)
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

LAB0:    xsi_set_current_line(112, ng0);
    t1 = (t0 + 3512U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 7264);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(113, ng0);
    t3 = (t0 + 2616U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t3 = (t0 + 7396);
    t6 = (t3 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t5;
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(115, ng0);
    t1 = (t0 + 2892U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB5;

LAB7:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(116, ng0);
    t1 = (t0 + 1420U);
    t4 = *((char **)t1);
    t1 = (t0 + 7432);
    t6 = (t1 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8U);
    xsi_driver_first_trans_fast(t1);
    goto LAB6;

}

static void work_a_1705365798_3212880686_p_1(char *t0)
{
    char t7[16];
    char t20[16];
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    int t10;
    unsigned int t11;
    unsigned char t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    char *t21;

LAB0:    xsi_set_current_line(126, ng0);
    t1 = (t0 + 3604U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 7272);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(128, ng0);
    t3 = (t0 + 3720U);
    t4 = *((char **)t3);
    t3 = (t0 + 12840U);
    t5 = (t0 + 12935);
    t8 = (t7 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 11;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t10 = (11 - 0);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t11;
    t12 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t4, t3, t5, t7);
    if (t12 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(131, ng0);
    t1 = (t0 + 3720U);
    t3 = *((char **)t1);
    t1 = (t0 + 12840U);
    t4 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t7, t3, t1, 1);
    t5 = (t7 + 12U);
    t11 = *((unsigned int *)t5);
    t19 = (1U * t11);
    t2 = (10U != t19);
    if (t2 == 1)
        goto LAB8;

LAB9:    t6 = (t0 + 7468);
    t8 = (t6 + 32U);
    t9 = *((char **)t8);
    t13 = (t9 + 40U);
    t14 = *((char **)t13);
    memcpy(t14, t4, 10U);
    xsi_driver_first_trans_fast(t6);

LAB6:    xsi_set_current_line(135, ng0);
    t1 = (t0 + 3812U);
    t3 = *((char **)t1);
    t1 = (t0 + 12856U);
    t4 = (t0 + 12947);
    t6 = (t7 + 0U);
    t8 = (t6 + 0U);
    *((int *)t8) = 0;
    t8 = (t6 + 4U);
    *((int *)t8) = 11;
    t8 = (t6 + 8U);
    *((int *)t8) = 1;
    t10 = (11 - 0);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t8 = (t6 + 12U);
    *((unsigned int *)t8) = t11;
    t2 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t3, t1, t4, t7);
    if (t2 != 0)
        goto LAB10;

LAB12:    t1 = (t0 + 3720U);
    t3 = *((char **)t1);
    t1 = (t0 + 12840U);
    t4 = (t0 + 12959);
    t6 = (t7 + 0U);
    t8 = (t6 + 0U);
    *((int *)t8) = 0;
    t8 = (t6 + 4U);
    *((int *)t8) = 11;
    t8 = (t6 + 8U);
    *((int *)t8) = 1;
    t10 = (11 - 0);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t8 = (t6 + 12U);
    *((unsigned int *)t8) = t11;
    t2 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t3, t1, t4, t7);
    if (t2 != 0)
        goto LAB13;

LAB14:    xsi_set_current_line(140, ng0);
    t1 = (t0 + 3812U);
    t3 = *((char **)t1);
    t1 = (t0 + 7504);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t8 = *((char **)t6);
    memcpy(t8, t3, 10U);
    xsi_driver_first_trans_fast(t1);

LAB11:    goto LAB3;

LAB5:    xsi_set_current_line(129, ng0);
    t9 = xsi_get_transient_memory(10U);
    memset(t9, 0, 10U);
    t13 = t9;
    memset(t13, (unsigned char)2, 10U);
    t14 = (t0 + 7468);
    t15 = (t14 + 32U);
    t16 = *((char **)t15);
    t17 = (t16 + 40U);
    t18 = *((char **)t17);
    memcpy(t18, t9, 10U);
    xsi_driver_first_trans_fast(t14);
    goto LAB6;

LAB8:    xsi_size_not_matching(10U, t19, 0);
    goto LAB9;

LAB10:    xsi_set_current_line(136, ng0);
    t8 = xsi_get_transient_memory(10U);
    memset(t8, 0, 10U);
    t9 = t8;
    memset(t9, (unsigned char)2, 10U);
    t13 = (t0 + 7504);
    t14 = (t13 + 32U);
    t15 = *((char **)t14);
    t16 = (t15 + 40U);
    t17 = *((char **)t16);
    memcpy(t17, t8, 10U);
    xsi_driver_first_trans_fast(t13);
    goto LAB11;

LAB13:    xsi_set_current_line(138, ng0);
    t8 = (t0 + 3812U);
    t9 = *((char **)t8);
    t8 = (t0 + 12856U);
    t13 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t20, t9, t8, 1);
    t14 = (t20 + 12U);
    t11 = *((unsigned int *)t14);
    t19 = (1U * t11);
    t12 = (10U != t19);
    if (t12 == 1)
        goto LAB15;

LAB16:    t15 = (t0 + 7504);
    t16 = (t15 + 32U);
    t17 = *((char **)t16);
    t18 = (t17 + 40U);
    t21 = *((char **)t18);
    memcpy(t21, t13, 10U);
    xsi_driver_first_trans_fast(t15);
    goto LAB11;

LAB15:    xsi_size_not_matching(10U, t19, 0);
    goto LAB16;

}

static void work_a_1705365798_3212880686_p_2(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned char t8;
    unsigned char t9;
    char *t10;
    char *t11;
    static char *nl0[] = {&&LAB3, &&LAB4, &&LAB5, &&LAB6, &&LAB7, &&LAB8, &&LAB9, &&LAB10, &&LAB11, &&LAB12, &&LAB13};

LAB0:    xsi_set_current_line(150, ng0);
    t1 = (t0 + 2524U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 7540);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(151, ng0);
    t1 = (t0 + 2524U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t3);
    goto **((char **)t1);

LAB2:    t1 = (t0 + 7280);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(152, ng0);
    t4 = (t0 + 776U);
    t5 = *((char **)t4);
    t8 = *((unsigned char *)t5);
    t9 = (t8 == (unsigned char)3);
    if (t9 != 0)
        goto LAB14;

LAB16:    xsi_set_current_line(155, ng0);
    t1 = (t0 + 7540);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);

LAB15:    goto LAB2;

LAB4:    xsi_set_current_line(157, ng0);
    t1 = (t0 + 7540);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB5:    xsi_set_current_line(158, ng0);
    t1 = (t0 + 7540);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB6:    xsi_set_current_line(159, ng0);
    t1 = (t0 + 7540);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)4;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB7:    xsi_set_current_line(160, ng0);
    t1 = (t0 + 868U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t8 = (t3 == (unsigned char)3);
    if (t8 != 0)
        goto LAB17;

LAB19:    xsi_set_current_line(163, ng0);
    t1 = (t0 + 7540);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)5;
    xsi_driver_first_trans_fast(t1);

LAB18:    goto LAB2;

LAB8:    xsi_set_current_line(165, ng0);
    t1 = (t0 + 7540);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)6;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB9:    xsi_set_current_line(166, ng0);
    t1 = (t0 + 7540);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)7;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB10:    xsi_set_current_line(167, ng0);
    t1 = (t0 + 7540);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)8;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB11:    xsi_set_current_line(168, ng0);
    t1 = (t0 + 7540);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)9;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB12:    xsi_set_current_line(169, ng0);
    t1 = (t0 + 7540);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)10;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB13:    xsi_set_current_line(170, ng0);
    t1 = (t0 + 7540);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB14:    xsi_set_current_line(153, ng0);
    t4 = (t0 + 7540);
    t6 = (t4 + 32U);
    t7 = *((char **)t6);
    t10 = (t7 + 40U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)0;
    xsi_driver_first_trans_fast(t4);
    goto LAB15;

LAB17:    xsi_set_current_line(161, ng0);
    t1 = (t0 + 7540);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)4;
    xsi_driver_first_trans_fast(t1);
    goto LAB18;

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

LAB0:    xsi_set_current_line(178, ng0);
    t1 = (t0 + 3512U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 7288);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(179, ng0);
    t3 = (t0 + 3168U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t3 = (t0 + 7576);
    t6 = (t3 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t5;
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(180, ng0);
    t1 = (t0 + 3260U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (t0 + 7612);
    t4 = (t1 + 32U);
    t6 = *((char **)t4);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(181, ng0);
    t1 = (t0 + 3352U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (t0 + 7648);
    t4 = (t1 + 32U);
    t6 = *((char **)t4);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(182, ng0);
    t1 = (t0 + 3444U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (t0 + 7684);
    t4 = (t1 + 32U);
    t6 = *((char **)t4);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(183, ng0);
    t1 = (t0 + 3076U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (t0 + 7720);
    t4 = (t1 + 32U);
    t6 = *((char **)t4);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(184, ng0);
    t1 = (t0 + 2984U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (t0 + 7756);
    t4 = (t1 + 32U);
    t6 = *((char **)t4);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(185, ng0);
    t1 = (t0 + 2800U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB5;

LAB7:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(186, ng0);
    t1 = (t0 + 2708U);
    t4 = *((char **)t1);
    t1 = (t0 + 7792);
    t6 = (t1 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB6;

}

static void work_a_1705365798_3212880686_p_4(char *t0)
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
    int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;

LAB0:    xsi_set_current_line(195, ng0);
    t1 = (t0 + 3604U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 7296);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(196, ng0);
    t3 = (t0 + 3904U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t3 = (t0 + 7828);
    t6 = (t3 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t5;
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(197, ng0);
    t1 = (t0 + 3996U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (t0 + 7864);
    t4 = (t1 + 32U);
    t6 = *((char **)t4);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(199, ng0);
    t1 = (t0 + 3720U);
    t3 = *((char **)t1);
    t10 = (8 - 9);
    t11 = (t10 * -1);
    t12 = (1U * t11);
    t13 = (0 + t12);
    t1 = (t3 + t13);
    t2 = *((unsigned char *)t1);
    t4 = (t0 + 7900);
    t6 = (t4 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t2;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(200, ng0);
    t1 = (t0 + 3720U);
    t3 = *((char **)t1);
    t10 = (7 - 9);
    t11 = (t10 * -1);
    t12 = (1U * t11);
    t13 = (0 + t12);
    t1 = (t3 + t13);
    t2 = *((unsigned char *)t1);
    t4 = (t0 + 7936);
    t6 = (t4 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t2;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(201, ng0);
    t1 = (t0 + 3720U);
    t3 = *((char **)t1);
    t10 = (6 - 9);
    t11 = (t10 * -1);
    t12 = (1U * t11);
    t13 = (0 + t12);
    t1 = (t3 + t13);
    t2 = *((unsigned char *)t1);
    t4 = (t0 + 7972);
    t6 = (t4 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t2;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(202, ng0);
    t1 = (t0 + 3720U);
    t3 = *((char **)t1);
    t10 = (5 - 9);
    t11 = (t10 * -1);
    t12 = (1U * t11);
    t13 = (0 + t12);
    t1 = (t3 + t13);
    t2 = *((unsigned char *)t1);
    t4 = (t0 + 8008);
    t6 = (t4 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t2;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(203, ng0);
    t1 = (t0 + 3720U);
    t3 = *((char **)t1);
    t10 = (4 - 9);
    t11 = (t10 * -1);
    t12 = (1U * t11);
    t13 = (0 + t12);
    t1 = (t3 + t13);
    t2 = *((unsigned char *)t1);
    t4 = (t0 + 8044);
    t6 = (t4 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t2;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(204, ng0);
    t1 = (t0 + 3720U);
    t3 = *((char **)t1);
    t10 = (3 - 9);
    t11 = (t10 * -1);
    t12 = (1U * t11);
    t13 = (0 + t12);
    t1 = (t3 + t13);
    t2 = *((unsigned char *)t1);
    t4 = (t0 + 8080);
    t6 = (t4 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t2;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(205, ng0);
    t1 = (t0 + 3720U);
    t3 = *((char **)t1);
    t10 = (2 - 9);
    t11 = (t10 * -1);
    t12 = (1U * t11);
    t13 = (0 + t12);
    t1 = (t3 + t13);
    t2 = *((unsigned char *)t1);
    t4 = (t0 + 8116);
    t6 = (t4 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t2;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(206, ng0);
    t1 = (t0 + 3720U);
    t3 = *((char **)t1);
    t10 = (1 - 9);
    t11 = (t10 * -1);
    t12 = (1U * t11);
    t13 = (0 + t12);
    t1 = (t3 + t13);
    t2 = *((unsigned char *)t1);
    t4 = (t0 + 8152);
    t6 = (t4 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t2;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(207, ng0);
    t1 = (t0 + 3720U);
    t3 = *((char **)t1);
    t10 = (0 - 9);
    t11 = (t10 * -1);
    t12 = (1U * t11);
    t13 = (0 + t12);
    t1 = (t3 + t13);
    t2 = *((unsigned char *)t1);
    t4 = (t0 + 8188);
    t6 = (t4 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t2;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(209, ng0);
    t1 = (t0 + 4088U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (t0 + 8224);
    t4 = (t1 + 32U);
    t6 = *((char **)t4);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(210, ng0);
    t1 = (t0 + 4180U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (t0 + 8260);
    t4 = (t1 + 32U);
    t6 = *((char **)t4);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(211, ng0);
    t1 = (t0 + 4272U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (t0 + 8296);
    t4 = (t1 + 32U);
    t6 = *((char **)t4);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(212, ng0);
    t1 = (t0 + 4364U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (t0 + 8332);
    t4 = (t1 + 32U);
    t6 = *((char **)t4);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(213, ng0);
    t1 = (t0 + 4456U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (t0 + 8368);
    t4 = (t1 + 32U);
    t6 = *((char **)t4);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(214, ng0);
    t1 = (t0 + 4548U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (t0 + 8404);
    t4 = (t1 + 32U);
    t6 = *((char **)t4);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(215, ng0);
    t1 = (t0 + 4640U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (t0 + 8440);
    t4 = (t1 + 32U);
    t6 = *((char **)t4);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(216, ng0);
    t1 = (t0 + 4732U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (t0 + 8476);
    t4 = (t1 + 32U);
    t6 = *((char **)t4);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(217, ng0);
    t1 = (t0 + 4824U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (t0 + 8512);
    t4 = (t1 + 32U);
    t6 = *((char **)t4);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB3;

}

static void work_a_1705365798_3212880686_p_5(char *t0)
{
    char t6[16];
    char *t1;
    unsigned char t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    int t9;
    unsigned int t10;
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

LAB0:    xsi_set_current_line(223, ng0);
    t1 = (t0 + 3604U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 7304);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(224, ng0);
    t4 = (t0 + 12971);
    t7 = (t6 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 0;
    t8 = (t7 + 4U);
    *((int *)t8) = 3;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t9 = (3 - 0);
    t10 = (t9 * 1);
    t10 = (t10 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t10;
    t8 = (t0 + 3720U);
    t11 = *((char **)t8);
    t8 = (t0 + 12840U);
    t12 = ieee_p_3620187407_sub_4058165771_3965413181(IEEE_P_3620187407, t4, t6, t11, t8);
    if (t12 == 1)
        goto LAB8;

LAB9:    t3 = (unsigned char)0;

LAB10:    if (t3 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(227, ng0);
    t1 = (t0 + 8548);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t7 = (t5 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);

LAB6:    xsi_set_current_line(230, ng0);
    t1 = (t0 + 12975);
    t5 = (t6 + 0U);
    t7 = (t5 + 0U);
    *((int *)t7) = 0;
    t7 = (t5 + 4U);
    *((int *)t7) = 3;
    t7 = (t5 + 8U);
    *((int *)t7) = 1;
    t9 = (3 - 0);
    t10 = (t9 * 1);
    t10 = (t10 + 1);
    t7 = (t5 + 12U);
    *((unsigned int *)t7) = t10;
    t7 = (t0 + 3812U);
    t8 = *((char **)t7);
    t7 = (t0 + 12856U);
    t3 = ieee_p_3620187407_sub_4058165771_3965413181(IEEE_P_3620187407, t1, t6, t8, t7);
    if (t3 == 1)
        goto LAB14;

LAB15:    t2 = (unsigned char)0;

LAB16:    if (t2 != 0)
        goto LAB11;

LAB13:    xsi_set_current_line(233, ng0);
    t1 = (t0 + 8584);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t7 = (t5 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);

LAB12:    goto LAB3;

LAB5:    xsi_set_current_line(225, ng0);
    t16 = (t0 + 8548);
    t17 = (t16 + 32U);
    t18 = *((char **)t17);
    t19 = (t18 + 40U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = (unsigned char)2;
    xsi_driver_first_trans_fast(t16);
    goto LAB6;

LAB8:    t13 = (t0 + 3720U);
    t14 = *((char **)t13);
    t13 = (t0 + 12840U);
    t15 = ieee_p_3620187407_sub_2546382208_3965413181(IEEE_P_3620187407, t14, t13, 96);
    t3 = t15;
    goto LAB10;

LAB11:    xsi_set_current_line(231, ng0);
    t14 = (t0 + 8584);
    t16 = (t14 + 32U);
    t17 = *((char **)t16);
    t18 = (t17 + 40U);
    t19 = *((char **)t18);
    *((unsigned char *)t19) = (unsigned char)2;
    xsi_driver_first_trans_fast(t14);
    goto LAB12;

LAB14:    t11 = (t0 + 3812U);
    t13 = *((char **)t11);
    t11 = (t0 + 12856U);
    t12 = ieee_p_3620187407_sub_2546382208_3965413181(IEEE_P_3620187407, t13, t11, 2);
    t2 = t12;
    goto LAB16;

}

static void work_a_1705365798_3212880686_p_6(char *t0)
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

LAB0:    xsi_set_current_line(239, ng0);
    t2 = (t0 + 2524U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)2);
    if (t5 == 1)
        goto LAB5;

LAB6:    t2 = (t0 + 2524U);
    t6 = *((char **)t2);
    t7 = *((unsigned char *)t6);
    t8 = (t7 == (unsigned char)3);
    t1 = t8;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB8:    t13 = (t0 + 8620);
    t14 = (t13 + 32U);
    t15 = *((char **)t14);
    t16 = (t15 + 40U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = (unsigned char)3;
    xsi_driver_first_trans_fast(t13);

LAB2:    t18 = (t0 + 7312);
    *((int *)t18) = 1;

LAB1:    return;
LAB3:    t2 = (t0 + 8620);
    t9 = (t2 + 32U);
    t10 = *((char **)t9);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB2;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

LAB9:    goto LAB2;

}

static void work_a_1705365798_3212880686_p_7(char *t0)
{
    unsigned char t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    unsigned char t8;
    unsigned char t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;

LAB0:    xsi_set_current_line(240, ng0);
    t3 = (t0 + 2524U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)1);
    if (t6 == 1)
        goto LAB8;

LAB9:    t3 = (t0 + 2524U);
    t7 = *((char **)t3);
    t8 = *((unsigned char *)t7);
    t9 = (t8 == (unsigned char)2);
    t2 = t9;

LAB10:    if (t2 == 1)
        goto LAB5;

LAB6:    t3 = (t0 + 2524U);
    t10 = *((char **)t3);
    t11 = *((unsigned char *)t10);
    t12 = (t11 == (unsigned char)3);
    t1 = t12;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB11:    t17 = (t0 + 8656);
    t18 = (t17 + 32U);
    t19 = *((char **)t18);
    t20 = (t19 + 40U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = (unsigned char)3;
    xsi_driver_first_trans_fast(t17);

LAB2:    t22 = (t0 + 7320);
    *((int *)t22) = 1;

LAB1:    return;
LAB3:    t3 = (t0 + 8656);
    t13 = (t3 + 32U);
    t14 = *((char **)t13);
    t15 = (t14 + 40U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)2;
    xsi_driver_first_trans_fast(t3);
    goto LAB2;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

LAB8:    t2 = (unsigned char)1;
    goto LAB10;

LAB12:    goto LAB2;

}

static void work_a_1705365798_3212880686_p_8(char *t0)
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

LAB0:    xsi_set_current_line(241, ng0);
    t1 = (t0 + 2524U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)6);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t9 = (t0 + 8692);
    t10 = (t9 + 32U);
    t11 = *((char **)t10);
    t12 = (t11 + 40U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)3;
    xsi_driver_first_trans_fast(t9);

LAB2:    t14 = (t0 + 7328);
    *((int *)t14) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 8692);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_1705365798_3212880686_p_9(char *t0)
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

LAB0:    xsi_set_current_line(242, ng0);
    t1 = (t0 + 2524U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)8);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t9 = (t0 + 8728);
    t10 = (t9 + 32U);
    t11 = *((char **)t10);
    t12 = (t11 + 40U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)3;
    xsi_driver_first_trans_fast(t9);

LAB2:    t14 = (t0 + 7336);
    *((int *)t14) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 8728);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB6:    goto LAB2;

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

LAB0:    xsi_set_current_line(243, ng0);
    t2 = (t0 + 2524U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)1);
    if (t5 == 1)
        goto LAB5;

LAB6:    t2 = (t0 + 2524U);
    t6 = *((char **)t2);
    t7 = *((unsigned char *)t6);
    t8 = (t7 == (unsigned char)2);
    t1 = t8;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB8:    t13 = (t0 + 8764);
    t14 = (t13 + 32U);
    t15 = *((char **)t14);
    t16 = (t15 + 40U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = (unsigned char)2;
    xsi_driver_first_trans_fast(t13);

LAB2:    t18 = (t0 + 7344);
    *((int *)t18) = 1;

LAB1:    return;
LAB3:    t2 = (t0 + 8764);
    t9 = (t2 + 32U);
    t10 = *((char **)t9);
    t11 = (t10 + 40U);
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

LAB0:    xsi_set_current_line(244, ng0);
    t2 = (t0 + 2524U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)5);
    if (t5 == 1)
        goto LAB5;

LAB6:    t2 = (t0 + 2524U);
    t6 = *((char **)t2);
    t7 = *((unsigned char *)t6);
    t8 = (t7 == (unsigned char)6);
    t1 = t8;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB8:    t13 = (t0 + 8800);
    t14 = (t13 + 32U);
    t15 = *((char **)t14);
    t16 = (t15 + 40U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = (unsigned char)2;
    xsi_driver_first_trans_fast(t13);

LAB2:    t18 = (t0 + 7352);
    *((int *)t18) = 1;

LAB1:    return;
LAB3:    t2 = (t0 + 8800);
    t9 = (t2 + 32U);
    t10 = *((char **)t9);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB2;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

LAB9:    goto LAB2;

}


extern void work_a_1705365798_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1705365798_3212880686_p_0,(void *)work_a_1705365798_3212880686_p_1,(void *)work_a_1705365798_3212880686_p_2,(void *)work_a_1705365798_3212880686_p_3,(void *)work_a_1705365798_3212880686_p_4,(void *)work_a_1705365798_3212880686_p_5,(void *)work_a_1705365798_3212880686_p_6,(void *)work_a_1705365798_3212880686_p_7,(void *)work_a_1705365798_3212880686_p_8,(void *)work_a_1705365798_3212880686_p_9,(void *)work_a_1705365798_3212880686_p_10,(void *)work_a_1705365798_3212880686_p_11};
	xsi_register_didat("work_a_1705365798_3212880686", "isim/loopback_isim_beh.exe.sim/work/a_1705365798_3212880686.didat");
	xsi_register_executes(pe);
}
