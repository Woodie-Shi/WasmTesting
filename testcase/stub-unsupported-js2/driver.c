#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)10099;
_Bool var_2 = (_Bool)1;
signed char var_6 = (signed char)-124;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)1;
short var_9 = (short)-17490;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 2473850610U;
long long int var_16 = 8426135642522326536LL;
short var_18 = (short)-17598;
int zero = 0;
_Bool var_19 = (_Bool)0;
long long int var_20 = -7329667050963134287LL;
_Bool var_21 = (_Bool)0;
unsigned char var_22 = (unsigned char)255;
unsigned short var_23 = (unsigned short)25455;
_Bool var_24 = (_Bool)0;
unsigned char arr_0 [25] ;
unsigned char arr_1 [25] [25] ;
_Bool arr_3 [25] ;
_Bool arr_6 [25] ;
unsigned short arr_7 [25] [25] [25] [25] [25] ;
long long int arr_8 [25] [25] [25] [25] [25] [25] ;
int arr_9 [25] [25] ;
unsigned short arr_10 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (unsigned char)35;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)117 : (unsigned char)49;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_7 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? (unsigned short)14781 : (unsigned short)23983;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_3 % 2 == 0) ? 2766734193261910009LL : -5548471172371105724LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? 1760839206 : 1488537111;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (unsigned short)44212 : (unsigned short)8886;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            hash(&seed, arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test(short var_0, _Bool var_2, signed char var_6, _Bool var_7, _Bool var_8, short var_9, _Bool var_11, unsigned int var_12, long long int var_16, short var_18, int zero, unsigned char arr_0 [25] , unsigned char arr_1 [25] [25] , _Bool arr_3 [25] , _Bool arr_6 [25] , unsigned short arr_7 [25] [25] [25] [25] [25] );

int main() {
    init();
    test(var_0, var_2, var_6, var_7, var_8, var_9, var_11, var_12, var_16, var_18, zero, arr_0 , arr_1 , arr_3 , arr_6 , arr_7 );
    checksum();
    printf("%llu\n", seed);
}
