#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)8939;
unsigned short var_1 = (unsigned short)5546;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)1;
long long int var_5 = -2748628082413301736LL;
short var_6 = (short)-25359;
int var_7 = -606647891;
unsigned short var_8 = (unsigned short)42890;
long long int var_9 = 7277710976129565811LL;
unsigned char var_10 = (unsigned char)42;
int zero = 0;
_Bool var_11 = (_Bool)0;
int var_12 = -1888129987;
unsigned int var_13 = 4169935338U;
short var_14 = (short)-9130;
int var_15 = -555829196;
unsigned short arr_1 [13] ;
short arr_2 [13] ;
unsigned long long int arr_5 [13] ;
_Bool arr_17 [20] [20] ;
unsigned short arr_18 [20] ;
unsigned short arr_19 [20] ;
signed char arr_20 [20] [20] ;
short arr_15 [13] [13] [13] [13] [13] ;
unsigned short arr_16 [13] [13] [13] [13] [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (unsigned short)58627;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (short)-17478;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 11069684464110814950ULL : 4064949800166938010ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_17 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_18 [i_0] = (unsigned short)28613;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_19 [i_0] = (unsigned short)34227;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_20 [i_0] [i_1] = (signed char)-50;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? (short)-24055 : (short)-6840;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 13; ++i_6) 
                                arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_0 % 2 == 0) ? (unsigned short)55473 : (unsigned short)62332;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        hash(&seed, arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 13; ++i_6) 
                                hash(&seed, arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
}
void test(short var_0, unsigned short var_1, _Bool var_3, _Bool var_4, long long int var_5, short var_6, int var_7, unsigned short var_8, long long int var_9, unsigned char var_10, int zero, unsigned short arr_1 [13] , short arr_2 [13] , unsigned long long int arr_5 [13] , _Bool arr_17 [20] [20] , unsigned short arr_18 [20] , unsigned short arr_19 [20] , signed char arr_20 [20] [20] );

int main() {
    init();
    test(var_0, var_1, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_10, zero, arr_1 , arr_2 , arr_5 , arr_17 , arr_18 , arr_19 , arr_20 );
    checksum();
    printf("%llu\n", seed);
}
