/*
yarpgen version 2.0 (build 91d3bf8 on 2024:03:02)
Seed: 728622852
Invocation: /home/nju/yarpgen/build/yarpgen --std=c -o /home/nju/WASM-testing/src/temp/5
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test(unsigned short var_0, unsigned short var_1, signed char var_2, unsigned char var_3, int var_4, unsigned short var_5, unsigned short var_6, unsigned int var_7, unsigned int var_8, unsigned int var_9, signed char var_10, unsigned char var_11, int zero, short arr_0 [12] , int arr_1 [12] , signed char arr_2 [12] , signed char arr_3 [12] , unsigned short arr_5 [12] , unsigned short arr_6 [12] [12] [12] , unsigned char arr_7 [12] [12] [12] [12] , signed char arr_8 [12] [12] , int arr_9 [12] [12] [12] [12] [12] , int arr_10 [12] [12] , _Bool arr_11 [12] [12] [12] , signed char arr_13 [12] [12] , long long int arr_15 [12] , _Bool arr_17 [12] [12] [12] [12] , short arr_21 [12] [12] [12] [12] [12] , unsigned char arr_22 [12] [12] [12] [12] [12] [12] , unsigned int arr_31 [12] [12] , int arr_34 [12] , unsigned char arr_36 [12] [12] [12] [12] , signed char arr_37 [12] [12] [12] , long long int arr_39 [12] [12] [12] [12] , short arr_40 [12] [12] [12] [12] [12] , _Bool arr_42 [12] [12] [12] [12] , short arr_48 [12] [12] [12] [12] , unsigned int arr_53 [12] [12] [12] , int arr_66 [12] [12] [12] [12] [12] [12] , unsigned char arr_69 [12] [12] [12] [12] [12] , _Bool arr_78 [12] [12] [12] [12] [12] , int arr_82 [12] [12] [12] [12] , short arr_84 [12] [12] [12] [12] [12] , _Bool arr_88 [12] [12] [12] [12] [12] [12] [12] , signed char arr_95 [12] [12] [12] [12] , unsigned char arr_96 [12] [12] [12] [12] ) {
    var_12 = ((/* implicit */int) (~(var_8)));
    /* LoopSeq 1 */
    for (unsigned char i_0 = ((((/* implicit */int) var_11)) - (93))/*0*/; i_0 < ((((/* implicit */int) ((/* implicit */unsigned char) var_8))) - (173))/*12*/; i_0 += ((((/* implicit */int) ((/* implicit */unsigned char) (~(((/* implicit */int) var_11)))))) - (159))/*3*/) 
    {
        arr_4 [i_0] [i_0] |= ((/* implicit */unsigned char) var_6);
        if (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_10))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_2)))))
        {
            var_13 = ((/* implicit */long long int) arr_3 [i_0]);
            var_14 = ((/* implicit */long long int) (-((+(arr_1 [i_0])))));
            /* LoopSeq 4 */
            for (unsigned int i_1 = ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(var_7)))) ? (((/* implicit */int) var_3)) : (arr_1 [i_0])))) - (210U))/*0*/; i_1 < ((((/* implicit */unsigned int) var_2)) - (4294967204U))/*12*/; i_1 += ((((/* implicit */unsigned int) var_3)) - (207U))/*3*/) 
            {
                var_15 = ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_10))))))) ? ((+(var_8))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1]))));
                /* LoopNest 2 */
                for (unsigned char i_2 = (unsigned char)0/*0*/; i_2 < ((((/* implicit */int) ((/* implicit */unsigned char) var_9))) - (155))/*12*/; i_2 += ((((/* implicit */int) ((/* implicit */unsigned char) var_4))) - (78))/*3*/) 
                {
                    for (signed char i_3 = ((((/* implicit */int) arr_2 [i_1])) + (49))/*0*/; i_3 < (signed char)12/*12*/; i_3 += ((((/* implicit */int) ((/* implicit */signed char) (-(((/* implicit */int) var_6)))))) - (21))/*1*/) 
                    {
                        {
                            arr_12 [i_0] [i_1] [i_3] [i_3] = ((/* implicit */short) arr_5 [i_1]);
                            var_16 -= ((/* implicit */unsigned char) (+(((/* implicit */int) arr_11 [i_3] [i_2] [i_0]))));
                        }
                    } 
                } 
            }
            for (unsigned int i_4 = ((((/* implicit */unsigned int) (-((+(((/* implicit */int) arr_0 [i_0]))))))) - (4294961945U))/*3*/; i_4 < (((+((-(var_8))))) - (2715527741U))/*10*/; i_4 += 1U/*1*/) 
            {
                arr_16 [i_0] [i_4] = ((/* implicit */short) (+(((/* implicit */int) arr_0 [i_0]))));
                var_17 -= ((/* implicit */unsigned short) arr_7 [i_0] [i_4 + 1] [i_0] [i_0]);
                var_18 = ((/* implicit */unsigned char) arr_2 [i_4]);
                /* LoopNest 3 */
                for (int i_5 = ((((/* implicit */int) ((((/* implicit */_Bool) var_9)) ? ((+(var_9))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0] [i_4 + 1])))))) + (503442265))/*0*/; i_5 < ((((/* implicit */int) var_11)) - (81))/*12*/; i_5 += (((~(((/* implicit */int) arr_7 [i_0] [i_4 - 2] [i_4] [i_4])))) + (206))/*4*/) 
                {
                    for (int i_6 = 2/*2*/; i_6 < 9/*9*/; i_6 += ((((/* implicit */int) var_9)) + (503442268))/*3*/) 
                    {
                        for (signed char i_7 = ((((/* implicit */int) ((/* implicit */signed char) (+(var_9))))) + (89))/*0*/; i_7 < (signed char)12/*12*/; i_7 += (signed char)3/*3*/) 
                        {
                            {
                                var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) (~((~(((/* implicit */int) arr_21 [i_5] [i_4] [i_5] [i_6 + 1] [i_7])))))))));
                                var_20 = ((/* implicit */_Bool) arr_9 [i_0] [i_4 + 2] [i_5] [i_6] [i_7]);
                                arr_23 [i_0] [i_4 - 3] [i_5] [i_6] [i_7] = ((/* implicit */unsigned char) arr_5 [i_7]);
                                arr_24 [i_7] [i_7] [i_7] [(unsigned short)6] [i_6] [i_7] [i_7] = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_1))))))))));
                                var_21 -= (!(((/* implicit */_Bool) var_0)));
                            }
                        } 
                    } 
                } 
            }
            /* vectorizable */
            for (unsigned short i_8 = (unsigned short)0/*0*/; i_8 < (unsigned short)12/*12*/; i_8 += (unsigned short)3/*3*/) /* same iter space */
            {
                arr_28 [i_8] [i_8] = ((/* implicit */short) (~(arr_10 [i_0] [i_0])));
                var_22 -= ((/* implicit */short) (+(((/* implicit */int) var_3))));
            }
            for (unsigned short i_9 = (unsigned short)0/*0*/; i_9 < (unsigned short)12/*12*/; i_9 += (unsigned short)3/*3*/) /* same iter space */
            {
                var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (signed char)-111)))))));
                arr_32 [i_9] = ((/* implicit */long long int) (~(((/* implicit */int) arr_7 [i_0] [i_9] [i_9] [i_9]))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (int i_10 = 0/*0*/; i_10 < 12/*12*/; i_10 += 1/*1*/) 
                {
                    var_24 &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_9] [i_10]))));
                    /* LoopNest 2 */
                    for (unsigned char i_11 = (unsigned char)0/*0*/; i_11 < ((((/* implicit */int) ((/* implicit */unsigned char) var_0))) - (75))/*12*/; i_11 += ((((/* implicit */int) ((/* implicit */unsigned char) var_9))) - (166))/*1*/) 
                    {
                        for (unsigned char i_12 = (unsigned char)0/*0*/; i_12 < ((((/* implicit */int) ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) 0))))))))) + (11))/*12*/; i_12 += (unsigned char)2/*2*/) 
                        {
                            {
                                var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) var_3))));
                                var_26 += ((/* implicit */_Bool) (~(((/* implicit */int) arr_13 [i_0] [i_9]))));
                            }
                        } 
                    } 
                    arr_43 [i_0] [(unsigned short)3] [i_10] |= ((/* implicit */short) (~((-(((/* implicit */int) (signed char)-42))))));
                }
                for (unsigned int i_13 = ((((/* implicit */unsigned int) var_6)) - (33767U))/*3*/; i_13 < ((((/* implicit */unsigned int) var_0)) - (588U))/*11*/; i_13 += ((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)114))))) - (4294967180U))/*2*/) /* same iter space */
                {
                    arr_46 [i_0] &= ((/* implicit */_Bool) (~(arr_9 [i_0] [i_0] [i_13] [i_9] [i_0])));
                    arr_47 [i_0] [i_0] [i_0] [i_13] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0)) ? (arr_39 [i_0] [0U] [i_13 - 2] [i_13 - 1]) : (arr_39 [i_9] [i_9] [i_13 - 2] [i_13 + 1])))) ? (((((/* implicit */_Bool) arr_39 [i_0] [i_13] [i_13 - 1] [i_13 - 1])) ? (16) : (var_4))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_39 [i_9] [i_9] [i_13 - 2] [i_13 - 3])))))));
                    var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) arr_1 [5U]))));
                    var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) (~((~(var_8))))))));
                    if (((/* implicit */_Bool) (~(((/* implicit */int) (signed char)121)))))
                    {
                        var_29 -= ((/* implicit */int) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [(short)8] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) var_4)) : (var_8))))))));
                        var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) var_9))));
                    }
                    else
                    {
                        /* LoopNest 2 */
                        for (long long int i_14 = 2LL/*2*/; i_14 < ((((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)111))))) + (10LL))/*10*/; i_14 += ((((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) -2348801611040158663LL)))))))) + (3LL))/*3*/) 
                        {
                            for (unsigned char i_15 = (unsigned char)1/*1*/; i_15 < (unsigned char)10/*10*/; i_15 += ((((/* implicit */int) ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) var_4)))))))) + (3))/*4*/) 
                            {
                                {
                                    var_31 = ((/* implicit */unsigned int) min((var_31), (var_8)));
                                    var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_36 [i_9] [i_13 - 2] [i_14 + 2] [i_15 + 2])) ? (var_4) : (((/* implicit */int) arr_36 [i_9] [i_13 - 2] [i_14 + 1] [i_15 - 1]))))) ? (arr_34 [(signed char)1]) : (2062822922)));
                                    var_33 = ((/* implicit */long long int) max((var_33), (((/* implicit */long long int) (~(((/* implicit */int) (short)480)))))));
                                }
                            } 
                        } 
                        /* LoopSeq 1 */
                        for (unsigned char i_16 = (unsigned char)0/*0*/; i_16 < ((((/* implicit */int) ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_37 [i_0] [i_0] [11U]))))) ? (((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) 16)) ? (((/* implicit */int) (unsigned char)90)) : (((/* implicit */int) (signed char)107)))) : (((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_0])))) : ((~(((/* implicit */int) var_3)))))))) - (78))/*12*/; i_16 += ((((/* implicit */int) ((/* implicit */unsigned char) var_4))) - (80))/*1*/) 
                        {
                            if (((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))))
                            {
                                var_34 = (((!(((/* implicit */_Bool) var_1)))) ? ((-(((/* implicit */int) arr_37 [i_9] [i_9] [i_9])))) : ((+((-(-1))))));
                                var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? ((~(((/* implicit */int) var_2)))) : (-17)));
                                arr_56 [i_0] [i_9] [i_13] [i_9] [i_13] [i_16] = ((/* implicit */unsigned short) arr_15 [i_0]);
                                var_36 += ((/* implicit */short) arr_8 [i_0] [i_0]);
                            }

                            var_37 = ((/* implicit */signed char) var_3);
                        }
                    }

                }
                for (unsigned int i_17 = ((((/* implicit */unsigned int) var_6)) - (33767U))/*3*/; i_17 < ((((/* implicit */unsigned int) var_0)) - (588U))/*11*/; i_17 += ((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)114))))) - (4294967180U))/*2*/) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (int i_18 = 0/*0*/; i_18 < ((((/* implicit */int) var_2)) + (92))/*12*/; i_18 += ((((/* implicit */int) var_0)) - (595))/*4*/) 
                    {
                        var_38 |= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_48 [i_0] [i_17 + 1] [i_17 - 3] [i_18])) ? (((/* implicit */int) arr_48 [i_0] [i_17 - 1] [i_17 + 1] [i_17])) : (((/* implicit */int) var_10))))));
                        var_39 |= ((/* implicit */short) -16);
                    }
                    for (unsigned char i_19 = ((((/* implicit */int) var_11)) - (93))/*0*/; i_19 < (unsigned char)12/*12*/; i_19 += ((((/* implicit */int) ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) -8595590397812283376LL)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))))))))) + (3))/*3*/) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_20 = ((((/* implicit */int) ((/* implicit */unsigned short) var_8))) - (21945))/*0*/; i_20 < ((((/* implicit */int) ((/* implicit */unsigned short) (~(644820547U))))) - (53680))/*12*/; i_20 += ((((/* implicit */int) var_5)) - (64218))/*4*/) 
                        {
                            var_40 = ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)63))));
                            var_41 = ((/* implicit */long long int) max((var_41), (((/* implicit */long long int) (-((-(((/* implicit */int) var_0)))))))));
                        }
                        for (unsigned char i_21 = ((((/* implicit */int) ((/* implicit */unsigned char) var_6))) - (233))/*1*/; i_21 < (unsigned char)10/*10*/; i_21 += ((((/* implicit */int) ((/* implicit */unsigned char) var_5))) - (221))/*1*/) 
                        {
                            var_42 = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)255))))))))));
                            arr_71 [i_0] [i_9] [i_9] [i_17] [i_19] [i_0] [i_17] = ((/* implicit */short) -1);
                        }
                        /* vectorizable */
                        for (int i_22 = 1/*1*/; i_22 < 11/*11*/; i_22 += 2/*2*/) 
                        {
                            arr_74 [i_0] [i_9] [i_17] [i_0] [i_17] = ((/* implicit */short) -21);
                            arr_75 [i_0] [i_9] [(short)4] [i_19] [i_22] |= ((/* implicit */unsigned int) arr_69 [i_19] [i_19] [i_19] [i_19] [i_19]);
                            arr_76 [i_0] [i_0] [i_9] [i_17] [(unsigned short)10] [i_22] |= ((/* implicit */short) arr_66 [(signed char)4] [i_9] [i_9] [i_9] [i_9] [i_9]);
                        }
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (int i_23 = 2/*2*/; i_23 < 9/*9*/; i_23 += 3/*3*/) 
                        {
                            var_43 = ((/* implicit */short) min((var_43), (((/* implicit */short) var_3))));
                            arr_80 [i_17] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_22 [i_9] [i_9] [i_23 + 3] [i_19] [i_17] [i_0])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_22 [i_0] [i_9] [i_23 + 2] [i_9] [i_17] [i_0]))));
                            var_44 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_53 [i_0] [i_23 + 3] [i_17 - 3]))));
                            var_45 = ((/* implicit */short) (+((-(((/* implicit */int) var_1))))));
                        }
                        for (unsigned int i_24 = ((((/* implicit */unsigned int) var_5)) - (64222U))/*0*/; i_24 < 12U/*12*/; i_24 += 3U/*3*/) 
                        {
                            var_46 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-((~(((/* implicit */int) var_6)))))))));
                            var_47 &= ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_78 [(short)10] [i_19] [i_17 - 3] [i_9] [(short)10]))))) ? (((/* implicit */int) var_5)) : ((~(((/* implicit */int) (_Bool)1))))));
                        }
                        /* vectorizable */
                        for (short i_25 = (short)2/*2*/; i_25 < (short)11/*11*/; i_25 += (short)1/*1*/) 
                        {
                            var_48 = ((/* implicit */unsigned char) var_6);
                            var_49 -= var_0;
                        }
                        for (unsigned int i_26 = ((((/* implicit */unsigned int) var_4)) - (1787277134U))/*3*/; i_26 < 10U/*10*/; i_26 += ((((/* implicit */unsigned int) 16)) - (12U))/*4*/) 
                        {
                            arr_90 [i_0] [i_9] [i_9] [i_17] [(short)0] [i_26 - 3] |= ((/* implicit */unsigned char) var_5);
                            var_50 = ((/* implicit */int) max((var_50), (((/* implicit */int) 612299675U))));
                        }
                    }
                    var_51 = ((((/* implicit */_Bool) arr_7 [i_0] [8U] [8U] [i_0])) ? (((((/* implicit */_Bool) 3650146749U)) ? ((~(((/* implicit */int) var_2)))) : (((/* implicit */int) arr_42 [i_17] [i_17 - 2] [i_17 - 3] [i_17 + 1])))) : (((/* implicit */int) var_5)));
                }
                for (unsigned int i_27 = ((((/* implicit */unsigned int) var_6)) - (33767U))/*3*/; i_27 < ((((/* implicit */unsigned int) var_0)) - (588U))/*11*/; i_27 += ((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)114))))) - (4294967180U))/*2*/) /* same iter space */
                {
                    arr_94 [i_27] [i_27] [i_0] = (~((-(arr_82 [i_27] [i_9] [i_0] [i_27]))));
                    if (((/* implicit */_Bool) (~(((/* implicit */int) var_5)))))
                    {
                        var_52 += ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(arr_53 [i_27] [i_27 - 1] [i_27]))))));
                        var_53 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_84 [i_27] [i_27 - 1] [i_27] [i_27 - 1] [i_9])))))));
                        var_54 &= (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [i_27 - 1] [i_27 + 1] [i_27 - 3]))))));
                    }

                    /* LoopNest 2 */
                    for (int i_28 = ((((/* implicit */int) var_11)) - (92))/*1*/; i_28 < 10/*10*/; i_28 += ((((/* implicit */int) var_11)) - (91))/*2*/) 
                    {
                        for (signed char i_29 = ((/* implicit */int) ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_95 [i_0] [(unsigned short)2] [i_27 + 1] [i_28 + 1])) : (((/* implicit */int) arr_95 [i_0] [(unsigned char)0] [i_27 - 2] [i_28 + 1]))))))))/*0*/; i_29 < (signed char)12/*12*/; i_29 += (signed char)1/*1*/) 
                        {
                            {
                                var_55 = ((/* implicit */unsigned int) min((var_55), ((+((+(var_9)))))));
                                var_56 -= ((/* implicit */unsigned char) arr_2 [i_27]);
                                var_57 += ((/* implicit */short) (~((~(((/* implicit */int) var_0))))));
                                arr_99 [i_0] [i_27] [(unsigned short)1] [i_28 + 2] [i_29] [i_27] [i_28 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_96 [i_0] [i_9] [i_9] [i_29])) ? (((/* implicit */int) var_3)) : ((-(((/* implicit */int) arr_40 [i_27 + 1] [i_27 - 2] [i_28 + 1] [i_29] [i_28 + 1]))))));
                            }
                        } 
                    } 
                }
                var_58 = ((/* implicit */signed char) (-(((/* implicit */int) var_1))));
            }
            var_59 -= ((/* implicit */short) (~((~(arr_31 [i_0] [i_0])))));
        }

        var_60 = ((/* implicit */int) min((var_60), (((/* implicit */int) (!(((/* implicit */_Bool) (~(1824920713)))))))));
        arr_100 [i_0] = ((/* implicit */int) arr_88 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
        arr_101 [(signed char)1] = ((/* implicit */short) var_8);
    }
}
