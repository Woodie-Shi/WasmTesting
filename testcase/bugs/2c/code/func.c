/*
yarpgen version 2.0 (build 91d3bf8 on 2024:03:02)
Seed: 4177331549
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
void test(long long int var_0, int var_1, unsigned char var_3, int var_5, unsigned short var_6, _Bool var_7, long long int var_8, short var_9, short var_10, int zero, _Bool arr_0 [24] , short arr_4 [24] [24] , long long int arr_6 [24] [24] [24] [24] , unsigned char arr_7 [24] [24] [24] [24] ) {
    var_11 = ((/* implicit */unsigned int) var_0);
    var_12 = ((/* implicit */long long int) ((var_1) >= (((/* implicit */int) var_10))));
    /* LoopNest 3 */
    for (short i_0 = ((((/* implicit */int) var_9)) - (19306))/*0*/; i_0 < (short)24/*24*/; i_0 += (short)4/*4*/) 
    {
        for (unsigned char i_1 = (unsigned char)3/*3*/; i_1 < ((((/* implicit */int) ((/* implicit */unsigned char) var_6))) - (230))/*22*/; i_1 += ((((/* implicit */int) var_3)) - (156))/*1*/) 
        {
            for (unsigned long long int i_2 = ((((/* implicit */unsigned long long int) var_8)) - (7779490442836994229ULL))/*0*/; i_2 < ((((/* implicit */unsigned long long int) arr_0 [i_0])) + (23ULL))/*24*/; i_2 += 3ULL/*3*/) 
            {
                {
                    var_13 = arr_7 [i_1] [i_1] [i_1 + 1] [i_1 - 1];
                    /* LoopNest 2 */
                    for (unsigned short i_3 = ((((/* implicit */int) ((/* implicit */unsigned short) min((((/* implicit */long long int) min((((((/* implicit */_Bool) 789635074)) ? (((/* implicit */int) var_10)) : (var_5))), (((/* implicit */int) ((unsigned short) var_7)))))), (arr_6 [i_0] [i_1 - 2] [i_1 - 1] [i_0]))))) - (1))/*0*/; i_3 < ((((/* implicit */int) ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_8), (((/* implicit */long long int) arr_4 [i_0] [i_1 + 1]))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7)))))) + (23))/*24*/; i_3 += (unsigned short)2/*2*/) 
                    {
                        for (long long int i_4 = 0LL/*0*/; i_4 < 24LL/*24*/; i_4 += 1LL/*1*/) 
                        {
                            {
                                var_14 -= ((/* implicit */signed char) 33030144);
                                arr_14 [(_Bool)1] [i_3] [i_2] [i_0] [i_0] = ((/* implicit */unsigned long long int) (unsigned short)65530);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */signed char) min((((unsigned long long int) var_1)), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((unsigned int) var_1))) * (((long long int) var_3)))))));
}
