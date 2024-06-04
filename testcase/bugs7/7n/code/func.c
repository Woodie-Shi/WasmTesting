/*
yarpgen version 2.0 (build 91d3bf8 on 2024:03:02)
Seed: 3625495839
Invocation: /home/nju/yarpgen/build/yarpgen --std=c -o /home/nju/WASM-testing/src/temp/8
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
void test(unsigned long long int var_0, short var_1, unsigned short var_2, long long int var_3, unsigned int var_4, long long int var_5, int var_6, unsigned long long int var_7, long long int var_8, short var_9, short var_10, int var_11, short var_12, int zero, short arr_0 [25] [25] , long long int arr_1 [25] , short arr_3 [25] [25] [25] , unsigned char arr_4 [25] [25] [25] , unsigned short arr_5 [25] , int arr_6 [25] [25] [25] , long long int arr_8 [25] [25] , long long int arr_9 [25] [25] , unsigned short arr_10 [25] [25] [25] , unsigned short arr_13 [25] [25] [25] , unsigned short arr_14 [25] [25] [25] , signed char arr_15 [25] [25] [25] , _Bool arr_17 [25] [25] [25] [25] , short arr_19 [25] [25] [25] [25] , unsigned short arr_21 [25] [25] [25] [25] [25] [25] , unsigned char arr_23 [25] [25] [25] [25] , unsigned int arr_27 [25] [25] [25] [25] , unsigned long long int arr_29 [25] [25] [25] , unsigned short arr_30 [25] [25] [25] [25] [25] [25] , unsigned long long int arr_31 [25] , int arr_36 [25] [25] [25] [25] [25] [25] , _Bool arr_39 [25] [25] , int arr_43 [25] [25] [25] [25] [25] [25] , unsigned int arr_45 [25] [25] [25] [25] , unsigned long long int arr_47 [25] [25] [25] [25] , int arr_51 [20] [20] ) {
    var_13 = ((/* implicit */short) (-(((/* implicit */int) var_1))));
    /* LoopSeq 4 */
    for (unsigned short i_0 = ((((/* implicit */int) ((/* implicit */unsigned short) max((var_4), (((/* implicit */unsigned int) ((int) (+(var_5))))))))) - (49968))/*0*/; i_0 < ((((/* implicit */int) ((/* implicit */unsigned short) ((((/* implicit */int) var_12)) << (((((var_6) + (2138859320))) - (20))))))) - (50023))/*25*/; i_0 += ((((/* implicit */int) var_2)) - (64851))/*4*/) 
    {
        if (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [(unsigned short)4] [i_0]))))))))
        {
            arr_2 [i_0] = (~(((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (signed char)-64)) ? (((/* implicit */int) (unsigned short)7)) : (((/* implicit */int) (unsigned char)166)))))));
            var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(arr_1 [i_0])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) / (arr_1 [i_0])))) : (max((var_7), (((/* implicit */unsigned long long int) arr_1 [i_0]))))));
        }
        else
        {
            var_15 = ((/* implicit */short) max((((((/* implicit */unsigned long long int) 0LL)) * (max((((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])), (var_0))))), (((/* implicit */unsigned long long int) ((arr_1 [i_0]) + (arr_1 [i_0]))))));
            var_16 ^= ((/* implicit */long long int) (+(((/* implicit */int) var_10))));
        }

        /* LoopSeq 3 */
        for (int i_1 = ((((/* implicit */int) ((long long int) min((arr_1 [i_0]), (arr_1 [i_0]))))) + (222625663))/*0*/; i_1 < ((((/* implicit */int) var_12)) - (22019))/*25*/; i_1 += ((((/* implicit */int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((6401698993228490803ULL), (((/* implicit */unsigned long long int) var_2)))))))), ((unsigned short)480)))) + (4))/*4*/) 
        {
            var_17 = ((/* implicit */unsigned long long int) ((var_6) == ((+(((/* implicit */int) var_2))))));
            var_18 = ((/* implicit */unsigned short) min((min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_4))))), (10540906891205564089ULL))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10)))))));
        }
        /* vectorizable */
        for (unsigned short i_2 = ((((/* implicit */int) ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) var_4)) : (var_8))))))) - (2412))/*0*/; i_2 < (unsigned short)25/*25*/; i_2 += (unsigned short)2/*2*/) 
        {
            var_19 &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_3))));
            var_20 = var_2;
            var_21 = ((/* implicit */_Bool) (~(((long long int) (_Bool)1))));
            arr_7 [i_0] = ((/* implicit */short) (+(((((/* implicit */_Bool) var_11)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2] [(unsigned short)19] [(unsigned short)19])))))));
        }
        for (long long int i_3 = ((((/* implicit */long long int) var_6)) + (2138859297LL))/*2*/; i_3 < ((((/* implicit */long long int) var_1)) - (11969LL))/*24*/; i_3 += ((((/* implicit */long long int) var_12)) - (22042LL))/*2*/) 
        {
            /* LoopNest 2 */
            for (_Bool i_4 = ((((/* implicit */int) ((/* implicit */_Bool) var_9))) - (1))/*0*/; i_4 < ((/* implicit */int) ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) var_9)), (arr_8 [i_0] [i_3]))) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_5 [i_3])) == (((/* implicit */int) var_1))))))))), (((((/* implicit */_Bool) (-(var_8)))) ? (((/* implicit */unsigned long long int) (-(var_3)))) : ((~(134217728ULL))))))))/*1*/; i_4 += ((((/* implicit */int) ((/* implicit */_Bool) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((arr_1 [i_3]), (((/* implicit */long long int) arr_6 [i_3] [i_3 + 1] [i_0])))))))), (((unsigned short) 9187343239835811840ULL)))))) + (1))/*1*/) 
            {
                for (unsigned long long int i_5 = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(min((((/* implicit */unsigned long long int) arr_0 [i_3] [i_4])), (var_7)))))) ? (((/* implicit */int) ((unsigned char) arr_3 [i_0] [i_3 - 1] [i_4]))) : (((/* implicit */int) (signed char)16))))) - (188ULL))/*0*/; i_5 < ((((/* implicit */unsigned long long int) var_1)) - (11968ULL))/*25*/; i_5 += ((((/* implicit */unsigned long long int) var_9)) - (18446744073709528831ULL))/*3*/) 
                {
                    {
                        arr_16 [i_0] [i_4] = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((arr_15 [i_3 + 1] [i_3 + 1] [(unsigned short)0]), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_6 [(unsigned short)6] [i_4] [i_5]))))))))));
                        var_22 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(arr_9 [i_3 - 1] [i_3 - 1]))))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            /* vectorizable */
            for (long long int i_6 = 2LL/*2*/; i_6 < 23LL/*23*/; i_6 += ((((long long int) arr_14 [i_0] [i_3 + 1] [i_3 + 1])) - (56121LL))/*1*/) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_7 = ((((/* implicit */int) ((/* implicit */unsigned char) var_1))) - (216))/*1*/; i_7 < (unsigned char)21/*21*/; i_7 += (unsigned char)3/*3*/) 
                {
                    arr_24 [i_0] [i_3 + 1] [15LL] [i_6 - 2] [i_7 + 3] = ((/* implicit */_Bool) (+(var_4)));
                    arr_25 [i_6] [i_6] [(unsigned short)24] [i_6] = ((/* implicit */signed char) (((!(arr_17 [i_0] [21LL] [21LL] [21LL]))) ? (var_7) : (((/* implicit */unsigned long long int) arr_1 [i_6 + 1]))));
                }
                var_23 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_19 [i_3 - 2] [i_3 - 2] [(short)21] [i_6 - 2]))));
            }
            for (int i_8 = ((((/* implicit */int) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_3] [i_3] [i_3] [(unsigned short)1])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-28681))) : (arr_1 [i_3])))) ? (arr_9 [i_3 + 1] [i_3 - 1]) : ((+(arr_8 [i_0] [i_0]))))))) - (26703))/*2*/; i_8 < ((((/* implicit */int) arr_17 [i_3 - 2] [i_3 - 2] [i_3 - 2] [i_3 - 2])) + (23))/*23*/; i_8 += ((((/* implicit */int) ((((/* implicit */_Bool) (short)-28662)) ? (((((/* implicit */_Bool) 67104768)) ? (((/* implicit */long long int) 0)) : (var_3))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (unsigned char)28))))))) + (4))/*4*/) 
            {
                arr_28 [(_Bool)1] = ((/* implicit */unsigned short) 1140933392054671964LL);
                /* LoopSeq 3 */
                for (unsigned long long int i_9 = ((((/* implicit */unsigned long long int) var_3)) - (8873384996418799737ULL))/*0*/; i_9 < ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((+(((/* implicit */int) arr_10 [i_0] [(short)9] [(unsigned char)13])))), ((+(((/* implicit */int) arr_3 [i_0] [i_3] [i_8]))))))) ? (var_5) : (((/* implicit */long long int) var_4))))) - (18203728776311063319ULL))/*25*/; i_9 += ((((/* implicit */unsigned long long int) ((unsigned char) (-(((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [(unsigned short)19] [i_3] [(unsigned short)19]))) - (arr_27 [i_0] [19LL] [i_0] [i_0]))))))) - (105ULL))/*2*/) 
                {
                    arr_33 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((((_Bool) ((((/* implicit */_Bool) var_4)) ? (3995131970985081326LL) : (var_5)))) ? (min((((/* implicit */unsigned long long int) arr_27 [i_0] [i_3 + 1] [i_8 + 1] [i_0])), (max((var_7), (((/* implicit */unsigned long long int) arr_1 [i_0])))))) : (((/* implicit */unsigned long long int) ((int) arr_6 [i_3 - 1] [i_3 + 1] [i_8 + 1]))));
                    var_24 -= ((((/* implicit */_Bool) ((unsigned long long int) max((((/* implicit */int) arr_0 [i_0] [i_0])), (var_6))))) ? (((/* implicit */int) arr_19 [i_9] [i_8 - 2] [i_3] [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))));
                    arr_34 [(unsigned short)20] [i_3 + 1] [i_8] [i_9] &= ((/* implicit */signed char) max((((((/* implicit */_Bool) (unsigned short)8151)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (126921301U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((var_5) + (9223372036854775807LL))) << (((arr_31 [i_0]) - (15973052062878146713ULL)))))) ? (((/* implicit */int) var_12)) : (var_6))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_10 = ((((/* implicit */unsigned long long int) var_1)) - (11993ULL))/*0*/; i_10 < ((var_0) - (8798877227263083305ULL))/*25*/; i_10 += ((((/* implicit */unsigned long long int) var_11)) - (802815705ULL))/*1*/) 
                    {
                        var_25 = ((/* implicit */long long int) ((int) (~(((/* implicit */int) var_12)))));
                        var_26 = ((/* implicit */int) max((var_26), ((+(((/* implicit */int) arr_30 [i_3 + 1] [i_3] [i_3] [(short)21] [i_8] [i_8 - 1]))))));
                    }
                    for (unsigned short i_11 = ((((/* implicit */int) ((/* implicit */unsigned short) arr_23 [i_0] [i_3 - 2] [i_8 + 2] [i_3 - 2]))) - (218))/*0*/; i_11 < ((((/* implicit */int) var_2)) - (64830))/*25*/; i_11 += ((((/* implicit */int) var_2)) - (64852))/*3*/) 
                    {
                        arr_40 [(unsigned short)9] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((_Bool) arr_29 [i_0] [i_0] [i_11])))))));
                        arr_41 [i_0] [i_0] [i_0] [2LL] [i_0] = ((/* implicit */long long int) ((min((min((((/* implicit */unsigned long long int) arr_15 [i_3] [i_9] [i_11])), (arr_29 [i_3] [i_8] [19ULL]))), (((/* implicit */unsigned long long int) ((long long int) arr_6 [i_8] [i_9] [i_11]))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) (unsigned char)249)))))))));
                        arr_42 [i_0] [3ULL] [i_0] [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */long long int) (-((+(((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned short)35682))))))));
                    }
                }
                for (int i_12 = ((((/* implicit */int) var_0)) - (1095385922))/*0*/; i_12 < ((((/* implicit */int) ((unsigned short) ((((/* implicit */int) arr_19 [i_3] [i_3] [i_3 - 1] [i_3])) | (((/* implicit */int) arr_19 [(short)14] [i_3] [i_3 - 2] [i_3])))))) - (4274))/*25*/; i_12 += ((((/* implicit */int) var_12)) - (22041))/*3*/) 
                {
                    arr_46 [i_3] &= ((max((var_5), (((/* implicit */long long int) var_1)))) << (((var_7) - (3416298849891262088ULL))));
                    var_27 &= ((/* implicit */unsigned short) arr_0 [i_0] [i_3]);
                }
                for (int i_13 = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) arr_45 [i_8] [i_3] [i_3 - 1] [i_0])))))/*0*/; i_13 < ((((/* implicit */int) arr_39 [i_0] [i_0])) + (25))/*25*/; i_13 += ((((/* implicit */int) var_12)) - (22040))/*4*/) 
                {
                    arr_49 [i_0] [(short)14] [i_8 - 2] [i_8] [(_Bool)1] = min(((+(((/* implicit */int) arr_17 [i_0] [(_Bool)1] [i_0] [i_13])))), (((/* implicit */int) ((unsigned char) (~(((/* implicit */int) arr_4 [i_13] [i_3] [i_13])))))));
                    var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) ((20ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)82))))))));
                    arr_50 [(unsigned short)12] [(unsigned short)12] [(unsigned char)17] [(unsigned short)12] [i_0] [(_Bool)1] &= ((/* implicit */unsigned char) (~(max((max((((/* implicit */long long int) 2147483647)), (3995131970985081322LL))), (((/* implicit */long long int) 3221225472U))))));
                }
            }
            var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned long long int) (~(arr_8 [i_3 - 1] [1]))))))) ? (var_0) : (((/* implicit */unsigned long long int) ((int) var_12)))));
        }
    }
    for (unsigned short i_14 = ((((/* implicit */int) ((/* implicit */unsigned short) var_7))) - (7846))/*3*/; i_14 < ((((/* implicit */int) ((/* implicit */unsigned short) ((int) (~(((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) var_12)) - (22032)))))))))) - (65516))/*19*/; i_14 += ((((/* implicit */int) ((/* implicit */unsigned short) (~((~(634258675))))))) - (1264))/*3*/) /* same iter space */
    {
        var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) max((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_14 - 2] [i_14 - 2]))) <= (((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) - (var_0)))))), (arr_51 [i_14] [(unsigned short)4]))))));
        var_31 = ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)0))));
    }
    for (unsigned short i_15 = ((((/* implicit */int) ((/* implicit */unsigned short) var_7))) - (7846))/*3*/; i_15 < ((((/* implicit */int) ((/* implicit */unsigned short) ((int) (~(((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) var_12)) - (22032)))))))))) - (65516))/*19*/; i_15 += ((((/* implicit */int) ((/* implicit */unsigned short) (~((~(634258675))))))) - (1264))/*3*/) /* same iter space */
    {
        arr_56 [(_Bool)1] = ((/* implicit */short) max((((/* implicit */int) var_2)), ((+(((/* implicit */int) arr_17 [i_15 - 3] [i_15 - 2] [i_15 + 1] [i_15 - 1]))))));
        var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) ((unsigned short) min((((unsigned long long int) arr_36 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15])), (((unsigned long long int) var_10))))))));
    }
    for (unsigned short i_16 = ((((/* implicit */int) ((/* implicit */unsigned short) var_1))) - (11993))/*0*/; i_16 < ((((/* implicit */int) ((/* implicit */unsigned short) var_7))) - (7824))/*25*/; i_16 += ((((/* implicit */int) ((/* implicit */unsigned short) var_0))) - (17215))/*3*/) 
    {
        var_33 ^= ((/* implicit */unsigned long long int) arr_3 [i_16] [i_16] [i_16]);
        if (((/* implicit */_Bool) var_4))
        {
            /* LoopSeq 3 */
            for (unsigned int i_17 = ((((/* implicit */unsigned int) var_12)) - (22044U))/*0*/; i_17 < ((((/* implicit */unsigned int) var_8)) - (1842629165U))/*25*/; i_17 += ((((/* implicit */unsigned int) arr_4 [i_16] [i_16] [i_16])) - (94U))/*4*/) 
            {
                arr_61 [(unsigned short)15] = (-(arr_1 [i_16]));
                arr_62 [i_17] = ((/* implicit */unsigned long long int) max((((int) (~(((/* implicit */int) var_1))))), (var_6)));
                var_34 = (-(((/* implicit */int) (short)-32744)));
            }
            for (unsigned char i_18 = ((((/* implicit */int) ((/* implicit */unsigned char) var_1))) - (217))/*0*/; i_18 < ((((/* implicit */int) ((/* implicit */unsigned char) var_7))) - (144))/*25*/; i_18 += ((((/* implicit */int) ((/* implicit */unsigned char) (((+(var_11))) != (((((/* implicit */int) var_9)) - ((~(((/* implicit */int) arr_13 [i_16] [(unsigned short)16] [i_16])))))))))) + (2))/*3*/) 
            {
                var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_16] [i_16] [i_16])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_16] [i_18] [i_18]))) : (var_0)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)16))))) : (((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) arr_31 [i_16]))))))));
                var_36 = ((/* implicit */unsigned long long int) ((unsigned short) (+(((/* implicit */int) var_12)))));
            }
            for (unsigned long long int i_19 = ((((/* implicit */unsigned long long int) ((unsigned short) arr_43 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16]))) - (64231ULL))/*0*/; i_19 < ((((/* implicit */unsigned long long int) var_11)) - (802815681ULL))/*25*/; i_19 += ((((/* implicit */unsigned long long int) min((min((((/* implicit */long long int) ((short) arr_45 [i_16] [i_16] [i_16] [i_16]))), (((((-555093508180538798LL) + (9223372036854775807LL))) << (((8394201337176052155LL) - (8394201337176052155LL))))))), ((~(min((((/* implicit */long long int) var_10)), (-3682693820408019298LL)))))))) - (18446744073709529262ULL))/*1*/) 
            {
                var_37 = ((/* implicit */unsigned long long int) min((var_37), (((/* implicit */unsigned long long int) 4294967295U))));
                arr_70 [i_19] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (-(min((((/* implicit */int) arr_30 [i_16] [i_19] [(short)24] [10LL] [i_19] [i_19])), (-67104768)))))) != ((+(arr_47 [i_16] [i_16] [i_16] [i_19])))));
            }
            var_38 = ((/* implicit */unsigned char) ((unsigned short) min((var_9), (arr_19 [i_16] [i_16] [i_16] [i_16]))));
        }

    }
    var_39 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)384)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)54))) : (7682581471493949032LL)));
}
