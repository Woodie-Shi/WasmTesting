/*
yarpgen version 2.0 (build 91d3bf8 on 2024:03:02)
Seed: 2243290837
Invocation: /home/nju/yarpgen/build/yarpgen --std=c -o /home/nju/WASM-testing/src/temp/1
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
void test(unsigned short var_0, unsigned short var_1, unsigned short var_2, unsigned long long int var_3, unsigned short var_4, unsigned short var_5, unsigned short var_6, unsigned long long int var_7, unsigned short var_8, unsigned short var_9, unsigned short var_10, unsigned short var_11, unsigned short var_12, unsigned short var_13, unsigned short var_14, unsigned short var_15, unsigned short var_16, unsigned long long int var_17, unsigned short var_18, unsigned long long int var_19, int zero, unsigned short arr_0 [14] , unsigned short arr_2 [14] [14] , unsigned short arr_3 [14] [14] , unsigned short arr_4 [14] [14] [14] , unsigned short arr_5 [14] [14] [14] , unsigned short arr_6 [14] , unsigned short arr_7 [14] [14] [14] , unsigned short arr_8 [14] [14] [14] , unsigned short arr_9 [14] [14] , unsigned short arr_10 [14] [14] [14] [14] [14] , unsigned short arr_11 [14] [14] , unsigned short arr_14 [14] [14] [14] [14] , unsigned short arr_15 [14] [14] [14] [14] , unsigned short arr_17 [14] [14] , unsigned short arr_18 [14] [14] [14] [14] , unsigned short arr_20 [14] [14] [14] , unsigned short arr_21 [14] [14] [14] [14] , unsigned short arr_22 [14] [14] [14] , unsigned long long int arr_23 [14] [14] , unsigned long long int arr_24 [14] [14] [14] [14] [14] , unsigned short arr_25 [14] [14] [14] [14] , unsigned short arr_27 [14] [14] [14] , unsigned short arr_29 [14] [14] [14] [14] , unsigned short arr_33 [14] , unsigned short arr_34 [14] [14] [14] [14] , unsigned short arr_35 [14] , unsigned short arr_36 [14] [14] [14] [14] [14] , unsigned long long int arr_38 [14] [14] [14] [14] , unsigned short arr_39 [14] [14] [14] [14] [14] [14] , unsigned short arr_41 [14] [14] [14] [14] , unsigned short arr_44 [14] [14] [14] [14] [14] , unsigned short arr_45 [14] [14] [14] [14] , unsigned short arr_49 [14] [14] [14] [14] , unsigned short arr_50 [14] [14] [14] [14] , unsigned short arr_55 [14] [14] [14] , unsigned short arr_56 [14] [14] [14] , unsigned long long int arr_63 [14] [14] [14] [14] [14] [14] [14] , unsigned short arr_74 [14] [14] [14] , unsigned long long int arr_75 [14] [14] [14] ) {
    /* LoopNest 2 */
    for (unsigned short i_0 = ((((/* implicit */int) var_1)) - (55890))/*2*/; i_0 < (unsigned short)12/*12*/; i_0 += (unsigned short)3/*3*/) 
    {
        for (unsigned short i_1 = (unsigned short)0/*0*/; i_1 < (unsigned short)14/*14*/; i_1 += (unsigned short)4/*4*/) 
        {
            {
                var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [(unsigned short)4] [i_0]))) : (var_17))))));
                if (((/* implicit */_Bool) arr_3 [i_0] [i_0]))
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_2 = ((((/* implicit */int) ((/* implicit */unsigned short) (+(((/* implicit */int) min((arr_6 [i_0 - 1]), ((unsigned short)65521)))))))) - (22305))/*1*/; i_2 < (unsigned short)10/*10*/; i_2 += ((((/* implicit */int) var_16)) - (10092))/*4*/) 
                    {
                        var_21 = ((/* implicit */unsigned short) max((var_21), ((unsigned short)28588)));
                        var_22 = ((/* implicit */unsigned short) max((((/* implicit */int) min((var_12), (arr_3 [i_0 - 2] [i_0 - 2])))), ((~(((/* implicit */int) var_0))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_3 = ((((/* implicit */int) ((/* implicit */unsigned short) var_19))) - (4127))/*2*/; i_3 < ((((/* implicit */int) ((/* implicit */unsigned short) var_19))) - (4117))/*12*/; i_3 += (unsigned short)4/*4*/) 
                        {
                            arr_12 [i_3] [i_3] |= arr_7 [i_0] [i_0 - 1] [i_0];
                            arr_13 [i_2] = ((/* implicit */unsigned long long int) var_15);
                            var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_6 [i_0 - 2])) : (((/* implicit */int) arr_0 [i_0 - 2])))))));
                            var_24 = ((unsigned long long int) ((unsigned short) var_16));
                        }
                    }
                    /* vectorizable */
                    for (unsigned short i_4 = (unsigned short)4/*4*/; i_4 < ((((/* implicit */int) var_11)) - (36735))/*13*/; i_4 += ((((/* implicit */int) ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0 - 1])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_6 [(unsigned short)9])))))) - (23692))/*3*/) 
                    {
                        var_25 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_4 [i_0 - 2] [i_4 - 1] [i_4 - 1]))));
                        arr_16 [i_0] [i_1] [i_0] = var_8;
                        /* LoopSeq 1 */
                        for (unsigned short i_5 = ((((/* implicit */int) arr_11 [3ULL] [i_1])) - (26339))/*3*/; i_5 < (unsigned short)12/*12*/; i_5 += (unsigned short)3/*3*/) 
                        {
                            if (((/* implicit */_Bool) var_3))
                            {
                                arr_19 [i_0] [i_1] [i_4] [i_5] = ((/* implicit */unsigned long long int) (unsigned short)25218);
                                var_26 = ((/* implicit */unsigned short) min((var_26), ((unsigned short)0)));
                            }

                            var_27 = ((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [i_0]);
                            var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_4 - 1] [i_4 - 1])) ? (((/* implicit */int) arr_9 [i_0] [i_0])) : (((((/* implicit */_Bool) arr_11 [i_0] [i_1])) ? (((/* implicit */int) (unsigned short)55523)) : (((/* implicit */int) var_16))))));
                        }
                    }
                    for (unsigned long long int i_6 = ((((/* implicit */unsigned long long int) var_9)) - (25462ULL))/*0*/; i_6 < ((var_7) - (6995475061946561253ULL))/*14*/; i_6 += 4ULL/*4*/) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_7 = (unsigned short)2/*2*/; i_7 < ((((/* implicit */int) ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (max((var_7), (((/* implicit */unsigned long long int) max((var_4), (var_14)))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_7 [i_0 + 1] [i_0 + 2] [i_6]))))))))) - (45801))/*10*/; i_7 += (unsigned short)4/*4*/) 
                        {
                            var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) min((min((((/* implicit */unsigned long long int) var_1)), (arr_24 [i_0] [i_6] [i_0] [i_0 - 2] [i_0]))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_12))))))))));
                            arr_26 [i_0] [i_7] = min((((((/* implicit */_Bool) arr_21 [i_0] [i_0 + 1] [i_7] [i_7 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_0] [i_0 + 1] [i_0 + 1] [i_6]))) : (var_19))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_0] [i_0 - 2] [12ULL] [i_7])) ? (((/* implicit */int) arr_18 [i_0] [i_0 - 2] [i_0] [i_7])) : (((/* implicit */int) arr_18 [i_0] [i_0 + 1] [i_0] [i_1]))))));
                        }
                        for (unsigned short i_8 = (unsigned short)0/*0*/; i_8 < (unsigned short)14/*14*/; i_8 += ((((/* implicit */int) arr_25 [(unsigned short)7] [(unsigned short)7] [i_6] [i_0 + 2])) - (10088))/*3*/) 
                        {
                            var_30 = ((/* implicit */unsigned short) min((var_30), (var_18)));
                            var_31 = ((/* implicit */unsigned short) max((var_31), ((unsigned short)45498)));
                        }
                        for (unsigned long long int i_9 = ((((/* implicit */unsigned long long int) arr_25 [i_0 + 2] [i_1] [i_1] [i_6])) - (10091ULL))/*0*/; i_9 < ((((/* implicit */unsigned long long int) (unsigned short)24380)) - (24366ULL))/*14*/; i_9 += ((((/* implicit */unsigned long long int) var_0)) - (13600ULL))/*4*/) 
                        {
                            var_32 = (unsigned short)32105;
                            var_33 = ((/* implicit */unsigned long long int) var_5);
                            arr_31 [i_0] [i_0] = ((unsigned short) var_0);
                            arr_32 [i_0] [i_0] [i_6] [i_6] [i_9] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) var_15)), (min((((/* implicit */unsigned long long int) min(((unsigned short)13068), ((unsigned short)25699)))), (var_19)))));
                        }
                        /* LoopSeq 2 */
                        for (unsigned short i_10 = (unsigned short)1/*1*/; i_10 < ((((/* implicit */int) arr_20 [i_1] [i_1] [i_0])) - (14327))/*13*/; i_10 += ((((/* implicit */int) var_15)) - (60773))/*4*/) 
                        {
                            /* LoopSeq 1 */
                            for (unsigned long long int i_11 = ((((/* implicit */unsigned long long int) max((((/* implicit */int) arr_8 [i_6] [i_1] [i_0 + 2])), ((~(((/* implicit */int) arr_8 [i_1] [i_1] [i_0 + 1]))))))) - (30913ULL))/*0*/; i_11 < 14ULL/*14*/; i_11 += 4ULL/*4*/) 
                            {
                                var_34 = (unsigned short)49283;
                                var_35 = arr_7 [i_1] [i_6] [i_1];
                            }
                            var_36 = ((/* implicit */unsigned short) max((var_36), (max((arr_6 [i_1]), (((unsigned short) arr_22 [i_0 - 2] [i_1] [i_10 + 1]))))));
                            arr_37 [i_10 + 1] [(unsigned short)9] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_27 [i_0 - 2] [i_0 + 2] [i_10 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_0] [i_1] [1ULL] [i_1]))) : (max((arr_24 [i_0 - 2] [i_1] [i_0 - 2] [i_10 - 1] [i_0 - 1]), (((/* implicit */unsigned long long int) arr_14 [i_0 - 1] [i_0 - 1] [i_10 - 1] [i_10]))))));
                            var_37 = ((/* implicit */unsigned long long int) max((var_37), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((+(((/* implicit */int) arr_10 [i_0] [i_1] [i_6] [i_0] [i_10])))), (((/* implicit */int) arr_29 [i_0] [i_0] [i_0] [i_0]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : (((/* implicit */int) arr_17 [i_10] [i_0])))))));
                        }
                        for (unsigned short i_12 = (unsigned short)0/*0*/; i_12 < ((((/* implicit */int) var_2)) - (61900))/*14*/; i_12 += ((((/* implicit */int) var_5)) - (34023))/*3*/) 
                        {
                            arr_42 [i_0] [i_0] [i_6] [6ULL] [i_12] [i_12] = (-(((((/* implicit */_Bool) arr_24 [i_0 + 1] [i_0 + 1] [i_0 + 2] [i_0 - 1] [i_0 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16896))) : (arr_24 [i_0 + 2] [i_0 + 2] [i_0 - 2] [i_0 - 2] [i_0 + 2]))));
                            arr_43 [i_1] [i_12] = arr_17 [i_0 - 2] [i_0];
                        }
                        /* LoopSeq 1 */
                        for (unsigned short i_13 = ((((/* implicit */int) ((/* implicit */unsigned short) var_7))) - (45809))/*2*/; i_13 < (unsigned short)13/*13*/; i_13 += ((((/* implicit */int) var_12)) - (241))/*4*/) 
                        {
                            arr_46 [i_0] [i_6] [i_0] [i_0] = var_6;
                            if (((/* implicit */_Bool) arr_23 [i_0] [i_1]))
                            {
                                var_38 = ((/* implicit */unsigned short) min((17788162207801371780ULL), (((/* implicit */unsigned long long int) (unsigned short)60838))));
                                var_39 = ((/* implicit */unsigned short) max((var_39), (var_14)));
                                var_40 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_41 [i_1] [i_1] [i_6] [i_1])) ? (((/* implicit */int) arr_25 [i_0] [i_0] [i_6] [i_13])) : (((/* implicit */int) arr_2 [i_6] [i_13]))));
                            }

                        }
                        var_41 = ((/* implicit */unsigned short) max((arr_24 [i_0] [i_0] [i_6] [i_6] [i_1]), (((/* implicit */unsigned long long int) arr_5 [i_6] [i_6] [i_6]))));
                    }
                    arr_47 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) var_3);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_14 = (unsigned short)2/*2*/; i_14 < ((((/* implicit */int) arr_25 [i_1] [i_1] [i_0 + 2] [i_0])) - (10080))/*11*/; i_14 += (unsigned short)4/*4*/) 
                    {
                        if (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) var_5))) ? (((/* implicit */int) arr_8 [i_14] [i_14 - 1] [i_14])) : (((/* implicit */int) arr_6 [i_0 + 2])))))
                        {
                            /* LoopSeq 1 */
                            for (unsigned short i_15 = ((((/* implicit */int) var_2)) - (61914))/*0*/; i_15 < ((((/* implicit */int) var_10)) - (51218))/*14*/; i_15 += (unsigned short)4/*4*/) 
                            {
                                var_42 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_45 [i_14] [i_14 - 1] [i_14 - 2] [i_14 - 1]))));
                                arr_53 [i_0] [i_0] [i_14] [(unsigned short)1] = ((unsigned short) arr_15 [i_0 - 1] [i_14 + 3] [i_15] [i_15]);
                                var_43 = ((/* implicit */unsigned short) min((var_43), (arr_39 [(unsigned short)2] [i_15] [i_15] [i_14 + 2] [i_15] [i_15])));
                                arr_54 [i_0] [i_0] [i_0 - 1] [i_0 - 1] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 1]))));
                                var_44 = var_18;
                            }
                            /* LoopSeq 1 */
                            for (unsigned short i_16 = ((((/* implicit */int) var_11)) - (36748))/*0*/; i_16 < ((((/* implicit */int) ((unsigned short) 144114913197948928ULL))) + (14))/*14*/; i_16 += (unsigned short)4/*4*/) 
                            {
                                var_45 = ((/* implicit */unsigned short) var_19);
                                arr_59 [i_16] = var_11;
                                var_46 = ((unsigned short) var_18);
                            }
                            var_47 = arr_4 [i_0] [i_0] [i_14 - 1];
                            /* LoopNest 2 */
                            for (unsigned short i_17 = ((((/* implicit */int) var_12)) - (245))/*0*/; i_17 < (unsigned short)14/*14*/; i_17 += ((((/* implicit */int) var_5)) - (34023))/*3*/) 
                            {
                                for (unsigned short i_18 = ((((/* implicit */int) arr_35 [i_1])) - (8203))/*1*/; i_18 < ((((/* implicit */int) var_2)) - (61902))/*12*/; i_18 += ((((/* implicit */int) var_13)) - (23691))/*4*/) 
                                {
                                    {
                                        if (((/* implicit */_Bool) var_3))
                                        {
                                            var_48 = ((/* implicit */unsigned short) max((var_48), (arr_50 [i_17] [i_14] [i_1] [i_0])));
                                            if (((/* implicit */_Bool) arr_38 [i_18 + 1] [i_14 + 3] [i_0 + 1] [i_0]))
                                            {
                                                var_49 = (unsigned short)34350;
                                                arr_64 [i_0] [i_0] [i_17] [i_17] [i_18] = arr_44 [i_1] [i_1] [i_14] [i_14] [i_1];
                                            }

                                            arr_65 [i_18 + 1] [i_18 + 1] [i_17] [i_14] [i_17] [i_1] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_16))));
                                            if ((!(((/* implicit */_Bool) arr_23 [i_18 - 1] [i_0]))))
                                            {
                                                if (((/* implicit */_Bool) var_7))
                                                {
                                                    arr_66 [i_0] [(unsigned short)4] [i_14] [i_17] [i_1] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_24 [i_18 - 1] [i_17] [i_14] [i_1] [i_0])) ? (arr_63 [i_0] [i_14 + 3] [i_14 + 1] [i_0] [i_14 + 1] [(unsigned short)6] [i_14 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8192)))));
                                                    arr_67 [i_17] [i_17] [i_17] = arr_25 [i_0] [i_18] [i_18] [i_18];
                                                    arr_68 [3ULL] [i_18] [i_17] [i_17] [3ULL] [i_17] = arr_55 [i_0] [i_14] [i_17];
                                                    var_50 += var_10;
                                                    arr_69 [i_17] [i_1] [i_17] [(unsigned short)5] [i_18] [i_1] [i_0] = arr_33 [i_1];
                                                }
                                                else
                                                {
                                                    var_51 = arr_20 [i_0 - 1] [i_0] [i_0];
                                                    var_52 = ((/* implicit */unsigned short) min((var_52), (arr_14 [i_0] [i_0] [i_14] [i_17])));
                                                    arr_70 [i_0] [i_17] [i_0 - 2] = ((/* implicit */unsigned long long int) var_16);
                                                }

                                                var_53 -= ((/* implicit */unsigned long long int) var_6);
                                            }

                                        }
                                        else
                                        {
                                            var_54 = arr_56 [i_0] [i_0 - 1] [i_0 - 1];
                                            arr_71 [i_0] [i_1] [i_17] [i_17] [i_0] = ((/* implicit */unsigned long long int) arr_15 [i_0] [i_1] [i_18] [i_17]);
                                            if (((/* implicit */_Bool) arr_24 [i_0] [i_0] [i_18 - 1] [i_14] [i_0 + 1]))
                                            {
                                                var_55 = var_12;
                                                var_56 -= ((/* implicit */unsigned short) var_19);
                                                var_57 += ((/* implicit */unsigned short) var_7);
                                            }

                                        }

                                        var_58 = ((unsigned short) arr_55 [i_0 - 1] [i_1] [i_14 + 2]);
                                        arr_72 [(unsigned short)7] [i_1] [i_14] [i_17] [i_17] = ((unsigned long long int) arr_49 [i_18 - 1] [i_18] [i_18] [i_18]);
                                        if (((/* implicit */_Bool) var_13))
                                        {
                                            arr_73 [i_0] [i_0] [i_0] [(unsigned short)11] [i_17] = ((/* implicit */unsigned short) var_3);
                                            var_59 = ((/* implicit */unsigned long long int) max((var_59), (15839294970300849939ULL)));
                                        }

                                        var_60 = ((/* implicit */unsigned short) max((var_60), (var_14)));
                                    }
                                } 
                            } 
                        }

                        if (((/* implicit */_Bool) ((unsigned short) var_17)))
                        {
                            /* LoopSeq 2 */
                            for (unsigned short i_19 = ((((/* implicit */int) ((/* implicit */unsigned short) ((unsigned long long int) arr_8 [i_1] [i_1] [i_1])))) - (30911))/*2*/; i_19 < (unsigned short)12/*12*/; i_19 += ((((/* implicit */int) var_1)) - (55889))/*3*/) /* same iter space */
                            {
                                var_61 = ((((/* implicit */_Bool) (unsigned short)65521)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_0] [i_14 + 3] [i_14]))) : (arr_38 [i_0 + 2] [i_0 - 1] [i_0] [i_0 + 2]));
                                var_62 *= var_12;
                                var_63 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_14])) ? (((/* implicit */int) (unsigned short)27836)) : (((/* implicit */int) var_8))));
                            }
                            for (unsigned short i_20 = ((((/* implicit */int) ((/* implicit */unsigned short) ((unsigned long long int) arr_8 [i_1] [i_1] [i_1])))) - (30911))/*2*/; i_20 < (unsigned short)12/*12*/; i_20 += ((((/* implicit */int) var_1)) - (55889))/*3*/) /* same iter space */
                            {
                                arr_80 [i_1] [i_1] [i_1] [i_0] = ((unsigned short) arr_23 [i_0 + 1] [i_20 - 2]);
                                if (((/* implicit */_Bool) ((unsigned short) arr_36 [i_0] [i_1] [(unsigned short)2] [i_0] [(unsigned short)1])))
                                {
                                    arr_81 [(unsigned short)3] [i_0 + 2] = ((/* implicit */unsigned short) (-(((unsigned long long int) arr_74 [i_0] [i_1] [i_14]))));
                                    arr_82 [i_0 + 2] [i_0 + 2] [i_14] [i_20] = ((/* implicit */unsigned long long int) arr_6 [i_0]);
                                }

                            }
                            arr_83 [i_0] [i_1] [i_1] [i_14] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_1] [i_0 + 1])) ? (((/* implicit */int) arr_22 [i_14 + 3] [i_1] [i_14 + 3])) : (((/* implicit */int) var_1))));
                        }

                        var_64 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2465570095097315080ULL)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_34 [i_0 + 2] [i_1] [i_0 + 1] [i_14 - 2]))));
                        arr_84 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) arr_75 [i_0] [(unsigned short)13] [i_14]);
                    }
                }

                var_65 = var_5;
                var_66 = var_1;
                var_67 = arr_44 [i_0] [i_1] [i_1] [i_1] [i_1];
            }
        } 
    } 
    var_68 *= ((/* implicit */unsigned short) var_19);
    var_69 = var_12;
    var_70 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) (unsigned short)6170)) ? ((+(((/* implicit */int) (unsigned short)545)))) : (((/* implicit */int) var_8)))) : (((((/* implicit */_Bool) (~(var_3)))) ? (((/* implicit */int) ((unsigned short) var_11))) : (((/* implicit */int) var_4))))));
}
