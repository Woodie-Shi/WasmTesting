/*
yarpgen version 2.0 (build 91d3bf8 on 2024:03:02)
Seed: 2723800562
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
void test(unsigned short var_1, _Bool var_3, unsigned int var_4, signed char var_5, unsigned short var_6, unsigned char var_7, unsigned int var_8, _Bool var_9, int var_10, int zero, unsigned short arr_0 [24] , unsigned short arr_1 [24] , int arr_2 [24] [24] [24] , _Bool arr_3 [24] [24] , signed char arr_4 [24] [24] [24] [24] , unsigned int arr_6 [24] [24] [24] , _Bool arr_7 [24] [24] [24] [24] , signed char arr_9 [24] [24] [24] [24] , unsigned int arr_11 [24] ) {
    var_14 -= ((/* implicit */_Bool) (~(var_10)));
    /* LoopNest 2 */
    for (_Bool i_0 = (_Bool)0/*0*/; i_0 < (_Bool)0/*0*/; i_0 += (_Bool)1/*1*/) 
    {
        for (unsigned short i_1 = ((((/* implicit */int) ((/* implicit */unsigned short) var_7))) - (29))/*0*/; i_1 < ((((/* implicit */int) ((/* implicit */unsigned short) ((_Bool) ((var_4) - (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 + 1])))))))) + (23))/*24*/; i_1 += ((((/* implicit */int) var_6)) - (26299))/*3*/) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_2 = ((((/* implicit */int) ((/* implicit */unsigned char) var_9))) - (1))/*0*/; i_2 < ((((/* implicit */int) ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)21))) : (((-6734236793161030798LL) + (6734236793161030798LL))))))) + (3))/*24*/; i_2 += (unsigned char)2/*2*/) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_3 = (_Bool)0/*0*/; i_3 < ((((/* implicit */int) ((/* implicit */_Bool) ((int) min((arr_1 [i_0 + 1]), (arr_1 [i_0 + 1])))))) - (1))/*0*/; i_3 += ((/* implicit */int) ((/* implicit */_Bool) arr_0 [2ULL]))/*1*/) 
                    {
                        if (((/* implicit */_Bool) 6734236793161030798LL))
                        {
                            if (((/* implicit */_Bool) min((((((/* implicit */_Bool) (+(6734236793161030798LL)))) ? (arr_2 [i_0 + 1] [i_0 + 1] [i_3 + 1]) : (((/* implicit */int) var_3)))), (((/* implicit */int) arr_7 [i_0] [(unsigned char)17] [i_0] [i_3])))))
                            {
                                var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) -6734236793161030788LL))));
                                var_16 = ((/* implicit */int) ((((arr_6 [i_3 + 1] [(unsigned short)15] [i_1]) - (arr_6 [i_3 + 1] [i_1] [i_1]))) + (((/* implicit */unsigned int) (-(((/* implicit */int) var_1)))))));
                            }
                            else
                            {
                                var_17 = ((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0 + 1]);
                                if (((/* implicit */_Bool) (-(min((min((((/* implicit */unsigned int) arr_7 [(unsigned short)4] [i_2] [(unsigned short)4] [(unsigned short)4])), (var_8))), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_3 [i_0] [i_2]))))))))))
                                {
                                    var_18 = ((/* implicit */_Bool) min((var_18), (((((((/* implicit */int) ((unsigned short) 0U))) % (((/* implicit */int) arr_9 [i_0 + 1] [i_0 + 1] [i_2] [18])))) != (arr_2 [(unsigned short)14] [i_3 + 1] [i_0 + 1])))));
                                    /* LoopSeq 1 */
                                    for (unsigned long long int i_4 = ((((/* implicit */unsigned long long int) var_1)) - (46019ULL))/*1*/; i_4 < ((((/* implicit */unsigned long long int) var_5)) - (18446744073709551547ULL))/*21*/; i_4 += 4ULL/*4*/) 
                                    {
                                        var_19 += ((/* implicit */unsigned short) arr_2 [i_0] [i_1] [i_2]);
                                        arr_12 [i_0] [i_1] [i_1] [i_1] [i_1] [i_4] = ((/* implicit */long long int) (+(((/* implicit */int) arr_9 [i_0] [i_1] [i_3] [i_3]))));
                                    }
                                    arr_13 [i_0] [i_1] [i_0] = 4294967295U;
                                }

                            }

                            var_20 = ((/* implicit */int) 6734236793161030808LL);
                        }

                        arr_14 [i_1] [i_1] = ((/* implicit */unsigned int) arr_3 [i_3 + 1] [i_1]);
                        arr_15 [i_1] [i_1] = min((arr_11 [i_1]), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [i_0 + 1]))))));
                    }
                    var_21 |= ((((/* implicit */unsigned long long int) 612164818U)) + (907969170645035316ULL));
                    arr_16 [i_1] = ((/* implicit */signed char) (+(((/* implicit */int) arr_1 [i_1]))));
                }
                var_22 = ((((/* implicit */_Bool) max(((+(((/* implicit */int) var_9)))), (((/* implicit */int) (short)-32745))))) ? (((0U) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)111))))) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_4 [i_1] [i_0 + 1] [i_1] [i_1]), (((/* implicit */signed char) arr_7 [i_0] [i_0] [i_1] [i_0 + 1])))))));
            }
        } 
    } 
}
