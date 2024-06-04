/*
yarpgen version 2.0 (build 91d3bf8 on 2024:03:02)
Seed: 2866460858
Invocation: /home/nju/yarpgen/build/yarpgen --std=c -o /home/nju/WASM-testing/src/temp/2
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
void test(unsigned long long int var_0, unsigned int var_1, unsigned long long int var_2, unsigned int var_3, unsigned int var_4, unsigned char var_5, unsigned short var_6, signed char var_7, long long int var_8, short var_9, unsigned char var_10, short var_11, int zero, long long int arr_0 [11] , short arr_2 [11] , unsigned int arr_3 [11] , long long int arr_4 [11] [11] , unsigned int arr_5 [11] [11] , _Bool arr_9 [11] [11] ) {
    /* LoopNest 3 */
    for (unsigned short i_0 = ((((/* implicit */int) ((/* implicit */unsigned short) -1877077556))) - (4553))/*3*/; i_0 < (unsigned short)10/*10*/; i_0 += (unsigned short)1/*1*/) 
    {
        for (unsigned long long int i_1 = ((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) -1877077546)) ? (((/* implicit */int) (unsigned char)243)) : (-1877077548))), ((+(((/* implicit */int) arr_2 [i_0 - 3]))))))) - (243ULL))/*0*/; i_1 < ((var_0) - (18021777822273642345ULL))/*11*/; i_1 += 2ULL/*2*/) 
        {
            for (short i_2 = ((((/* implicit */int) ((/* implicit */short) var_8))) - (1438))/*0*/; i_2 < ((((/* implicit */int) var_11)) + (5698))/*11*/; i_2 += ((((/* implicit */int) ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 + 1]))) - (var_4))) : (((arr_3 [i_0 - 2]) / (1647833171U))))))) - (15681))/*2*/) 
            {
                {
                    if (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 9U)) ? (arr_0 [i_0 - 3]) : (((/* implicit */long long int) -1877077564))))))) | (min((max((var_8), (((/* implicit */long long int) var_11)))), (arr_4 [(short)6] [i_0 + 1]))))))
                    {
                        var_13 = ((/* implicit */unsigned long long int) 1647833169U);
                        if (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)109))))) ? (var_3) : (4294967286U))))
                        {
                            if (((/* implicit */_Bool) var_2))
                            {
                                arr_7 [i_1] [i_2] = ((/* implicit */unsigned short) 17U);
                                /* LoopSeq 1 */
                                for (unsigned int i_3 = ((((/* implicit */unsigned int) var_6)) - (22570U))/*3*/; i_3 < 10U/*10*/; i_3 += 4U/*4*/) 
                                {
                                    arr_10 [i_0 - 3] [i_0 - 3] [i_2] [i_0 - 2] [i_3] = ((/* implicit */unsigned char) 16051155495775721466ULL);
                                    var_14 = ((/* implicit */long long int) (signed char)94);
                                }
                                var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_4) >> (((((/* implicit */int) (short)30393)) - (30390)))))) ? (((long long int) var_4)) : (((/* implicit */long long int) ((2647134130U) + (((/* implicit */unsigned int) (-(((/* implicit */int) var_5))))))))));
                                var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65529)) ? (arr_3 [i_2]) : (arr_3 [i_0 - 3])))) : (((((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned int) var_10))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1]))) : (var_2)))));
                            }

                            arr_11 [(_Bool)1] = ((/* implicit */short) ((((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) == (var_1)))) >> (((((arr_3 [i_0 - 1]) * (var_3))) - (4252577717U)))));
                            arr_12 [i_2] [i_2] [i_1] [i_0] = (((((+(var_4))) == (((/* implicit */unsigned int) -1605619519)))) ? (min((((((/* implicit */_Bool) arr_5 [i_1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [(unsigned char)9]))) : (var_2))), (((/* implicit */unsigned long long int) max((748144881), (913548069)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0 - 2])) ? (((((-1877077538) + (2147483647))) << (((((((/* implicit */int) var_9)) + (30306))) - (26))))) : (((/* implicit */int) var_11))))));
                        }

                    }

                    arr_13 [(short)10] [i_1] [(short)10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_9 [i_0 - 3] [i_0]) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)245)))))) ? (((((/* implicit */_Bool) 14067977768584796440ULL)) ? (((/* implicit */long long int) var_1)) : (arr_4 [i_0 + 1] [i_0]))) : (((/* implicit */long long int) ((var_4) & (((/* implicit */unsigned int) ((/* implicit */int) (short)18470))))))));
                    var_17 = ((/* implicit */unsigned short) arr_4 [i_0 - 2] [i_0 - 1]);
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned char) var_9);
}
