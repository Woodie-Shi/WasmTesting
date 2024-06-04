/*
yarpgen version 2.0 (build 91d3bf8 on 2024:03:02)
Seed: 3107166417
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
void test(unsigned long long int var_0, signed char var_1, int var_2, _Bool var_3, int var_5, long long int var_6, unsigned short var_7, signed char var_8, _Bool var_9, _Bool var_11, _Bool var_13, long long int var_14, int zero, int arr_0 [13] , unsigned char arr_1 [13] , unsigned short arr_2 [13] , unsigned short arr_3 [13] [13] , short arr_4 [13] [13] [13] , _Bool arr_5 [13] [13] , unsigned short arr_6 [13] [13] , _Bool arr_7 [13] [13] [13] [13] [13] [13] , unsigned long long int arr_10 [13] [13] ) {
    if (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? ((~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)4))))))) : ((-(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)1)))))))))
    {
        var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) var_2))));
        var_16 = max((((_Bool) ((var_0) > (((/* implicit */unsigned long long int) var_5))))), ((!(((/* implicit */_Bool) var_6)))));
        var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) (+(((/* implicit */int) ((unsigned short) max((var_3), (var_11))))))))));
    }

    if ((!(((/* implicit */_Bool) (~(((/* implicit */int) var_13)))))))
    {
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_9), (var_11))))) : (0U)));
        /* LoopNest 3 */
        for (unsigned short i_0 = (unsigned short)0/*0*/; i_0 < ((((/* implicit */int) ((/* implicit */unsigned short) var_3))) + (13))/*13*/; i_0 += ((((/* implicit */int) var_7)) - (58224))/*2*/) 
        {
            for (long long int i_1 = ((/* implicit */long long int) ((((((/* implicit */int) arr_1 [i_0])) == (((/* implicit */int) arr_2 [i_0])))) && (((/* implicit */_Bool) (+((-(((/* implicit */int) var_13)))))))))/*0*/; i_1 < ((var_14) + (6426251043595249127LL))/*13*/; i_1 += ((((/* implicit */long long int) var_13)) + (2LL))/*2*/) 
            {
                for (unsigned short i_2 = ((((/* implicit */int) ((/* implicit */unsigned short) var_5))) - (61223))/*0*/; i_2 < (unsigned short)13/*13*/; i_2 += ((((/* implicit */int) ((/* implicit */unsigned short) var_8))) - (65454))/*2*/) 
                {
                    {
                        var_19 -= ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */int) arr_6 [i_0] [i_1])) & (((/* implicit */int) arr_2 [i_2])))))) : (((/* implicit */int) arr_3 [i_0] [i_0])));
                        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (((/* implicit */int) (short)-23576)) : (((int) min((var_14), (((/* implicit */long long int) arr_5 [i_0] [i_2]))))))))));
                        /* LoopSeq 1 */
                        for (long long int i_3 = 0LL/*0*/; i_3 < 13LL/*13*/; i_3 += ((((/* implicit */long long int) (+(min((arr_0 [i_2]), (arr_0 [i_1])))))) - (320123686LL))/*3*/) 
                        {
                            var_21 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) ^ (arr_10 [i_3] [i_1])));
                            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) != (-5444609958952105719LL))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1] [i_2] [i_1])))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))) : (((14123461043719044957ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
                            var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) (+(max((((((/* implicit */_Bool) arr_3 [i_2] [i_3])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (_Bool)1)))), (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) arr_7 [i_0] [i_1] [i_1] [i_0] [i_0] [i_3])))))))))));
                        }
                    }
                } 
            } 
        } 
        var_24 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((var_11) ? (((/* implicit */int) (!(var_11)))) : (((/* implicit */int) max((var_9), ((_Bool)1))))))) - (min((var_0), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 4323283029990506635ULL)))))))));
        var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) (((!(((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-53))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : (((/* implicit */int) var_9)))))));
    }

}
