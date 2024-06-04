/*
yarpgen version 2.0 (build 91d3bf8 on 2024:03:02)
Seed: 27640951
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
void test(unsigned char var_2, unsigned char var_6, signed char var_8, long long int var_10, int var_12, int zero) {
    /* LoopNest 2 */
    for (short i_0 = ((((/* implicit */int) ((/* implicit */short) var_12))) - (8628))/*0*/; i_0 < ((((/* implicit */int) ((/* implicit */short) 0ULL))) + (11))/*11*/; i_0 += ((((/* implicit */int) ((/* implicit */short) var_8))) + (109))/*1*/) 
    {
        for (unsigned short i_1 = ((((/* implicit */int) ((/* implicit */unsigned short) var_2))) - (70))/*0*/; i_1 < (unsigned short)11/*11*/; i_1 += ((((/* implicit */int) ((/* implicit */unsigned short) var_6))) - (199))/*4*/) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = ((((/* implicit */long long int) var_2)) - (70LL))/*0*/; i_2 < 11LL/*11*/; i_2 += ((var_10) - (8272855149217148443LL))/*1*/) 
                {
                    for (int i_3 = ((min((((/* implicit */int) ((unsigned char) min((((/* implicit */unsigned int) 276557695)), (2124936590U))))), (max((((/* implicit */int) (signed char)-15)), (max((-276557695), (((/* implicit */int) (short)12774)))))))) - (125))/*2*/; i_3 < ((((/* implicit */int) min((((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) | (8705430384002380003LL))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)121)))))))), (((/* implicit */long long int) (-(max((((/* implicit */int) (signed char)123)), (-276557701))))))))) + (132))/*9*/; i_3 += 2/*2*/) 
                    {
                        {
                            var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) ((_Bool) max((min((((/* implicit */unsigned char) (signed char)-124)), ((unsigned char)243))), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)65532)))))))))));
                            var_14 = ((/* implicit */signed char) (unsigned char)86);
                            var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) max((0U), (((/* implicit */unsigned int) (signed char)-24)))))))))));
                            var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)17921)))))));
                        }
                    } 
                } 
                var_17 = ((int) max(((-(((/* implicit */int) (short)2)))), (((/* implicit */int) ((unsigned char) (signed char)24)))));
            }
        } 
    } 
    var_18 = ((/* implicit */_Bool) max((((/* implicit */short) (!(((/* implicit */_Bool) (~(-1718955383))))))), ((short)32762)));
}
