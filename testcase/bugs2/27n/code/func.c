/*
yarpgen version 2.0 (build 91d3bf8 on 2024:03:02)
Seed: 3728133095
Invocation: /home/nju/yarpgen/build/yarpgen --std=c -o /home/nju/WASM-testing/src/temp/1
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
void test(short var_0, int var_1, _Bool var_2, signed char var_3, unsigned short var_4, unsigned char var_5, unsigned long long int var_7, short var_9, unsigned long long int var_11, unsigned int var_12, short var_13, unsigned long long int var_14, unsigned long long int var_15, int zero, short arr_0 [19] [19] , short arr_3 [19] , _Bool arr_4 [19] , signed char arr_5 [19] , long long int arr_6 [19] [19] [19] [19] , int arr_8 [19] [19] [19] [19] , unsigned int arr_9 [19] [19] [19] [19] , long long int arr_12 [19] ) {
    /* LoopNest 2 */
    for (unsigned short i_0 = (unsigned short)1/*1*/; i_0 < ((((/* implicit */int) ((/* implicit */unsigned short) min(((+((+(var_15))))), (((/* implicit */unsigned long long int) var_9)))))) - (10344))/*18*/; i_0 += (unsigned short)2/*2*/) 
    {
        for (int i_1 = 0/*0*/; i_1 < ((((/* implicit */int) var_11)) - (1724086950))/*19*/; i_1 += ((((/* implicit */int) var_5)) - (85))/*4*/) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = ((((/* implicit */int) ((unsigned char) arr_4 [i_0 + 1]))) % ((~(((/* implicit */int) arr_4 [i_0 + 1])))))/*0*/; i_2 < ((((/* implicit */int) var_3)) + (94))/*19*/; i_2 += ((((/* implicit */int) var_3)) + (77))/*2*/) 
                {
                    for (int i_3 = ((((/* implicit */int) (~(((arr_6 [i_0] [i_0 + 1] [(unsigned short)14] [i_0]) & (arr_6 [i_0 - 1] [i_0 - 1] [i_1] [i_0 - 1])))))) + (584418100))/*0*/; i_3 < ((((/* implicit */int) max((max((30829985083453455ULL), (((/* implicit */unsigned long long int) arr_6 [i_0] [i_0 - 1] [i_0 - 1] [12])))), (min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0] [i_1])) <= (var_1)))), (max((var_15), (((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [i_1] [i_0]))))))))) - (584418080))/*19*/; i_3 += 1/*1*/) 
                    {
                        for (unsigned char i_4 = ((((/* implicit */int) ((/* implicit */unsigned char) (+(((int) ((((/* implicit */_Bool) 30829985083453469ULL)) ? (((/* implicit */int) arr_4 [i_2])) : (-551866655)))))))) + (1))/*1*/; i_4 < ((((/* implicit */int) ((/* implicit */unsigned char) var_2))) + (18))/*18*/; i_4 += (unsigned char)3/*3*/) 
                        {
                            {
                                var_16 += ((/* implicit */unsigned int) (+(((((/* implicit */int) arr_4 [i_2])) - (((/* implicit */int) (_Bool)0))))));
                                var_17 = max((((((unsigned long long int) var_12)) >> (((max((var_1), (((/* implicit */int) (signed char)-53)))) - (1569601480))))), (var_14));
                                var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_3])) && (((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) 805306368U)) ? (30829985083453450ULL) : (((/* implicit */unsigned long long int) -6))))))));
                                if (((/* implicit */_Bool) min((((/* implicit */int) arr_0 [i_0 - 1] [i_0 + 1])), (((((/* implicit */int) arr_0 [i_0 - 1] [i_0 + 1])) - (((/* implicit */int) arr_0 [i_0 - 1] [i_0 + 1])))))))
                                {
                                    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_3])) ^ (((/* implicit */int) arr_5 [i_1]))))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_12)))))) || (((/* implicit */_Bool) ((signed char) (!(((/* implicit */_Bool) var_4))))))));
                                    if (((/* implicit */_Bool) var_11))
                                    {
                                        arr_14 [i_3] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((3489660928U), (((/* implicit */unsigned int) arr_5 [i_0 + 1]))))) ? (((((/* implicit */_Bool) arr_0 [i_4 + 1] [i_0 + 1])) ? (((/* implicit */int) arr_0 [i_4 + 1] [i_0 + 1])) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */int) arr_0 [i_4 + 1] [i_0 + 1])) & (((/* implicit */int) arr_5 [i_0 + 1]))))));
                                        arr_15 [i_2] [i_1] [i_1] [i_3] [i_4] [i_2] &= (-(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 813204551U)) ? (8885146919138707973ULL) : (((/* implicit */unsigned long long int) var_1))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)255)), (var_7))))))));
                                        var_20 = ((/* implicit */unsigned int) arr_8 [i_4] [i_2] [i_1] [i_0 - 1]);
                                    }

                                    arr_16 [i_0] [i_1] [i_1] [i_2] [i_0] [i_1] [i_1] = ((/* implicit */signed char) var_14);
                                }

                                var_21 = ((/* implicit */int) ((arr_12 [i_0]) - (9223372036854775807LL)));
                            }
                        } 
                    } 
                } 
                var_22 = ((/* implicit */unsigned short) arr_12 [i_0]);
            }
        } 
    } 
    var_23 -= ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */int) var_13)) - ((-(((/* implicit */int) (_Bool)0)))))));
    var_24 = ((/* implicit */signed char) var_4);
    if (((/* implicit */_Bool) var_4))
    {
        var_25 = ((/* implicit */unsigned char) var_3);
        var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)13369)) ? (var_1) : (((/* implicit */int) ((unsigned short) ((unsigned long long int) 19ULL))))));
    }

    var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) (+(min((var_1), (((/* implicit */int) var_0)))))))));
}
