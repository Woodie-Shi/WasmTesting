#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6052672726810113498ULL;
unsigned long long int var_1 = 13119564041391774878ULL;
unsigned long long int var_3 = 10143849499903600247ULL;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 15406558893398880245ULL;
unsigned int var_7 = 2297605221U;
_Bool var_8 = (_Bool)1;
unsigned short var_9 = (unsigned short)59971;
unsigned char var_10 = (unsigned char)64;
long long int var_11 = 2122262244190426532LL;
int var_12 = 1199316071;
unsigned short var_13 = (unsigned short)21303;
int zero = 0;
unsigned int var_14 = 2555037318U;
unsigned short var_15 = (unsigned short)63728;
int var_16 = 1423828040;
unsigned char var_17 = (unsigned char)66;
_Bool var_18 = (_Bool)1;
short var_19 = (short)30421;
unsigned char var_20 = (unsigned char)172;
unsigned char var_21 = (unsigned char)129;
_Bool var_22 = (_Bool)0;
unsigned long long int var_23 = 5187376007684367303ULL;
unsigned int var_24 = 336029506U;
_Bool var_25 = (_Bool)1;
unsigned long long int var_26 = 17963775568458297558ULL;
unsigned long long int var_27 = 12235038998166592058ULL;
int arr_0 [14] ;
unsigned char arr_1 [14] [14] ;
unsigned short arr_2 [14] ;
unsigned char arr_5 [14] [14] [14] ;
unsigned short arr_6 [14] ;
unsigned int arr_7 [14] [14] [14] ;
_Bool arr_8 [14] [14] ;
int arr_9 [14] [14] ;
unsigned long long int arr_10 [14] [14] ;
_Bool arr_14 [14] [14] [14] [14] [14] ;
int arr_16 [14] [14] [14] [14] [14] [14] [14] ;
unsigned short arr_3 [14] ;
int arr_4 [14] [14] ;
unsigned int arr_11 [14] [14] [14] [14] ;
short arr_17 [14] [14] [14] [14] [14] ;
unsigned int arr_18 [14] [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 1736040226;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)50;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (unsigned short)29979;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)198 : (unsigned char)44;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned short)20655 : (unsigned short)44839;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 3169809142U : 2810643226U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_8 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? -2006230308 : -1101420889;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_10 [i_0] [i_1] = (i_0 % 2 == 0) ? 9073332401608904294ULL : 2537466147296102779ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 14; ++i_6) 
                                arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = -874387248;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (unsigned short)10545;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = -301847250;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 1694583308U : 2890667133U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? (short)16411 : (short)-32256;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 2633424234U : 163351637U;
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    hash(&seed, arr_11 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        hash(&seed, arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    hash(&seed, arr_18 [i_0] [i_1] [i_2] [i_3] );
}
void test(unsigned long long int var_0, unsigned long long int var_1, unsigned long long int var_3, _Bool var_5, unsigned long long int var_6, unsigned int var_7, _Bool var_8, unsigned short var_9, unsigned char var_10, long long int var_11, int var_12, unsigned short var_13, int zero, int arr_0 [14] , unsigned char arr_1 [14] [14] , unsigned short arr_2 [14] , unsigned char arr_5 [14] [14] [14] , unsigned short arr_6 [14] , unsigned int arr_7 [14] [14] [14] , _Bool arr_8 [14] [14] , int arr_9 [14] [14] , unsigned long long int arr_10 [14] [14] , _Bool arr_14 [14] [14] [14] [14] [14] , int arr_16 [14] [14] [14] [14] [14] [14] [14] );

int main() {
    init();
    test(var_0, var_1, var_3, var_5, var_6, var_7, var_8, var_9, var_10, var_11, var_12, var_13, zero, arr_0 , arr_1 , arr_2 , arr_5 , arr_6 , arr_7 , arr_8 , arr_9 , arr_10 , arr_14 , arr_16 );
    checksum();
    printf("%llu\n", seed);
}
