#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)16378;
int var_1 = 1569601531;
_Bool var_2 = (_Bool)0;
signed char var_3 = (signed char)-75;
unsigned short var_4 = (unsigned short)22756;
unsigned char var_5 = (unsigned char)89;
unsigned long long int var_7 = 13385783966773138660ULL;
short var_9 = (short)-4657;
unsigned long long int var_11 = 5867095718002653881ULL;
unsigned int var_12 = 589889437U;
short var_13 = (short)-25204;
unsigned long long int var_14 = 18175544112803744480ULL;
unsigned long long int var_15 = 9326212144102320250ULL;
int zero = 0;
unsigned int var_16 = 3439012759U;
unsigned long long int var_17 = 1069171703505050360ULL;
unsigned int var_18 = 3163771078U;
unsigned int var_19 = 3775019443U;
unsigned int var_20 = 3080037720U;
int var_21 = 339431367;
unsigned short var_22 = (unsigned short)41680;
unsigned char var_23 = (unsigned char)204;
signed char var_24 = (signed char)34;
unsigned char var_25 = (unsigned char)80;
unsigned long long int var_26 = 14083434120105287962ULL;
signed char var_27 = (signed char)24;
short arr_0 [19] [19] ;
short arr_3 [19] ;
_Bool arr_4 [19] ;
signed char arr_5 [19] ;
long long int arr_6 [19] [19] [19] [19] ;
int arr_8 [19] [19] [19] [19] ;
unsigned int arr_9 [19] [19] [19] [19] ;
long long int arr_12 [19] ;
unsigned int arr_14 [19] [19] ;
int arr_15 [19] [19] [19] [19] [19] [19] ;
signed char arr_16 [19] [19] [19] [19] [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-24148;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (short)-3620;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (signed char)-34;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = 3319650223039808307LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = -996523270;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 2798376668U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_12 [i_0] = 7173196634869863779LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_14 [i_0] [i_1] = (i_1 % 2 == 0) ? 4026650572U : 3465857371U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? 1274258639 : 1543988492;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 19; ++i_6) 
                                arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_4 % 2 == 0) ? (signed char)-102 : (signed char)71;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            hash(&seed, arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 19; ++i_6) 
                                hash(&seed, arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
}
void test(short var_0, int var_1, _Bool var_2, signed char var_3, unsigned short var_4, unsigned char var_5, unsigned long long int var_7, short var_9, unsigned long long int var_11, unsigned int var_12, short var_13, unsigned long long int var_14, unsigned long long int var_15, int zero, short arr_0 [19] [19] , short arr_3 [19] , _Bool arr_4 [19] , signed char arr_5 [19] , long long int arr_6 [19] [19] [19] [19] , int arr_8 [19] [19] [19] [19] , unsigned int arr_9 [19] [19] [19] [19] , long long int arr_12 [19] );

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_4, var_5, var_7, var_9, var_11, var_12, var_13, var_14, var_15, zero, arr_0 , arr_3 , arr_4 , arr_5 , arr_6 , arr_8 , arr_9 , arr_12 );
    checksum();
    printf("%llu\n", seed);
}
