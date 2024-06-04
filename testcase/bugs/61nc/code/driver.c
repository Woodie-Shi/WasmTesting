#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)135;
unsigned int var_1 = 196638323U;
long long int var_2 = -6817977353036024712LL;
unsigned long long int var_3 = 712762816679620081ULL;
unsigned long long int var_4 = 11055028172724219164ULL;
unsigned short var_5 = (unsigned short)46843;
unsigned int var_6 = 3478121100U;
unsigned long long int var_7 = 10577717863972390453ULL;
unsigned int var_8 = 64826355U;
unsigned long long int var_9 = 5876610657351128017ULL;
unsigned short var_10 = (unsigned short)49081;
unsigned int var_11 = 272993994U;
short var_12 = (short)-7889;
long long int var_13 = 7297691900927515641LL;
int zero = 0;
int var_14 = -1765601044;
unsigned long long int var_15 = 11160017142275417725ULL;
int var_16 = -22821398;
int var_17 = 853045185;
unsigned int var_18 = 1158022084U;
int var_19 = -688312213;
int var_20 = 444164633;
unsigned int var_21 = 3731159394U;
unsigned short var_22 = (unsigned short)96;
short var_23 = (short)-29054;
long long int var_24 = 7614155107155381497LL;
int var_25 = -1845287277;
unsigned int var_26 = 2274896385U;
long long int var_27 = -4413726859372736108LL;
short var_28 = (short)15078;
unsigned int var_29 = 1236442512U;
unsigned int var_30 = 1295639929U;
unsigned short var_31 = (unsigned short)64458;
unsigned char arr_1 [14] [14] ;
int arr_2 [14] [14] [14] ;
short arr_3 [14] ;
int arr_4 [14] [14] ;
short arr_5 [14] [14] [14] [14] ;
unsigned int arr_6 [14] [14] [14] [14] ;
long long int arr_7 [14] [14] [14] ;
unsigned int arr_8 [14] [14] [14] [14] ;
unsigned short arr_10 [13] ;
short arr_11 [13] ;
long long int arr_12 [13] ;
unsigned int arr_13 [13] [13] [13] ;
long long int arr_14 [13] ;
unsigned short arr_15 [13] ;
short arr_16 [13] ;
unsigned short arr_19 [13] [13] [13] [13] ;
unsigned short arr_20 [13] [13] [13] [13] [13] [13] ;
unsigned int arr_22 [13] [13] [13] [13] ;
unsigned short arr_23 [13] [13] [13] [13] [13] ;
unsigned int arr_24 [13] [13] [13] [13] [13] [13] ;
unsigned long long int arr_29 [19] ;
unsigned int arr_31 [19] ;
short arr_34 [19] ;
unsigned int arr_9 [14] ;
unsigned int arr_17 [13] [13] [13] ;
unsigned int arr_18 [13] [13] [13] ;
unsigned char arr_25 [13] [13] [13] [13] [13] ;
int arr_26 [13] ;
long long int arr_27 [13] [13] ;
unsigned short arr_28 [13] ;
unsigned char arr_35 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)200;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -1313070153 : 1526749004;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (short)-14505 : (short)3689;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = 1767570423;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (short)15116;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 820562776U : 1613976317U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 8896782481077499123LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = 505778609U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (unsigned short)39817 : (unsigned short)29873;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_11 [i_0] = (short)-8704;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_12 [i_0] = -2578092604569480223LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = 2106735836U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_14 [i_0] = -1367374613514598820LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_15 [i_0] = (unsigned short)19637;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_16 [i_0] = (short)9872;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = (unsigned short)34750;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)39303;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_22 [i_0] [i_1] [i_2] [i_3] = 2248563909U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? (unsigned short)1235 : (unsigned short)50004;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_1 % 2 == 0) ? 4256519286U : 1181366246U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_29 [i_0] = 16046857696548464091ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_31 [i_0] = 3417204192U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_34 [i_0] = (short)-24745;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 2651953652U : 1500302494U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 1579072901U : 1161231620U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 2323852556U : 2029860300U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_25 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? (unsigned char)219 : (unsigned char)239;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_26 [i_0] = (i_0 % 2 == 0) ? -2144401222 : 532773456;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_27 [i_0] [i_1] = (i_0 % 2 == 0) ? -6363556732259883582LL : 7400535360601109558LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_28 [i_0] = (i_0 % 2 == 0) ? (unsigned short)53688 : (unsigned short)7895;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_35 [i_0] = (unsigned char)202;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_17 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_18 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        hash(&seed, arr_25 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_26 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_27 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_28 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_35 [i_0] );
}
void test(unsigned char var_0, unsigned int var_1, long long int var_2, unsigned long long int var_3, unsigned long long int var_4, unsigned short var_5, unsigned int var_6, unsigned long long int var_7, unsigned int var_8, unsigned long long int var_9, unsigned short var_10, unsigned int var_11, short var_12, long long int var_13, int zero, unsigned char arr_1 [14] [14] , int arr_2 [14] [14] [14] , short arr_3 [14] , int arr_4 [14] [14] , short arr_5 [14] [14] [14] [14] , unsigned int arr_6 [14] [14] [14] [14] , long long int arr_7 [14] [14] [14] , unsigned int arr_8 [14] [14] [14] [14] , unsigned short arr_10 [13] , short arr_11 [13] , long long int arr_12 [13] , unsigned int arr_13 [13] [13] [13] , long long int arr_14 [13] , unsigned short arr_15 [13] , short arr_16 [13] , unsigned short arr_19 [13] [13] [13] [13] , unsigned short arr_20 [13] [13] [13] [13] [13] [13] , unsigned int arr_22 [13] [13] [13] [13] , unsigned short arr_23 [13] [13] [13] [13] [13] , unsigned int arr_24 [13] [13] [13] [13] [13] [13] , unsigned long long int arr_29 [19] , unsigned int arr_31 [19] , short arr_34 [19] );

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_10, var_11, var_12, var_13, zero, arr_1 , arr_2 , arr_3 , arr_4 , arr_5 , arr_6 , arr_7 , arr_8 , arr_10 , arr_11 , arr_12 , arr_13 , arr_14 , arr_15 , arr_16 , arr_19 , arr_20 , arr_22 , arr_23 , arr_24 , arr_29 , arr_31 , arr_34 );
    checksum();
    printf("%llu\n", seed);
}
