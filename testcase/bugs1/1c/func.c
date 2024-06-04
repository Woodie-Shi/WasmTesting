/*
yarpgen version 2.0 (build 91d3bf8 on 2024:03:02)
Seed: 450398845
Invocation: /home/nju/yarpgen/build/yarpgen --std=c -o /home/nju/WASM-testing/src/temp/3
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
void test(long long int var_0, unsigned int var_2, unsigned short var_8, signed char var_10, unsigned int var_12, unsigned long long int var_19, int zero, unsigned short arr_1 [16] [16] , int arr_2 [16] , long long int arr_3 [16] [16] ) {
    /* LoopNest 2 */
    for (long long int i_0 = ((((/* implicit */long long int) var_12)) - (2969859455LL))/*0*/; i_0 < ((var_0) + (8513291509223734141LL))/*16*/; i_0 += 1LL/*1*/) 
    {
        for (_Bool i_1 = (_Bool)0/*0*/; i_1 < ((/* implicit */int) ((/* implicit */_Bool) (~((+(max((var_12), (var_2))))))))/*1*/; i_1 += ((/* implicit */int) ((/* implicit */_Bool) 481515647U))/*1*/) 
        {
            {
                var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) arr_3 [6U] [6U]))));
                arr_4 [i_0] = ((/* implicit */unsigned short) max((max((((/* implicit */unsigned long long int) arr_3 [i_0] [i_1])), (var_19))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3813451664U)) ? (481515621U) : (((/* implicit */unsigned int) max((-1864875053), (((/* implicit */int) (signed char)-35))))))))));
                arr_5 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)0)), (arr_1 [i_0] [i_1]))))) : (max((((/* implicit */long long int) 1041741131U)), (arr_3 [i_0] [i_1])))))) || (((/* implicit */_Bool) var_10))));
            }
        } 
    } 
    var_21 &= ((/* implicit */unsigned long long int) var_8);
}
