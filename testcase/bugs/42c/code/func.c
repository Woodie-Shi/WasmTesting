/*
yarpgen version 2.0 (build 91d3bf8 on 2024:03:02)
Seed: 1200729601
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
void test(int var_1, long long int var_2, long long int var_6, _Bool var_7, unsigned long long int var_10, int var_12, unsigned short var_13, int zero) {
    var_16 |= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_12)) < (min((var_10), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (var_1) : (var_1))))))));
    if (((/* implicit */_Bool) var_6))
    {
        var_17 = ((/* implicit */unsigned long long int) (unsigned short)32704);
        var_18 = min((((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_13)))) / ((~(var_10))))), (((/* implicit */unsigned long long int) max((((((/* implicit */int) (unsigned short)32832)) >> (((var_2) + (2928614114023280500LL))))), (((var_12) * (((/* implicit */int) var_7))))))));
    }

}
