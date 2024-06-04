/*
yarpgen version 2.0 (build 91d3bf8 on 2024:03:02)
Seed: 1797895847
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
void test(short var_0, int var_3, unsigned short var_4, short var_5, long long int var_6, long long int var_7, long long int var_8, long long int var_9, unsigned short var_10, long long int var_12, int var_13, long long int var_15, unsigned char var_19, int zero, int arr_0 [19] [19] , short arr_1 [19] [19] , long long int arr_2 [19] [19] , unsigned char arr_3 [19] , int arr_6 [19] , unsigned char arr_7 [19] [19] [19] , long long int arr_10 [19] [19] [19] [19] [19] [19] ) {
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+((-(0LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_6)));
    /* LoopSeq 1 */
    for (long long int i_0 = ((var_8) + (830946288653649755LL))/*1*/; i_0 < ((((/* implicit */long long int) var_13)) + (1967468526LL))/*18*/; i_0 += ((((/* implicit */long long int) var_3)) - (1421053982LL))/*1*/) 
    {
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) arr_1 [i_0 - 1] [i_0 - 1]))) ? (((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0 + 1])) ? (arr_0 [i_0 - 1] [i_0 + 1]) : (arr_0 [i_0 - 1] [i_0 - 1]))) : ((~(((/* implicit */int) (unsigned char)89))))));
        /* LoopNest 2 */
        for (short i_1 = ((((/* implicit */int) ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_9)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) : (min((((/* implicit */int) var_0)), (-1312612522)))))) ? (max((min((((/* implicit */int) (unsigned short)65534)), (arr_0 [i_0] [1LL]))), ((+(((/* implicit */int) (signed char)(-127 - 1))))))) : ((+(((/* implicit */int) arr_1 [i_0] [i_0 - 1])))))))) - (18090))/*0*/; i_1 < ((((/* implicit */int) ((/* implicit */short) max((((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (min((var_9), (((/* implicit */long long int) arr_0 [14LL] [i_0])))) : (((/* implicit */long long int) ((/* implicit */int) min((var_19), ((unsigned char)31))))))), (((/* implicit */long long int) max((arr_0 [i_0] [i_0 + 1]), (arr_0 [i_0] [i_0 + 1])))))))) + (16205))/*19*/; i_1 += ((((/* implicit */int) ((/* implicit */short) var_12))) - (12704))/*4*/) 
        {
            for (unsigned short i_2 = ((((/* implicit */int) ((/* implicit */unsigned short) max((var_9), (arr_2 [i_1] [i_0]))))) - (64646))/*1*/; i_2 < ((((/* implicit */int) ((/* implicit */unsigned short) (short)6043))) - (6026))/*17*/; i_2 += (unsigned short)4/*4*/) 
            {
                {
                    var_22 -= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_7 [i_2 + 2] [i_1] [i_0])) ? (((/* implicit */int) arr_7 [i_0 + 1] [i_1] [(unsigned short)16])) : (((/* implicit */int) arr_7 [i_0] [i_1] [i_0])))), (((/* implicit */int) ((unsigned char) 5650668618649026283LL)))));
                    arr_8 [i_2] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1366189873647265280LL)) ? (0LL) : (5LL)));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = ((((/* implicit */int) ((/* implicit */unsigned char) var_5))) - (111))/*3*/; i_3 < ((((/* implicit */int) ((/* implicit */unsigned char) (-(max((((long long int) (unsigned char)230)), (((/* implicit */long long int) arr_6 [i_1])))))))) - (9))/*17*/; i_3 += ((((/* implicit */int) ((/* implicit */unsigned char) var_9))) - (121))/*1*/) 
                    {
                        for (signed char i_4 = ((((/* implicit */int) ((/* implicit */signed char) var_0))) - (38))/*3*/; i_4 < ((((/* implicit */int) ((/* implicit */signed char) ((((/* implicit */int) arr_3 [i_1])) >> ((((+(arr_10 [i_3 - 3] [i_2 - 1] [i_2] [i_0 - 1] [i_0] [(unsigned short)13]))) + (5906976266816878977LL))))))) + (17))/*17*/; i_4 += (signed char)1/*1*/) 
                        {
                            {
                                arr_13 [i_2] = ((/* implicit */unsigned char) ((unsigned short) ((var_8) / (arr_10 [i_2 + 2] [i_2] [i_3 + 1] [i_3 + 1] [i_4] [i_4 - 2]))));
                                var_23 = ((/* implicit */long long int) (((-(((long long int) 1312612503)))) >= (min((var_15), (((/* implicit */long long int) min((((/* implicit */unsigned short) (short)29101)), (var_4))))))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */long long int) ((((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)61608)))))))) == ((((-9223372036854775807LL - 1LL)) % (((/* implicit */long long int) ((/* implicit */int) max(((short)-32749), ((short)-6883)))))))));
                }
            } 
        } 
    }
}
