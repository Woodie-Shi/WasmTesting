/*
yarpgen version 2.0 (build 91d3bf8 on 2024:03:02)
Seed: 1222917016
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
void test(unsigned long long int var_0, long long int var_1, long long int var_2, long long int var_3, unsigned short var_4, unsigned long long int var_5, unsigned short var_6, _Bool var_7, _Bool var_8, int zero) {
    var_10 = ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) var_1)) ? (var_2) : (var_3))))) ? (((((/* implicit */_Bool) min((0LL), (((/* implicit */long long int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (((((/* implicit */long long int) ((/* implicit */int) var_8))) & (var_1))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) min((var_6), (((/* implicit */unsigned short) (_Bool)1))))) : (((/* implicit */int) var_7))))));
    var_11 ^= var_8;
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((4294967295U), (((/* implicit */unsigned int) var_7))))), (max((var_0), (var_0)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_7))))) == (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_5))))))) : (var_5)));
    var_13 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((int) var_0))))) ? (((var_8) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_0))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) var_5))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7))))) : (var_2))))));
}
