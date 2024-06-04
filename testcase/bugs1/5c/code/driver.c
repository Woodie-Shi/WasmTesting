#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-20484;
unsigned int var_1 = 4156397339U;
int var_2 = -1892361551;
int var_5 = 2000458331;
_Bool var_6 = (_Bool)0;
short var_9 = (short)-16296;
int zero = 0;
unsigned int var_10 = 1532837499U;
unsigned long long int var_11 = 10355987850528790235ULL;
int var_12 = 1696197467;
unsigned long long int var_13 = 8294000070829052092ULL;
unsigned long long int var_14 = 4520646016140761212ULL;
long long int arr_0 [24] [24] ;
signed char arr_1 [24] ;
int arr_2 [24] [24] ;
int arr_4 [24] ;
_Bool arr_5 [24] [24] ;
int arr_6 [24] [24] ;
int arr_7 [24] ;
unsigned long long int arr_8 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = 7502450815788315061LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (signed char)66;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = 537445878;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = -1141765119;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_6 [i_0] [i_1] = 49355677;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = 1356255632;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = 12436560709004119908ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test(short var_0, unsigned int var_1, int var_2, int var_5, _Bool var_6, short var_9, int zero, long long int arr_0 [24] [24] , signed char arr_1 [24] , int arr_2 [24] [24] , int arr_4 [24] , _Bool arr_5 [24] [24] , int arr_6 [24] [24] );

int main() {
    init();
    test(var_0, var_1, var_2, var_5, var_6, var_9, zero, arr_0 , arr_1 , arr_2 , arr_4 , arr_5 , arr_6 );
    checksum();
    printf("%llu\n", seed);
}
