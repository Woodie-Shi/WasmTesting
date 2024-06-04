/*
yarpgen version 2.0 (build 91d3bf8 on 2024:03:02)
Seed: 3037420920
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
void test(unsigned char var_0, unsigned char var_1, long long int var_2, unsigned char var_3, int var_4, unsigned long long int var_5, unsigned char var_6, _Bool var_7, _Bool var_8, unsigned short var_9, signed char var_10, unsigned char var_11, _Bool var_12, int var_13, int var_14, unsigned short var_15, unsigned long long int var_16, int zero, unsigned char arr_0 [24] [24] , short arr_1 [24] , unsigned int arr_2 [24] [24] [24] , unsigned char arr_4 [24] [24] , _Bool arr_5 [24] [24] , int arr_7 [24] [24] [24] [24] ) {
    var_17 = var_8;
    if (((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_7)) : (max((var_14), (((/* implicit */int) (short)29045))))))))
    {
        var_18 = ((/* implicit */int) max((var_2), (((/* implicit */long long int) ((((/* implicit */int) max((((/* implicit */unsigned char) var_7)), (var_0)))) != (((/* implicit */int) var_1)))))));
        var_19 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) max(((~(((/* implicit */int) var_0)))), (var_4)))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((long long int) var_5))) : (max((var_16), (((/* implicit */unsigned long long int) var_9))))))));
        var_20 = ((/* implicit */unsigned long long int) var_1);
        if (((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */unsigned char) ((var_4) >= (((/* implicit */int) var_10))))), (min((var_0), (var_0)))))) ^ (((((/* implicit */_Bool) ((var_8) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)137))))) ? ((~(((/* implicit */int) (signed char)83)))) : (((/* implicit */int) ((unsigned char) var_2))))))))
        {
            var_21 = ((/* implicit */int) var_3);
            var_22 = ((/* implicit */short) ((((/* implicit */long long int) (~(((((/* implicit */int) var_15)) - (((/* implicit */int) var_9))))))) <= (max((((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) var_13)) : (1733374400943862479LL))), (((/* implicit */long long int) (unsigned char)49))))));
            var_23 = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 1319663136)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_6)))) << (((/* implicit */int) var_12))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) -1630512825)) ? (var_14) : (((/* implicit */int) var_11))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 691182366))))) : (var_13))) : (((/* implicit */int) (!(((/* implicit */_Bool) max((var_6), (var_11))))))));
            var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (-1319663157) : (((/* implicit */int) var_9))))) ? (((/* implicit */int) ((var_12) && (((/* implicit */_Bool) var_3))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) (unsigned char)82))))))) : (((/* implicit */int) (unsigned char)49))));
            if (((/* implicit */_Bool) (-(var_14))))
            {
                var_25 = ((/* implicit */int) var_15);
                var_26 = ((/* implicit */unsigned long long int) var_3);
            }

        }

    }

    /* LoopNest 3 */
    for (short i_0 = (short)0/*0*/; i_0 < ((((/* implicit */int) ((/* implicit */short) max((((((/* implicit */_Bool) ((short) var_9))) ? (((var_7) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-21046))))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) var_12)), (var_14)))))), (((/* implicit */unsigned long long int) ((var_14) <= (((((/* implicit */_Bool) var_11)) ? (var_4) : (var_14)))))))))) + (21070))/*24*/; i_0 += (short)4/*4*/) 
    {
        for (_Bool i_1 = ((((/* implicit */int) ((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */int) var_9)) > (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) ((short) arr_1 [i_0]))) : (((/* implicit */int) ((unsigned short) arr_1 [i_0]))))))))) - (1))/*0*/; i_1 < ((/* implicit */int) ((/* implicit */_Bool) var_10))/*1*/; i_1 += ((/* implicit */int) ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((var_7) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_1 [(_Bool)1]))))) | (((((/* implicit */long long int) ((/* implicit */int) var_3))) % (6882825408526500065LL)))))) ? (max((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [7])) : (var_4))), (((((/* implicit */int) var_3)) ^ (((/* implicit */int) var_8)))))) : (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0])))))))/*1*/) 
        {
            for (int i_2 = 1/*1*/; i_2 < 23/*23*/; i_2 += ((((/* implicit */int) arr_5 [i_0] [i_0])) + (3))/*3*/) 
            {
                {
                    var_27 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) var_13)) : (arr_2 [i_0] [i_2 - 1] [i_0])))));
                    arr_8 [i_1] = max((((/* implicit */long long int) ((short) arr_7 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1]))), (((((/* implicit */_Bool) ((unsigned short) (short)32011))) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_4 [i_0] [i_1]), (((/* implicit */unsigned char) arr_5 [i_0] [i_0])))))) : (((var_2) / (((/* implicit */long long int) arr_7 [(unsigned short)8] [(unsigned short)8] [(unsigned char)5] [i_1])))))));
                    arr_9 [i_1] [(_Bool)1] [i_2] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) ((var_7) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (var_16))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (arr_2 [i_0] [i_1] [i_2 - 1]) : (((/* implicit */unsigned int) arr_7 [i_2 - 1] [i_2 - 1] [i_2 + 1] [i_2 - 1])))) : (max((((((/* implicit */_Bool) (unsigned short)22985)) ? (4090362884U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))), (((/* implicit */unsigned int) ((_Bool) (_Bool)1)))))));
                    arr_10 [i_0] [i_1] [(unsigned char)20] = ((/* implicit */unsigned long long int) arr_5 [9] [9]);
                    var_28 = ((/* implicit */int) var_5);
                }
            } 
        } 
    } 
    if (((/* implicit */_Bool) (-(((/* implicit */int) ((_Bool) ((((/* implicit */int) (unsigned short)33127)) - (((/* implicit */int) var_0)))))))))
    {
        var_29 = ((/* implicit */unsigned long long int) var_0);
        var_30 = ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)-24012))))) ? (((/* implicit */unsigned long long int) (~(var_4)))) : (max((((/* implicit */unsigned long long int) 1319663131)), (var_16))))));
        var_31 = ((/* implicit */signed char) min((((/* implicit */int) ((signed char) var_11))), ((~(((/* implicit */int) ((short) 1650883145U)))))));
    }
    else
    {
        var_32 = ((/* implicit */unsigned long long int) max((((/* implicit */int) var_0)), (((((var_7) ? (((/* implicit */int) var_6)) : (var_14))) * (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_0))))))));
        var_33 = var_6;
        var_34 = ((/* implicit */int) var_1);
        var_35 = var_6;
        var_36 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_11))));
    }

}
