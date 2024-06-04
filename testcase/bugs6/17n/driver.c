#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)2857;
int var_3 = 1421053983;
unsigned short var_4 = (unsigned short)16596;
short var_5 = (short)14194;
long long int var_6 = -3548437197386973934LL;
long long int var_7 = -8909233630416134787LL;
long long int var_8 = -830946288653649754LL;
long long int var_9 = -3471255650639345798LL;
unsigned short var_10 = (unsigned short)23657;
long long int var_12 = 3852098895820829092LL;
int var_13 = -1967468508;
long long int var_15 = 688877371931245539LL;
unsigned char var_19 = (unsigned char)53;
int zero = 0;
unsigned char var_20 = (unsigned char)168;
unsigned char var_21 = (unsigned char)38;
unsigned short var_22 = (unsigned short)12107;
long long int var_23 = -5521850332321231722LL;
long long int var_24 = -7951438687834367157LL;
int arr_0 [19] [19] ;
short arr_1 [19] [19] ;
long long int arr_2 [19] [19] ;
unsigned char arr_3 [19] ;
int arr_6 [19] ;
unsigned char arr_7 [19] [19] [19] ;
long long int arr_10 [19] [19] [19] [19] [19] [19] ;
unsigned short arr_8 [19] [19] [19] ;
unsigned char arr_13 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = 2109456582;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (short)18090;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = -150282427601257337LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (unsigned char)44;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? -1570440406 : -1744769864;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)100 : (unsigned char)224;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -5906976266816878951LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)60751 : (unsigned short)6819;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (unsigned char)77 : (unsigned char)67;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test(short var_0, int var_3, unsigned short var_4, short var_5, long long int var_6, long long int var_7, long long int var_8, long long int var_9, unsigned short var_10, long long int var_12, int var_13, long long int var_15, unsigned char var_19, int zero, int arr_0 [19] [19] , short arr_1 [19] [19] , long long int arr_2 [19] [19] , unsigned char arr_3 [19] , int arr_6 [19] , unsigned char arr_7 [19] [19] [19] , long long int arr_10 [19] [19] [19] [19] [19] [19] );

int main() {
    init();
    test(var_0, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_10, var_12, var_13, var_15, var_19, zero, arr_0 , arr_1 , arr_2 , arr_3 , arr_6 , arr_7 , arr_10 );
    checksum();
    printf("%llu\n", seed);
}
