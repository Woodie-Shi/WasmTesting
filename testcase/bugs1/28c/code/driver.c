#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1249593775U;
_Bool var_1 = (_Bool)0;
unsigned char var_2 = (unsigned char)75;
unsigned long long int var_3 = 8529237432866177994ULL;
_Bool var_4 = (_Bool)1;
unsigned long long int var_5 = 9578646546576115966ULL;
signed char var_6 = (signed char)68;
short var_7 = (short)28329;
long long int var_8 = 7806576568437238258LL;
signed char var_9 = (signed char)30;
unsigned int var_10 = 2639011078U;
int zero = 0;
short var_11 = (short)13368;
unsigned int var_12 = 4153358795U;
long long int var_13 = -5272807095179055711LL;
unsigned long long int var_14 = 13137080814764234183ULL;
signed char var_15 = (signed char)126;
signed char var_16 = (signed char)48;
unsigned int var_17 = 623238206U;
unsigned int var_18 = 3292896991U;
int var_19 = -1187606640;
unsigned long long int var_20 = 8560101475478381074ULL;
long long int var_21 = 1141446801935995305LL;
short var_22 = (short)-1400;
int arr_0 [16] ;
long long int arr_1 [16] ;
_Bool arr_4 [16] [16] ;
_Bool arr_5 [16] [16] ;
short arr_6 [16] [16] [16] ;
signed char arr_7 [16] [16] [16] ;
unsigned long long int arr_8 [16] [16] ;
long long int arr_9 [16] [16] [16] ;
unsigned char arr_12 [11] ;
int arr_13 [11] [11] ;
long long int arr_16 [11] [11] ;
short arr_17 [11] [11] ;
short arr_18 [11] [11] [11] [11] ;
unsigned char arr_19 [11] [11] ;
signed char arr_2 [16] [16] ;
unsigned long long int arr_3 [16] [16] ;
short arr_11 [16] [16] [16] ;
short arr_14 [11] ;
short arr_15 [11] [11] ;
signed char arr_22 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 1008762355;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 9019729695061949960LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (short)8447;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (signed char)-95;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? 12835161513807216433ULL : 1169534802649761087ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 1400939729528572767LL : 8971854610443308382LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (unsigned char)184 : (unsigned char)42;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_13 [i_0] [i_1] = -1842754772;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_16 [i_0] [i_1] = -6749978260488417785LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_17 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)21077 : (short)-27390;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (short)24320;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_19 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)14 : (unsigned char)207;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)64;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = 2340525626051839469ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)9590 : (short)-2713;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (short)6574 : (short)27069;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_15 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)20332 : (short)9096;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_22 [i_0] = (signed char)-76;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_22 [i_0] );
}
void test(unsigned int var_0, _Bool var_1, unsigned char var_2, unsigned long long int var_3, _Bool var_4, unsigned long long int var_5, signed char var_6, short var_7, long long int var_8, signed char var_9, unsigned int var_10, int zero, int arr_0 [16] , long long int arr_1 [16] , _Bool arr_4 [16] [16] , _Bool arr_5 [16] [16] , short arr_6 [16] [16] [16] , signed char arr_7 [16] [16] [16] , unsigned long long int arr_8 [16] [16] , long long int arr_9 [16] [16] [16] , unsigned char arr_12 [11] , int arr_13 [11] [11] , long long int arr_16 [11] [11] , short arr_17 [11] [11] , short arr_18 [11] [11] [11] [11] , unsigned char arr_19 [11] [11] );

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_10, zero, arr_0 , arr_1 , arr_4 , arr_5 , arr_6 , arr_7 , arr_8 , arr_9 , arr_12 , arr_13 , arr_16 , arr_17 , arr_18 , arr_19 );
    checksum();
    printf("%llu\n", seed);
}
