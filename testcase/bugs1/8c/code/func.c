/*
yarpgen version 2.0 (build 91d3bf8 on 2024:03:02)
Seed: 392986603
Invocation: /home/nju/yarpgen/build/yarpgen --std=c -o /home/nju/WASM-testing/src/temp/7
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
void test(unsigned int var_1, signed char var_18, int zero, unsigned int arr_1 [18] ) {
    /* LoopSeq 1 */
    for (_Bool i_0 = ((((/* implicit */int) ((/* implicit */_Bool) var_18))) - (1))/*0*/; i_0 < (_Bool)1/*1*/; i_0 += ((/* implicit */int) ((/* implicit */_Bool) var_1))/*1*/) 
    {
        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 7607984486675928679LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (509334530802890602LL))))));
        arr_2 [i_0] = ((/* implicit */unsigned char) arr_1 [i_0]);
    }
    var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) 2097151U))));
}
