/*
yarpgen version 2.0 (build 91d3bf8 on 2024:03:02)
Seed: 165150510
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
void test(short var_0, unsigned short var_1, _Bool var_3, _Bool var_4, long long int var_5, short var_6, int var_7, unsigned short var_8, long long int var_9, unsigned char var_10, int zero, unsigned short arr_1 [13] , short arr_2 [13] , unsigned long long int arr_5 [13] , _Bool arr_17 [20] [20] , unsigned short arr_18 [20] , unsigned short arr_19 [20] , signed char arr_20 [20] [20] ) {
    /* LoopNest 2 */
    for (long long int i_0 = 3LL/*3*/; i_0 < ((((/* implicit */long long int) var_0)) - (8930LL))/*9*/; i_0 += ((((/* implicit */long long int) var_7)) + (606647895LL))/*4*/) 
    {
        for (int i_1 = 2/*2*/; i_1 < 12/*12*/; i_1 += ((var_7) + (606647892))/*1*/) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = ((((/* implicit */long long int) var_1)) - (5546LL))/*0*/; i_2 < ((((/* implicit */long long int) (~(min((((/* implicit */unsigned long long int) arr_1 [i_1 + 1])), (arr_5 [2])))))) + (58641LL))/*13*/; i_2 += ((((/* implicit */long long int) var_0)) - (8937LL))/*2*/) 
                {
                    for (unsigned int i_3 = 1U/*1*/; i_3 < 10U/*10*/; i_3 += 3U/*3*/) 
                    {
                        for (_Bool i_4 = (_Bool)0/*0*/; i_4 < ((/* implicit */int) ((/* implicit */_Bool) (~(((/* implicit */int) ((short) arr_1 [i_1 - 2]))))))/*1*/; i_4 += ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_9) >> (((((/* implicit */int) var_6)) + (25381)))))) ? (((/* implicit */int) ((_Bool) var_6))) : ((~(((/* implicit */int) (unsigned short)65527)))))))))) + (1))/*1*/) 
                        {
                            {
                                arr_15 [i_0] [i_1] [i_2] [i_0] [i_4] = ((/* implicit */short) ((unsigned long long int) (short)(-32767 - 1)));
                                arr_16 [i_1] [(short)3] [(short)3] [6LL] [(_Bool)1] [(short)3] [(signed char)3] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)0)), (0U)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (!(((/* implicit */_Bool) 2144850128))))))), (((((/* implicit */_Bool) arr_2 [i_0 - 2])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_2 [i_0 + 4]))))));
                            }
                        } 
                    } 
                } 
                var_11 = ((/* implicit */_Bool) max((0U), (((/* implicit */unsigned int) (unsigned short)23668))));
            }
        } 
    } 
    var_12 = var_7;
    /* LoopNest 3 */
    for (short i_5 = (short)4/*4*/; i_5 < ((((/* implicit */int) ((/* implicit */short) var_9))) - (1122))/*17*/; i_5 += ((((/* implicit */int) ((/* implicit */short) var_8))) + (22648))/*2*/) 
    {
        for (unsigned int i_6 = ((((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) (short)-29809)) <= (((/* implicit */int) (_Bool)0))))) - (((arr_17 [i_5 - 4] [i_5]) ? (((/* implicit */int) arr_17 [i_5 - 4] [i_5])) : (((/* implicit */int) arr_17 [i_5 - 3] [i_5]))))))) - (1U))/*0*/; i_6 < ((((/* implicit */unsigned int) var_8)) - (42870U))/*20*/; i_6 += ((((/* implicit */unsigned int) var_5)) - (1746374678U))/*2*/) 
        {
            for (_Bool i_7 = ((/* implicit */int) ((/* implicit */_Bool) min((((unsigned long long int) ((((/* implicit */int) var_3)) & (((/* implicit */int) var_1))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((9197009916771077736ULL), (((/* implicit */unsigned long long int) var_8))))) ? ((~(((/* implicit */int) var_4)))) : (((((/* implicit */int) var_3)) % (((/* implicit */int) var_0))))))))))/*0*/; i_7 < ((/* implicit */int) var_4)/*1*/; i_7 += ((/* implicit */int) ((/* implicit */_Bool) min((((int) arr_20 [i_5 + 3] [i_5 - 1])), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_17 [i_5 + 3] [i_5 - 1])) : (((/* implicit */int) arr_19 [i_5 + 3])))))))/*1*/) 
            {
                {
                    var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */int) var_1)) < (((/* implicit */int) arr_18 [i_6])))))))) : (((unsigned long long int) max((((/* implicit */int) var_1)), (var_7))))));
                    var_14 += ((/* implicit */short) ((2144850128) < ((((!((_Bool)1))) ? (((/* implicit */int) var_0)) : ((+(((/* implicit */int) var_4))))))));
                }
            } 
        } 
    } 
    var_15 = var_7;
}
