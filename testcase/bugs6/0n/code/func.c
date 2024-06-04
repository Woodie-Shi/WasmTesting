/*
yarpgen version 2.0 (build 91d3bf8 on 2024:03:02)
Seed: 1273352599
Invocation: /home/nju/yarpgen/build/yarpgen --std=c -o /home/nju/WASM-testing/src/temp/0
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
void test(signed char var_0, long long int var_1, int var_2, unsigned long long int var_3, _Bool var_4, short var_5, unsigned long long int var_6, long long int var_7, unsigned long long int var_8, unsigned long long int var_9, int var_10, int zero, int arr_0 [20] , long long int arr_1 [20] , signed char arr_2 [20] , signed char arr_3 [20] , int arr_4 [20] , short arr_6 [20] , short arr_7 [20] , unsigned long long int arr_8 [20] [20] , signed char arr_9 [20] , short arr_10 [20] [20] , short arr_12 [20] [20] [20] [20] [20] [20] [20] , unsigned long long int arr_16 [20] [20] [20] , short arr_17 [20] [20] [20] [20] [20] [20] , short arr_18 [20] , long long int arr_19 [20] [20] [20] [20] , long long int arr_23 [20] [20] [20] [20] [20] [20] ) {
    var_11 = ((/* implicit */unsigned long long int) var_5);
    if (((/* implicit */_Bool) ((unsigned long long int) (-(((/* implicit */int) var_0))))))
    {
        var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) ((signed char) (_Bool)1)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (max((13026902558178007441ULL), (5419841515531544159ULL))))))));
        if (((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551603ULL)) ? (((/* implicit */int) var_4)) : (var_2)))) : ((+(13026902558178007440ULL))))) : (var_9))))
        {
            var_13 = ((/* implicit */unsigned long long int) var_1);
            var_14 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */long long int) 1391537975)) <= (var_1))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : ((+(var_1)))));
            var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) var_4))));
        }

        /* LoopNest 2 */
        for (_Bool i_0 = (_Bool)0/*0*/; i_0 < ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_5))) <= (var_7)))/*0*/; i_0 += ((/* implicit */int) ((/* implicit */_Bool) (-(var_10))))/*1*/) 
        {
            for (unsigned long long int i_1 = ((var_8) - (8760921967692241197ULL))/*0*/; i_1 < ((var_8) - (8760921967692241177ULL))/*20*/; i_1 += ((var_8) - (8760921967692241194ULL))/*3*/) 
            {
                {
                    arr_5 [i_0] [i_1] = ((/* implicit */unsigned short) (-(1ULL)));
                    var_16 &= ((/* implicit */signed char) (+((-(((/* implicit */int) arr_3 [i_0 + 1]))))));
                    var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1]))) - (arr_1 [i_0])))) ? (((var_1) - (arr_1 [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0 + 1])))))) ? (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_4 [i_0]) : (arr_4 [i_1])))) - (((((/* implicit */unsigned long long int) 1391537956)) - (10898314696735626677ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) arr_0 [i_1])) : (var_6)))))))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (long long int i_2 = 0LL/*0*/; i_2 < 20LL/*20*/; i_2 += 1LL/*1*/) 
                    {
                        var_18 = arr_4 [i_2];
                        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((unsigned long long int) arr_6 [i_0 + 1]))));
                        var_20 = arr_8 [i_0 + 1] [i_0];
                        /* LoopNest 2 */
                        for (long long int i_3 = 0LL/*0*/; i_3 < 20LL/*20*/; i_3 += 3LL/*3*/) 
                        {
                            for (signed char i_4 = (signed char)2/*2*/; i_4 < (signed char)18/*18*/; i_4 += ((((/* implicit */int) ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) arr_10 [(signed char)16] [i_3])) : (((/* implicit */int) arr_10 [(signed char)2] [i_1]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_9 [i_0])) : (((/* implicit */int) arr_10 [2] [i_2]))))) : (arr_8 [(short)6] [(short)6]))))) - (102))/*1*/) 
                            {
                                {
                                    var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) arr_2 [2ULL]))));
                                    arr_13 [i_0] [i_1] [i_2] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (5ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2]))))) >= (((/* implicit */unsigned long long int) arr_1 [i_0 + 1]))));
                                }
                            } 
                        } 
                    }
                    /* vectorizable */
                    for (short i_5 = (short)1/*1*/; i_5 < ((((/* implicit */int) ((/* implicit */short) var_4))) + (18))/*19*/; i_5 += ((((/* implicit */int) ((/* implicit */short) var_8))) - (22826))/*3*/) /* same iter space */
                    {
                        var_22 = ((/* implicit */int) min((var_22), (((((/* implicit */_Bool) 1125831187365888ULL)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_7 [i_0 + 1]))))));
                        var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) 3419339257418639997LL))));
                        var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) var_5))));
                        /* LoopSeq 2 */
                        for (short i_6 = ((((/* implicit */int) ((/* implicit */short) ((((/* implicit */_Bool) -6972621184329116108LL)) ? (var_9) : (((/* implicit */unsigned long long int) arr_4 [i_5])))))) - (4586))/*2*/; i_6 < (short)17/*17*/; i_6 += ((((/* implicit */int) ((/* implicit */short) var_2))) - (14801))/*2*/) 
                        {
                            var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_0] [i_5 - 1] [i_6 + 1] [i_6] [i_6] [i_6 + 2])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) & (18446744073709551599ULL))) : (((((/* implicit */_Bool) arr_0 [i_6])) ? (arr_16 [i_0] [i_0] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1])))))));
                            var_26 = ((/* implicit */_Bool) arr_16 [i_6] [i_0] [i_1]);
                        }
                        for (unsigned long long int i_7 = ((((/* implicit */unsigned long long int) (signed char)-111)) - (18446744073709551503ULL))/*2*/; i_7 < 17ULL/*17*/; i_7 += 3ULL/*3*/) 
                        {
                            var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2352147313715141904ULL)) ? (((/* implicit */int) arr_12 [i_7] [i_0] [i_5] [i_1] [i_0] [i_0] [i_0])) : (564798347)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) arr_7 [i_7])) : (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))) : (arr_19 [i_0] [i_5 - 1] [i_5] [i_7])));
                            var_28 = ((/* implicit */int) max((var_28), (((((/* implicit */_Bool) 4ULL)) ? (((/* implicit */int) arr_2 [16ULL])) : (((/* implicit */int) arr_2 [(_Bool)1]))))));
                            /* LoopSeq 1 */
                            for (signed char i_8 = ((((/* implicit */int) var_0)) - (120))/*4*/; i_8 < ((((/* implicit */int) ((/* implicit */signed char) var_10))) + (138))/*19*/; i_8 += ((((/* implicit */int) ((/* implicit */signed char) arr_18 [i_0]))) + (113))/*1*/) 
                            {
                                var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_7 [i_0 + 1])) : (((/* implicit */int) arr_7 [i_0 + 1])))))));
                                var_30 -= ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_5]))))) ? (((/* implicit */unsigned long long int) arr_23 [i_8 + 1] [(signed char)18] [i_8] [i_8] [i_8] [i_8])) : (((((/* implicit */_Bool) 3519919933307465320LL)) ? (var_3) : (arr_8 [i_5] [8])))));
                            }
                        }
                    }
                    for (short i_9 = (short)1/*1*/; i_9 < ((((/* implicit */int) ((/* implicit */short) var_4))) + (18))/*19*/; i_9 += ((((/* implicit */int) ((/* implicit */short) var_8))) - (22826))/*3*/) /* same iter space */
                    {
                        var_31 |= ((((((/* implicit */_Bool) var_0)) ? (max((((/* implicit */unsigned long long int) (unsigned short)54587)), (5419841515531544159ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (arr_9 [i_0]))))))) < (((((/* implicit */_Bool) ((((/* implicit */_Bool) 5419841515531544174ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)113))) : (1663392029089619813ULL)))) ? (((/* implicit */unsigned long long int) max((arr_1 [i_0]), (((/* implicit */long long int) arr_10 [8ULL] [i_9]))))) : ((+(var_9))))));
                        var_32 += ((/* implicit */signed char) min(((unsigned short)58037), (((/* implicit */unsigned short) (signed char)93))));
                    }
                }
            } 
        } 
        var_33 = ((/* implicit */signed char) min((var_7), (((/* implicit */long long int) ((unsigned short) (signed char)-107)))));
        var_34 = ((/* implicit */_Bool) max((var_9), (var_9)));
    }
    else
    {
        var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3519919933307465328LL)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) -1391537976))));
        var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) -1577367495)) ? (564798343) : (((/* implicit */int) (signed char)107))));
        var_37 = ((/* implicit */long long int) var_9);
    }

    var_38 = ((/* implicit */unsigned long long int) (unsigned short)55116);
    var_39 = ((/* implicit */unsigned long long int) ((_Bool) (signed char)(-127 - 1)));
}
