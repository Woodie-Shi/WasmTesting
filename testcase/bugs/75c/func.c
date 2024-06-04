/*
yarpgen version 2.0 (build 91d3bf8 on 2024:03:02)
Seed: 3665613978
Invocation: /home/nju/yarpgen/build/yarpgen --std=c -o /home/nju/WASM-testing/src/temp/0
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
void test(unsigned short var_0, short var_1, signed char var_3, unsigned long long int var_5, _Bool var_6, long long int var_9, signed char var_10, int var_12, signed char var_13, unsigned long long int var_14, unsigned int var_17, _Bool var_18, int zero, unsigned short arr_0 [13] , unsigned long long int arr_2 [13] [13] , long long int arr_3 [13] [13] , unsigned int arr_4 [13] , unsigned short arr_6 [13] , unsigned long long int arr_9 [13] [13] [13] [13] [13] ) {
    var_20 = ((/* implicit */short) var_18);
    /* LoopNest 2 */
    for (unsigned char i_0 = (unsigned char)1/*1*/; i_0 < ((((/* implicit */int) ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) / (((var_14) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))))))) + (10))/*11*/; i_0 += ((((/* implicit */int) ((/* implicit */unsigned char) var_9))) - (87))/*1*/) 
    {
        for (_Bool i_1 = ((((/* implicit */int) ((/* implicit */_Bool) var_0))) - (1))/*0*/; i_1 < ((/* implicit */int) ((/* implicit */_Bool) ((short) 9223372036854775807LL)))/*1*/; i_1 += (_Bool)1/*1*/) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned char) (+((-(min((((/* implicit */unsigned int) (unsigned char)19)), (770050973U)))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = ((/* implicit */int) ((/* implicit */unsigned short) ((((/* implicit */_Bool) -653615944125737967LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (signed char)-125)))))) : (((max((((/* implicit */unsigned long long int) var_0)), (arr_2 [(_Bool)1] [i_1]))) | (((unsigned long long int) var_5)))))))/*0*/; i_2 < (unsigned short)13/*13*/; i_2 += (unsigned short)2/*2*/) 
                {
                    for (int i_3 = ((((/* implicit */int) var_13)) + (38))/*0*/; i_3 < ((((/* implicit */int) var_3)) + (135))/*13*/; i_3 += ((((/* implicit */int) var_3)) + (124))/*2*/) 
                    {
                        {
                            arr_10 [i_0] [i_3] [i_3] [i_1] [i_0 - 1] [i_1] = ((/* implicit */_Bool) ((signed char) (+(((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (10661386409678068967ULL))))));
                            arr_11 [i_1] = ((/* implicit */short) (~(((/* implicit */int) (short)17773))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((/* implicit */long long int) max((((((/* implicit */int) arr_0 [i_1])) + (((/* implicit */int) var_1)))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_6 [(_Bool)1]))))))) / ((+(min((arr_3 [(_Bool)1] [(_Bool)1]), (((/* implicit */long long int) var_1)))))))))));
                var_22 = ((/* implicit */unsigned char) ((arr_9 [i_1] [i_1] [i_1] [i_1] [i_1]) & (min((min((arr_2 [4ULL] [4ULL]), (((/* implicit */unsigned long long int) arr_4 [i_0])))), (((((/* implicit */_Bool) 4376848259101682077ULL)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))))));
            }
        } 
    } 
}
