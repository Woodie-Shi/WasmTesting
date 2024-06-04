/*
yarpgen version 2.0 (build 91d3bf8 on 2024:03:02)
Seed: 1039159621
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
void test(unsigned int var_0, signed char var_1, unsigned int var_2, unsigned char var_3, long long int var_4, unsigned short var_5, unsigned long long int var_6, unsigned int var_7, long long int var_8, unsigned char var_9, unsigned char var_10, unsigned char var_11, unsigned short var_12, int zero, long long int arr_0 [18] [18] , long long int arr_1 [18] [18] , unsigned char arr_2 [18] , unsigned char arr_4 [18] [18] [18] , unsigned char arr_5 [18] , unsigned short arr_6 [18] , unsigned char arr_7 [18] [18] [18] , long long int arr_8 [18] [18] [18] [18] , signed char arr_9 [18] [18] [18] , unsigned char arr_11 [18] [18] [18] , unsigned int arr_12 [18] [18] [18] [18] , unsigned char arr_13 [18] [18] [18] [18] [18] , unsigned long long int arr_14 [18] [18] [18] [18] [18] , unsigned char arr_16 [18] [18] [18] [18] [18] ) {
    var_13 = ((/* implicit */unsigned int) var_6);
    if (((/* implicit */_Bool) ((((/* implicit */_Bool) (~((~(((/* implicit */int) var_3))))))) ? (var_0) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_10))))))))
    {
        if (((/* implicit */_Bool) ((unsigned long long int) max((var_6), (0ULL)))))
        {
            /* LoopNest 3 */
            for (long long int i_0 = 1LL/*1*/; i_0 < ((((/* implicit */long long int) min((((((/* implicit */_Bool) (signed char)89)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)40))) : (15588267044097384326ULL))), (((((/* implicit */_Bool) var_7)) ? ((+(18446744073709551605ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)64)))))))) - (23LL))/*17*/; i_0 += ((var_8) - (6472138161488224137LL))/*4*/) 
            {
                for (unsigned char i_1 = ((((/* implicit */int) ((/* implicit */unsigned char) var_7))) - (212))/*0*/; i_1 < ((((/* implicit */int) var_3)) - (66))/*18*/; i_1 += (unsigned char)3/*3*/) 
                {
                    for (unsigned long long int i_2 = ((((/* implicit */unsigned long long int) var_10)) - (200ULL))/*0*/; i_2 < 18ULL/*18*/; i_2 += ((((/* implicit */unsigned long long int) var_12)) - (56561ULL))/*3*/) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_10)), (9223372036854775790LL)))) < (((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0 - 1])) ? (((/* implicit */unsigned long long int) var_2)) : (0ULL))))))));
                            /* LoopNest 2 */
                            for (long long int i_3 = ((((/* implicit */long long int) var_1)) + (37LL))/*0*/; i_3 < 18LL/*18*/; i_3 += 3LL/*3*/) 
                            {
                                for (unsigned char i_4 = (unsigned char)4/*4*/; i_4 < (unsigned char)14/*14*/; i_4 += (unsigned char)3/*3*/) 
                                {
                                    {
                                        if (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)236)) ? (((/* implicit */int) (signed char)121)) : (((/* implicit */int) (unsigned char)0))))) ? (((((/* implicit */_Bool) (unsigned char)184)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (unsigned short)1)))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)243))) : (1028683467800950489LL))))) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0 + 1] [i_1] [i_1] [i_3] [2U]))))))
                                        {
                                            var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [(unsigned char)12] [i_4 - 4])) ? (arr_1 [i_4 + 2] [i_4 + 4]) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))) ? (min((var_4), (arr_1 [i_0 + 1] [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 2326268211U)))))))));
                                            arr_17 [i_0 - 1] [i_0] [i_0 - 1] [i_3] = max((max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)248))) / (var_7)))), (min((((/* implicit */unsigned long long int) var_0)), (var_6))))), (((/* implicit */unsigned long long int) min((var_7), (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)0)))))))));
                                            var_16 ^= ((/* implicit */unsigned char) var_4);
                                            arr_18 [i_4 - 2] [i_1] [i_0] [i_3] [i_4 + 3] = ((/* implicit */unsigned long long int) (~((-(((/* implicit */int) arr_7 [i_0 - 1] [i_0 - 1] [i_2]))))));
                                            arr_19 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)63))) % (((((/* implicit */_Bool) min((arr_8 [i_4] [i_0] [i_0] [i_1]), (((/* implicit */long long int) arr_4 [i_0 + 1] [i_0] [i_4]))))) ? (min((arr_12 [i_0 - 1] [i_1] [i_2] [i_4]), (((/* implicit */unsigned int) arr_9 [i_3] [i_3] [i_1])))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_2 [i_0])))))))));
                                        }

                                        if (((/* implicit */_Bool) arr_0 [16LL] [i_3]))
                                        {
                                            arr_20 [i_0] [i_0 + 1] [i_0] [i_0] [i_0 + 1] [i_0] [i_0] = ((/* implicit */unsigned int) ((unsigned long long int) max((arr_11 [i_0 - 1] [i_0 - 1] [i_4 + 3]), ((unsigned char)96))));
                                            if (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) min((arr_16 [i_4 - 3] [14U] [i_4] [i_4 + 4] [14U]), (var_10))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) min((((/* implicit */long long int) arr_2 [(signed char)10])), (arr_0 [12U] [i_3])))))) : (((unsigned long long int) arr_5 [(signed char)0])))))
                                            {
                                                var_17 = ((/* implicit */unsigned char) arr_9 [i_0 - 1] [i_2] [i_2]);
                                                var_18 = ((/* implicit */unsigned int) (-(((/* implicit */int) min((((/* implicit */unsigned short) var_9)), (var_5))))));
                                                var_19 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (signed char)78)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 144115187807420416LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) : (707522121U)))) : (((((/* implicit */_Bool) (unsigned char)19)) ? (9223372036854775790LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)65)))))))));
                                            }

                                        }

                                        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_0] [i_4] [i_4] [i_3] [i_4 + 4])) ? (arr_14 [i_4] [i_2] [i_2] [i_1] [i_0 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_13 [i_4] [i_4 + 4] [i_2] [i_3] [i_0])) < (((/* implicit */int) var_5)))))) : (((((var_6) >> (((((/* implicit */int) var_11)) - (145))))) + (((/* implicit */unsigned long long int) ((unsigned int) var_2)))))));
                                        var_21 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((-5725373811715215908LL), (((/* implicit */long long int) (unsigned char)128)))))));
                                    }
                                } 
                            } 
                            if (((/* implicit */_Bool) min(((+(0ULL))), (((/* implicit */unsigned long long int) var_10)))))
                            {
                                var_22 |= arr_14 [i_0 - 1] [i_0] [i_0] [i_0 + 1] [i_0 + 1];
                                var_23 *= 3261603045U;
                                arr_21 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) 3587445169U);
                                arr_22 [i_0] [i_2] [i_1] [i_0] = ((unsigned long long int) (-(((/* implicit */int) arr_6 [i_0 + 1]))));
                            }

                        }
                    } 
                } 
            } 
            var_24 = var_8;
        }

        var_25 = ((/* implicit */unsigned short) (+(11127033908737557607ULL)));
    }

}
