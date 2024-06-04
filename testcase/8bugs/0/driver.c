#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)5818;
_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 4483536220837738315ULL;
unsigned char var_6 = (unsigned char)200;
unsigned char var_7 = (unsigned char)252;
int var_8 = 1125402488;
unsigned short var_9 = (unsigned short)11785;
unsigned int var_10 = 2868163509U;
int var_11 = -2101729848;
unsigned int var_12 = 3755039579U;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)38070;
int zero = 0;
_Bool var_15 = (_Bool)1;
short var_16 = (short)-2479;
long long int var_17 = 6216072398021514733LL;
unsigned short var_18 = (unsigned short)18191;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 180715761U;
unsigned long long int var_21 = 12446234805674007906ULL;
unsigned short var_22 = (unsigned short)30633;
long long int var_23 = 6661915374143536073LL;
unsigned int arr_0 [16] ;
unsigned int arr_1 [16] ;
unsigned short arr_2 [16] ;
short arr_3 [16] ;
unsigned int arr_4 [16] ;
_Bool arr_5 [16] ;
long long int arr_11 [16] [16] [16] [16] ;
long long int arr_13 [16] ;
unsigned long long int arr_14 [16] [16] [16] [16] [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 953072312U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 3281494298U : 2152146586U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (unsigned short)65187;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (short)-13467;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 2436741364U : 2956709457U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 4028104872221636128LL : -7801056857896686181LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? 218765585254403285LL : 5295885136031986800LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 16; ++i_6) 
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_6 % 2 == 0) ? 9330917467103936454ULL : 13946813546345546874ULL;
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 16; ++i_6) 
                                hash(&seed, arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
}
void test(unsigned short var_0, _Bool var_2, _Bool var_3, unsigned long long int var_4, unsigned char var_6, unsigned char var_7, int var_8, unsigned short var_9, unsigned int var_10, int var_11, unsigned int var_12, _Bool var_13, unsigned short var_14, int zero, unsigned int arr_0 [16] , unsigned int arr_1 [16] , unsigned short arr_2 [16] , short arr_3 [16] , unsigned int arr_4 [16] , _Bool arr_5 [16] , long long int arr_11 [16] [16] [16] [16] );

int main() {
    init();
    test(var_0, var_2, var_3, var_4, var_6, var_7, var_8, var_9, var_10, var_11, var_12, var_13, var_14, zero, arr_0 , arr_1 , arr_2 , arr_3 , arr_4 , arr_5 , arr_11 );
    checksum();
    printf("%llu\n", seed);
}
