/*
yarpgen version 2.0 (build 91d3bf8 on 2024:03:02)
Seed: 804439329
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
void test(int var_0, unsigned int var_1, unsigned int var_2, unsigned char var_5, signed char var_6, long long int var_8, unsigned long long int var_11, unsigned long long int var_12, long long int var_13, int zero) {
    var_14 = ((/* implicit */unsigned int) max((var_14), ((+(var_2)))));
    var_15 = var_6;
    if ((!(((/* implicit */_Bool) var_11))))
    {
        var_16 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))) & (var_1)));
        var_17 = ((/* implicit */unsigned long long int) var_5);
    }
    else
    {
        var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) var_13))));
        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((_Bool) (unsigned char)212)))))) : (((unsigned int) ((((/* implicit */_Bool) (unsigned short)55539)) ? (var_12) : (((/* implicit */unsigned long long int) var_8)))))));
    }

}
