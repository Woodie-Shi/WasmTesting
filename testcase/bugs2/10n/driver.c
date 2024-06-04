#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_2 = -2845567006936793795LL;
unsigned char var_3 = (unsigned char)229;
_Bool var_4 = (_Bool)0;
long long int var_5 = -7145943406653208104LL;
signed char var_6 = (signed char)63;
_Bool var_7 = (_Bool)0;
long long int var_8 = -1559496026150804501LL;
_Bool var_9 = (_Bool)0;
unsigned int var_10 = 3612504280U;
long long int var_11 = 2515212165505882964LL;
_Bool var_13 = (_Bool)1;
unsigned char var_14 = (unsigned char)20;
unsigned char var_15 = (unsigned char)34;
unsigned short var_16 = (unsigned short)3313;
unsigned long long int var_18 = 5872641015184575173ULL;
int zero = 0;
short var_20 = (short)-17661;
short var_21 = (short)-19839;
_Bool var_22 = (_Bool)1;
unsigned char var_23 = (unsigned char)221;
signed char var_24 = (signed char)-74;
unsigned long long int arr_2 [23] ;
unsigned long long int arr_3 [23] [23] [23] ;
unsigned long long int arr_4 [23] [23] ;
unsigned char arr_5 [23] [23] [23] [23] ;
long long int arr_6 [23] [23] ;
signed char arr_7 [23] [23] [23] [23] ;
unsigned char arr_8 [23] ;
_Bool arr_11 [23] [23] [23] [23] ;
unsigned char arr_12 [23] ;
unsigned long long int arr_16 [23] [23] [23] [23] [23] [23] ;
_Bool arr_9 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 4478423389416140946ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 15667234150999491344ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = 6556145050280885872ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned char)239 : (unsigned char)215;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? -2484232759763763491LL : 2228589275565772893LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (signed char)-75;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = (unsigned char)118;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (unsigned char)182 : (unsigned char)224;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 5632424549076099625ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test(_Bool var_0, long long int var_2, unsigned char var_3, _Bool var_4, long long int var_5, signed char var_6, _Bool var_7, long long int var_8, _Bool var_9, unsigned int var_10, long long int var_11, _Bool var_13, unsigned char var_14, unsigned char var_15, unsigned short var_16, unsigned long long int var_18, int zero, unsigned long long int arr_2 [23] , unsigned long long int arr_3 [23] [23] [23] , unsigned long long int arr_4 [23] [23] , unsigned char arr_5 [23] [23] [23] [23] , long long int arr_6 [23] [23] , signed char arr_7 [23] [23] [23] [23] , unsigned char arr_8 [23] , _Bool arr_11 [23] [23] [23] [23] , unsigned char arr_12 [23] , unsigned long long int arr_16 [23] [23] [23] [23] [23] [23] );

int main() {
    init();
    test(var_0, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_10, var_11, var_13, var_14, var_15, var_16, var_18, zero, arr_2 , arr_3 , arr_4 , arr_5 , arr_6 , arr_7 , arr_8 , arr_11 , arr_12 , arr_16 );
    checksum();
    printf("%llu\n", seed);
}
