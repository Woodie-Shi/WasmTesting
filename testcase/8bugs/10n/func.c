/*
yarpgen version 2.0 (build 91d3bf8 on 2024:03:02)
Seed: 928533310
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
void test(unsigned char var_0, long long int var_1, unsigned char var_2, _Bool var_3, unsigned long long int var_4, signed char var_5, unsigned long long int var_6, unsigned char var_7, unsigned long long int var_8, unsigned short var_9, _Bool var_10, unsigned short var_11, long long int var_12, _Bool var_13, long long int var_14, _Bool var_15, int zero, unsigned short arr_0 [23] , _Bool arr_1 [23] , unsigned long long int arr_2 [23] , unsigned char arr_3 [23] , short arr_4 [23] [23] [23] , unsigned char arr_5 [23] [23] [23] , _Bool arr_6 [23] [23] [23] , unsigned char arr_7 [23] [23] [23] [23] [23] [23] , long long int arr_8 [23] [23] [23] [23] [23] , unsigned char arr_11 [23] [23] [23] [23] [23] , signed char arr_12 [23] [23] [23] [23] [23] [23] [23] , unsigned char arr_16 [23] [23] [23] [23] [23] [23] [23] ) {
    var_16 = ((/* implicit */unsigned int) (+((-(((var_13) ? (14910876711253342895ULL) : (3535867362456208696ULL)))))));
    var_17 &= ((/* implicit */signed char) ((((/* implicit */int) ((short) ((((/* implicit */long long int) ((/* implicit */int) var_0))) % (var_12))))) << (((((/* implicit */int) var_0)) - (46)))));
    var_18 |= ((/* implicit */unsigned int) max((var_4), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) & (var_6)))) ? (((((/* implicit */_Bool) (unsigned char)58)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0)))) : (((/* implicit */int) ((short) (signed char)-5))))))));
    var_19 = ((/* implicit */unsigned short) (_Bool)1);
    /* LoopSeq 1 */
    for (unsigned short i_0 = ((((/* implicit */int) ((/* implicit */unsigned short) var_8))) - (35770))/*0*/; i_0 < ((((/* implicit */int) ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_8)) ? (var_8) : (var_6))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) + (((/* implicit */int) var_13)))))))) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) (((~(((/* implicit */int) (short)27464)))) == (((/* implicit */int) min((((/* implicit */unsigned short) var_0)), ((unsigned short)53373)))))))))))) - (64472))/*23*/; i_0 += (unsigned short)3/*3*/) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = ((/* implicit */int) ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_1 [i_0])), (arr_0 [i_0]))))) & (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_14)) || (arr_1 [i_0]))))) | (arr_2 [i_0]))))))/*1*/; i_1 < ((/* implicit */int) ((/* implicit */_Bool) var_0))/*1*/; i_1 += (_Bool)1/*1*/) 
        {
            for (unsigned long long int i_2 = ((var_6) - (14886778944349733635ULL))/*0*/; i_2 < 23ULL/*23*/; i_2 += 4ULL/*4*/) 
            {
                for (_Bool i_3 = (_Bool)0/*0*/; i_3 < (_Bool)0/*0*/; i_3 += (_Bool)1/*1*/) 
                {
                    {
                        var_20 = ((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_3 + 1] [i_1 - 1] [i_1 - 1]))) + (((var_1) - (((/* implicit */long long int) ((/* implicit */int) (signed char)-5))))))) <= (((/* implicit */long long int) max((((arr_6 [i_0] [i_0] [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8))) : (658782095U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10))))))))));
                        arr_9 [i_0] [i_1 - 1] [i_2] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_0])) - (((((/* implicit */_Bool) (signed char)33)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_5 [i_1 - 1] [i_3 + 1] [i_3 + 1]))))));
                        var_21 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) max(((unsigned short)8), (((/* implicit */unsigned short) (signed char)-5))))) & (((/* implicit */int) max((((/* implicit */short) var_10)), ((short)23721))))))) ^ (max((14910876711253342910ULL), (arr_2 [i_1 - 1])))));
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = (unsigned char)2/*2*/; i_4 < ((((/* implicit */int) var_2)) - (223))/*22*/; i_4 += ((((/* implicit */int) ((/* implicit */unsigned char) min((max((((var_14) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) (-(((/* implicit */int) arr_0 [i_0]))))))), ((-(min((((/* implicit */long long int) var_3)), (arr_8 [i_3] [i_2] [i_0] [i_1] [i_0]))))))))) - (251))/*4*/) 
                        {
                            if (((/* implicit */_Bool) (((~(var_14))) - (((/* implicit */long long int) (+(((/* implicit */int) max((var_2), (var_2))))))))))
                            {
                                arr_13 [(_Bool)1] = ((/* implicit */_Bool) (short)3657);
                                arr_14 [i_3] [i_3] [i_3] [i_3] [(unsigned char)11] = ((/* implicit */unsigned short) ((_Bool) var_7));
                            }

                            arr_15 [i_3] [i_3] = ((/* implicit */long long int) (-(((/* implicit */int) ((signed char) (+(((/* implicit */int) (short)-13476))))))));
                            var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (!(var_15))))))) ? ((+(((/* implicit */int) (unsigned char)39)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_3 + 1] [i_3] [18ULL] [i_3 + 1] [i_3 + 1])))))));
                            var_23 = ((/* implicit */unsigned long long int) min((var_23), (((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_11 [i_1 - 1] [i_1 - 1] [i_3 + 1] [i_4] [i_4 + 1]))))) | (((((/* implicit */_Bool) (short)6511)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [(unsigned char)10] [i_1] [i_1 - 1]))) : (var_8)))))));
                        }
                        if (((/* implicit */_Bool) (signed char)-8))
                        {
                            /* LoopSeq 1 */
                            for (int i_5 = ((((/* implicit */int) var_1)) + (328950958))/*0*/; i_5 < 23/*23*/; i_5 += 2/*2*/) 
                            {
                                if (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_5] [(_Bool)1] [i_2] [(unsigned char)16] [i_0])) ? (((/* implicit */long long int) ((((/* implicit */int) ((signed char) arr_7 [i_3] [i_3 + 1] [i_3] [(unsigned char)14] [i_3] [i_3]))) / (((((/* implicit */_Bool) (unsigned char)124)) ? (((/* implicit */int) (short)6511)) : (((/* implicit */int) arr_12 [i_0] [(_Bool)1] [i_0] [i_0] [i_0] [i_0] [i_0]))))))) : (arr_8 [5LL] [i_1 - 1] [i_1] [i_1 - 1] [i_1 - 1]))))
                                {
                                    var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) (-(((/* implicit */int) (((+(((/* implicit */int) (unsigned char)225)))) == (((/* implicit */int) ((((/* implicit */int) (signed char)-20)) <= (((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_3 + 1] [i_1])))))))))))));
                                    var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_8 [i_0] [(_Bool)1] [(_Bool)1] [i_2] [i_3 + 1]) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)22160)))))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_16 [i_1 - 1] [8LL] [i_1] [i_1 - 1] [i_1] [i_1] [i_1]))))) : (var_1)));
                                }
                                else
                                {
                                    arr_18 [i_0] [(short)9] [i_2] [i_3 + 1] [i_2] = ((/* implicit */unsigned char) (signed char)6);
                                    var_26 = ((/* implicit */short) (-(max((((/* implicit */unsigned long long int) arr_0 [i_1 - 1])), ((-(10445581013472907178ULL)))))));
                                }

                                var_27 &= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_2 [i_1 - 1]))));
                                var_28 = ((/* implicit */long long int) (+(((((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) - (506860314745401530ULL))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 18446744073709551615ULL))))))));
                                if (((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_2] [i_3] [i_5]))
                                {
                                    var_29 ^= ((/* implicit */unsigned int) var_11);
                                    var_30 = ((/* implicit */long long int) max((((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [i_3] [i_3] [i_2] [(_Bool)1] [i_1] [i_1] [i_0])) || ((!(((/* implicit */_Bool) (short)-19944))))))), (max((((/* implicit */unsigned char) (!(var_13)))), (arr_7 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3 + 1])))));
                                    var_31 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */int) var_3)) + (((/* implicit */int) arr_0 [i_2]))))) ? ((((_Bool)0) ? (6237648083753456677LL) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [(unsigned char)21] [i_2]))))) : (((/* implicit */long long int) ((/* implicit */int) ((-2880153935713497632LL) == (var_12))))))), (((/* implicit */long long int) ((((arr_1 [i_3]) ? (((/* implicit */int) (unsigned short)24576)) : (((/* implicit */int) (unsigned char)120)))) & (((/* implicit */int) var_13)))))));
                                }

                            }
                            var_32 -= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_16 [i_1 - 1] [i_1] [i_1] [i_0] [(_Bool)1] [i_0] [i_0])))) <= (((/* implicit */int) arr_16 [i_1 - 1] [i_1] [i_1 - 1] [i_1] [i_1] [i_1] [i_1]))));
                        }

                    }
                } 
            } 
        } 
        var_33 += ((/* implicit */int) ((var_6) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))) * (var_6))))))));
    }
}
