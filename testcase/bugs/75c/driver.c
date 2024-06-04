#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)31600;
short var_1 = (short)2049;
signed char var_3 = (signed char)-122;
unsigned long long int var_5 = 9131050087982219320ULL;
_Bool var_6 = (_Bool)1;
long long int var_9 = -663454567148061608LL;
signed char var_10 = (signed char)121;
int var_12 = -1708544500;
signed char var_13 = (signed char)-38;
unsigned long long int var_14 = 10927776401902655443ULL;
unsigned int var_17 = 338161806U;
_Bool var_18 = (_Bool)0;
int zero = 0;
short var_20 = (short)14504;
unsigned short var_21 = (unsigned short)1840;
unsigned char var_22 = (unsigned char)210;
unsigned short arr_0 [13] ;
unsigned long long int arr_2 [13] [13] ;
long long int arr_3 [13] [13] ;
unsigned int arr_4 [13] ;
unsigned short arr_6 [13] ;
unsigned long long int arr_9 [13] [13] [13] [13] [13] ;
unsigned char arr_5 [13] [13] ;
_Bool arr_10 [13] [13] [13] [13] [13] [13] ;
short arr_11 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (unsigned short)55914;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = 17469347597954450517ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = 3122050929955329348LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = 165447701U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = (unsigned short)975;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? 10319544569508441888ULL : 8461826660576255309ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)162 : (unsigned char)254;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_3 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (short)30055 : (short)29236;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            hash(&seed, arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test(unsigned short var_0, short var_1, signed char var_3, unsigned long long int var_5, _Bool var_6, long long int var_9, signed char var_10, int var_12, signed char var_13, unsigned long long int var_14, unsigned int var_17, _Bool var_18, int zero, unsigned short arr_0 [13] , unsigned long long int arr_2 [13] [13] , long long int arr_3 [13] [13] , unsigned int arr_4 [13] , unsigned short arr_6 [13] , unsigned long long int arr_9 [13] [13] [13] [13] [13] );

int main() {
    init();
    test(var_0, var_1, var_3, var_5, var_6, var_9, var_10, var_12, var_13, var_14, var_17, var_18, zero, arr_0 , arr_2 , arr_3 , arr_4 , arr_6 , arr_9 );
    checksum();
    printf("%llu\n", seed);
}
