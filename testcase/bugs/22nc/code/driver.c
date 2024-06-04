#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2192052203153528186ULL;
signed char var_1 = (signed char)-126;
int var_2 = -218196729;
_Bool var_3 = (_Bool)0;
int var_5 = -1352470745;
long long int var_6 = -3023005479842639714LL;
unsigned short var_7 = (unsigned short)58226;
signed char var_8 = (signed char)-80;
_Bool var_9 = (_Bool)1;
_Bool var_11 = (_Bool)1;
_Bool var_13 = (_Bool)0;
long long int var_14 = -6426251043595249114LL;
int zero = 0;
unsigned int var_15 = 171420342U;
_Bool var_16 = (_Bool)1;
long long int var_17 = -812655948679989227LL;
unsigned short var_18 = (unsigned short)53297;
int var_19 = -2033072204;
long long int var_20 = -888783364233391391LL;
signed char var_21 = (signed char)-79;
short var_22 = (short)32644;
unsigned long long int var_23 = 12265749340439920142ULL;
signed char var_24 = (signed char)-120;
signed char var_25 = (signed char)95;
int arr_0 [13] ;
unsigned char arr_1 [13] ;
unsigned short arr_2 [13] ;
unsigned short arr_3 [13] [13] ;
short arr_4 [13] [13] [13] ;
_Bool arr_5 [13] [13] ;
unsigned short arr_6 [13] [13] ;
_Bool arr_7 [13] [13] [13] [13] [13] [13] ;
unsigned long long int arr_10 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 320123689;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (unsigned char)164;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (unsigned short)11919;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)61276;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (short)-29642;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)65489;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_7 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_10 [i_0] [i_1] = 8980803782599109207ULL;
}

void checksum() {
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
}
void test(unsigned long long int var_0, signed char var_1, int var_2, _Bool var_3, int var_5, long long int var_6, unsigned short var_7, signed char var_8, _Bool var_9, _Bool var_11, _Bool var_13, long long int var_14, int zero, int arr_0 [13] , unsigned char arr_1 [13] , unsigned short arr_2 [13] , unsigned short arr_3 [13] [13] , short arr_4 [13] [13] [13] , _Bool arr_5 [13] [13] , unsigned short arr_6 [13] [13] , _Bool arr_7 [13] [13] [13] [13] [13] [13] , unsigned long long int arr_10 [13] [13] );

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_5, var_6, var_7, var_8, var_9, var_11, var_13, var_14, zero, arr_0 , arr_1 , arr_2 , arr_3 , arr_4 , arr_5 , arr_6 , arr_7 , arr_10 );
    checksum();
    printf("%llu\n", seed);
}
