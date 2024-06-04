/*
yarpgen version 2.0 (build 91d3bf8 on 2024:03:02)
Seed: 797103413
Invocation: /home/nju/yarpgen/build/yarpgen --std=c -o /home/nju/WASM-testing/src/temp/4
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
void test(short var_0, _Bool var_1, long long int var_3, unsigned short var_8, _Bool var_10, unsigned int var_12, int zero) {
    /* LoopNest 2 */
    for (unsigned char i_0 = ((((/* implicit */int) ((/* implicit */unsigned char) var_12))) - (230))/*0*/; i_0 < ((((/* implicit */int) ((/* implicit */unsigned char) var_1))) + (24))/*25*/; i_0 += ((((/* implicit */int) ((/* implicit */unsigned char) var_1))) + (1))/*2*/) 
    {
        for (long long int i_1 = 0LL/*0*/; i_1 < ((((/* implicit */long long int) ((signed char) ((((/* implicit */int) var_1)) > (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))))) + (24LL))/*25*/; i_1 += ((((/* implicit */long long int) var_10)) + (2LL))/*2*/) 
        {
            {
                var_16 = ((/* implicit */unsigned short) 15U);
                var_17 &= ((/* implicit */short) (unsigned short)32982);
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned short) var_0);
    var_19 = ((unsigned char) (-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_3)))));
}
