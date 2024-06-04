/*
yarpgen version 2.0 (build 91d3bf8 on 2024:03:02)
Seed: 2464340740
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
void test(int var_1, unsigned int var_2, unsigned int var_3, _Bool var_4, short var_5, int var_7, long long int var_8, unsigned short var_9, int zero, unsigned char arr_1 [23] [23] , int arr_2 [23] , int arr_5 [23] [23] [23] , unsigned short arr_6 [23] [23] [23] , long long int arr_11 [23] , _Bool arr_14 [23] [23] [23] [23] [23] [23] [23] ) {
    /* LoopNest 2 */
    for (unsigned char i_0 = (unsigned char)0/*0*/; i_0 < (unsigned char)23/*23*/; i_0 += ((((/* implicit */int) ((/* implicit */unsigned char) var_8))) - (75))/*1*/) 
    {
        for (short i_1 = (short)0/*0*/; i_1 < (short)23/*23*/; i_1 += ((((/* implicit */int) ((/* implicit */short) ((-3180304558527654226LL) != (((/* implicit */long long int) var_3)))))) + (2))/*3*/) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0ULL/*0*/; i_2 < ((((/* implicit */unsigned long long int) (-((-(-3180304558527654236LL)))))) - (15266439515181897357ULL))/*23*/; i_2 += 3ULL/*3*/) 
                {
                    for (long long int i_3 = 1LL/*1*/; i_3 < 22LL/*22*/; i_3 += 3LL/*3*/) 
                    {
                        for (unsigned short i_4 = ((((/* implicit */int) ((/* implicit */unsigned short) ((((min((((/* implicit */int) var_9)), (arr_5 [i_3] [i_3 + 1] [i_3]))) + (2147483647))) << (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */int) var_9)), (arr_2 [(signed char)10]))))))))))) - (59578))/*0*/; i_4 < ((((/* implicit */int) var_9)) - (57297))/*23*/; i_4 += (unsigned short)3/*3*/) 
                        {
                            {
                                var_10 = ((/* implicit */unsigned char) (~(((max((((/* implicit */unsigned int) var_9)), (var_2))) | (((/* implicit */unsigned int) var_7))))));
                                arr_15 [(_Bool)1] [(_Bool)1] [i_0] = ((/* implicit */_Bool) (+((-(((/* implicit */int) arr_14 [7U] [i_2] [i_3 + 1] [i_4] [i_4] [i_4] [i_4]))))));
                                var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) ((max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_7))))), ((-(var_3))))) >= (var_2))))));
                                var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_3 - 1] [i_3 - 1])) % (((/* implicit */int) arr_1 [i_3 - 1] [i_3 + 1]))))) ? (((/* implicit */int) ((((/* implicit */int) arr_1 [i_3 - 1] [i_3 + 1])) < (((/* implicit */int) arr_1 [i_3 + 1] [i_3 + 1]))))) : ((~(((/* implicit */int) arr_1 [i_3 - 1] [i_3 + 1]))))));
                                var_13 = ((/* implicit */long long int) ((unsigned int) ((((((/* implicit */_Bool) (signed char)62)) ? (((/* implicit */int) arr_14 [i_0] [i_0] [i_1] [i_0] [i_3] [(short)8] [i_4])) : (((/* implicit */int) var_5)))) >= (1038891086))));
                            }
                        } 
                    } 
                } 
                var_14 = ((/* implicit */unsigned char) ((arr_11 [2U]) >= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_0] [i_1] [15])))))))))));
                var_15 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_8)) ? (arr_11 [i_0]) : (arr_11 [i_1]))) + (((((/* implicit */_Bool) arr_11 [i_0])) ? (arr_11 [i_0]) : (arr_11 [12ULL])))));
                var_16 = ((/* implicit */unsigned char) var_4);
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) var_5)), (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_7)))))) + ((~(var_3)))))));
    var_18 = ((/* implicit */unsigned long long int) -3180304558527654226LL);
}
