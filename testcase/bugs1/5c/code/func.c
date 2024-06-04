/*
yarpgen version 2.0 (build 91d3bf8 on 2024:03:02)
Seed: 103516742
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
void test(short var_0, unsigned int var_1, int var_2, int var_5, _Bool var_6, short var_9, int zero, long long int arr_0 [24] [24] , signed char arr_1 [24] , int arr_2 [24] [24] , int arr_4 [24] , _Bool arr_5 [24] [24] , int arr_6 [24] [24] ) {
    /* LoopNest 2 */
    for (signed char i_0 = (signed char)0/*0*/; i_0 < ((((/* implicit */int) ((/* implicit */signed char) var_1))) - (3))/*24*/; i_0 += ((((/* implicit */int) ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_5) ^ ((~(((/* implicit */int) var_9))))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)159))))) ? (((((/* implicit */int) var_0)) & (-1835020165))) : (((/* implicit */int) (unsigned char)170)))) : (((/* implicit */int) (short)17601)))))) - (118))/*2*/) 
    {
        for (unsigned char i_1 = (unsigned char)1/*1*/; i_1 < (unsigned char)22/*22*/; i_1 += (unsigned char)2/*2*/) 
        {
            {
                var_10 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) var_1)) == (8933848766273786434ULL))) ? (((/* implicit */int) arr_5 [i_1 + 2] [i_1 - 1])) : (((/* implicit */int) ((((/* implicit */_Bool) 1989913716U)) && (((/* implicit */_Bool) arr_0 [i_0] [i_1]))))))))));
                arr_7 [i_0] = ((/* implicit */int) var_6);
                arr_8 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [7ULL])) ? (arr_0 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535)))))) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned char)170))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_1 - 1])))))) : (7U)));
                if (((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)234)), ((unsigned short)65535))))
                {
                    var_11 *= ((/* implicit */unsigned long long int) min(((-(((((/* implicit */_Bool) 519877218U)) ? (arr_2 [i_0] [i_1 + 2]) : (((/* implicit */int) arr_1 [22])))))), (((/* implicit */int) max(((unsigned short)65517), (((/* implicit */unsigned short) (unsigned char)43)))))));
                    var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) ((((arr_6 [i_1 + 2] [i_0]) / (arr_6 [i_1 + 2] [i_1]))) == (((((/* implicit */_Bool) (unsigned char)22)) ? (((((arr_4 [i_0]) + (2147483647))) << (((arr_0 [i_0] [i_0]) - (7502450815788315061LL))))) : (((/* implicit */int) arr_1 [i_0])))))))));
                    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (+(((/* implicit */int) arr_5 [(unsigned char)3] [i_1 + 1]))))) * (max((arr_0 [i_1 - 1] [i_1 + 2]), (((/* implicit */long long int) ((9071626501138548338ULL) >= (((/* implicit */unsigned long long int) arr_6 [i_0] [i_1 + 1])))))))));
                }

            }
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) & (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9071626501138548342ULL)) ? (((/* implicit */unsigned long long int) var_2)) : (14775602486415190607ULL)))) && (((/* implicit */_Bool) var_5)))))));
}
