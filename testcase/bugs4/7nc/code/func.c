/*
yarpgen version 2.0 (build 91d3bf8 on 2024:03:02)
Seed: 2271676245
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
void test(unsigned char var_6, _Bool var_9, _Bool var_11, int zero) {
    /* LoopNest 2 */
    for (long long int i_0 = ((((/* implicit */long long int) var_9)) - (1LL))/*0*/; i_0 < 13LL/*13*/; i_0 += ((((/* implicit */long long int) var_6)) - (139LL))/*2*/) 
    {
        for (short i_1 = (short)0/*0*/; i_1 < ((((/* implicit */int) (short)-24455)) + (24468))/*13*/; i_1 += ((((/* implicit */int) ((/* implicit */short) var_6))) - (139))/*2*/) 
        {
            {
                var_12 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)38591))));
                arr_4 [i_0] [i_0] = ((/* implicit */int) ((short) -4767660774643695640LL));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6))));
    var_14 ^= ((/* implicit */long long int) var_11);
    var_15 = ((/* implicit */_Bool) max((5883834716704064197ULL), (((/* implicit */unsigned long long int) (short)24455))));
}
