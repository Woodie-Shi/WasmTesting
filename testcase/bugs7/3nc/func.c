/*
yarpgen version 2.0 (build 91d3bf8 on 2024:03:02)
Seed: 3690774526
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
void test(unsigned long long int var_2, int var_4, _Bool var_5, unsigned int var_6, unsigned char var_7, _Bool var_8, unsigned short var_9, _Bool var_11, signed char var_12, int var_13, long long int var_14, _Bool var_16, unsigned char var_17, _Bool var_18, int zero, int arr_0 [18] [18] , long long int arr_1 [18] , signed char arr_3 [18] , unsigned long long int arr_4 [18] [18] [18] , _Bool arr_5 [18] [18] [18] [18] , unsigned int arr_8 [18] [18] ) {
    /* LoopNest 2 */
    for (int i_0 = ((max((((((/* implicit */int) ((unsigned char) var_4))) << (((/* implicit */int) var_5)))), (((/* implicit */int) (!(((/* implicit */_Bool) ((-1) * (((/* implicit */int) (short)-30244)))))))))) - (506))/*0*/; i_0 < ((((/* implicit */int) var_16)) + (18))/*18*/; i_0 += ((((/* implicit */int) var_16)) + (2))/*2*/) 
    {
        for (unsigned short i_1 = ((((/* implicit */int) ((/* implicit */unsigned short) (~(var_2))))) - (40030))/*0*/; i_1 < (unsigned short)18/*18*/; i_1 += (unsigned short)2/*2*/) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = ((((/* implicit */int) ((/* implicit */_Bool) var_12))) - (1))/*0*/; i_2 < (_Bool)1/*1*/; i_2 += (_Bool)1/*1*/) 
                {
                    for (long long int i_3 = ((((/* implicit */long long int) (signed char)-74)) + (76LL))/*2*/; i_3 < ((((/* implicit */long long int) var_18)) + (16LL))/*16*/; i_3 += ((((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) max((-2147483628), (((/* implicit */int) (signed char)-8))))) && (((/* implicit */_Bool) ((var_4) + (arr_0 [i_0] [i_0])))))))))) + (3LL))/*2*/) 
                    {
                        for (long long int i_4 = ((var_14) - (2293740498538906305LL))/*0*/; i_4 < 18LL/*18*/; i_4 += ((min((((/* implicit */long long int) (short)19589)), (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) - (3052187287U)))) ? (((((/* implicit */long long int) var_13)) - (arr_1 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-15))))))) + (7430031917226762093LL))/*1*/) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) min((max((max((arr_4 [i_0] [i_3] [i_4]), (((/* implicit */unsigned long long int) arr_0 [i_2] [i_1])))), (((/* implicit */unsigned long long int) ((var_16) ? (((/* implicit */int) (signed char)-37)) : (var_13)))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-47)))))));
                                arr_11 [i_0] [i_1] [i_4] [i_1] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */int) min((((/* implicit */unsigned char) var_12)), ((unsigned char)247)))), (min((((/* implicit */int) arr_5 [i_0] [i_1] [i_2] [i_3])), (1629077605)))))) ? (((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) var_13)) : (18446744073709551615ULL))) + (((/* implicit */unsigned long long int) ((2147483627) + (((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) (signed char)49)) : (((/* implicit */int) var_5)))) * ((+(((/* implicit */int) (signed char)112)))))))));
                                arr_12 [i_0] [i_1] [6U] [i_1] [i_4] [i_1] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) var_6))));
                                arr_13 [i_4] [i_1] [i_1] [i_1] [i_3] [i_1] = var_16;
                            }
                        } 
                    } 
                } 
                var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) min((((int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)65535))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((var_8) ? (6607100648193355773ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))))))))));
                arr_14 [i_0] [i_1] = ((/* implicit */int) var_14);
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_5 = (unsigned char)0/*0*/; i_5 < (unsigned char)18/*18*/; i_5 += ((((/* implicit */int) ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (signed char)127)) ? (var_4) : (((/* implicit */int) var_17)))) - (((((/* implicit */_Bool) 620602803U)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_9)))))))) - (248))/*4*/) 
                {
                    arr_19 [i_0] [i_1] [i_5] = ((((/* implicit */_Bool) ((var_16) ? (var_4) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)55930))) : ((~(arr_8 [i_0] [i_0]))));
                    var_21 += ((/* implicit */_Bool) (unsigned short)0);
                }
            }
        } 
    } 
    var_22 &= ((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned char) (unsigned char)214)))));
}
