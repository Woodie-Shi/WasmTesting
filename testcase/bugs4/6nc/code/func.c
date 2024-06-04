/*
yarpgen version 2.0 (build 91d3bf8 on 2024:03:02)
Seed: 449092082
Invocation: /home/nju/yarpgen/build/yarpgen --std=c -o /home/nju/WASM-testing/src/temp/9
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
void test(long long int var_4, short var_6, unsigned short var_7, int var_8, short var_11, long long int var_12, int var_14, unsigned char var_16, int zero) {
    var_18 = ((/* implicit */unsigned char) var_7);
    var_19 = ((/* implicit */unsigned char) (short)7047);
    /* LoopNest 3 */
    for (unsigned short i_0 = ((((/* implicit */int) ((/* implicit */unsigned short) max((var_12), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)30720)) ? (((/* implicit */int) (unsigned char)31)) : (((/* implicit */int) (unsigned short)65535))))))))) - (59497))/*1*/; i_0 < ((((/* implicit */int) ((/* implicit */unsigned short) var_12))) - (59480))/*18*/; i_0 += (unsigned short)4/*4*/) 
    {
        for (long long int i_1 = ((((/* implicit */long long int) var_6)) - (29202LL))/*0*/; i_1 < 21LL/*21*/; i_1 += ((((/* implicit */long long int) (unsigned short)25605)) - (25603LL))/*2*/) 
        {
            for (unsigned char i_2 = ((((/* implicit */int) ((/* implicit */unsigned char) var_14))) - (129))/*1*/; i_2 < ((((/* implicit */int) ((/* implicit */unsigned char) var_8))) - (96))/*20*/; i_2 += (unsigned char)1/*1*/) 
            {
                {
                    var_20 = ((/* implicit */signed char) min((((((/* implicit */_Bool) var_16)) ? (min((((/* implicit */unsigned int) (short)-24116)), (4064247281U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))), (((/* implicit */unsigned int) var_6))));
                    arr_6 [i_2] [i_1] [i_0] &= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) 0U)) ? (var_4) : (9223372036854775807LL))), (((/* implicit */long long int) max((((/* implicit */unsigned int) var_11)), (2462191572U))))));
                }
            } 
        } 
    } 
}
