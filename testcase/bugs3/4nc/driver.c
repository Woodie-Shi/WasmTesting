#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned short var_9 = (unsigned short)2298;
long long int var_14 = 4356194039137321632LL;
short var_15 = (short)-16133;
unsigned long long int var_16 = 9718595917166339287ULL;
int zero = 0;
unsigned long long int var_17 = 16375582225211970489ULL;
_Bool var_18 = (_Bool)1;
short var_19 = (short)10132;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)28248;
unsigned int arr_0 [25] ;
unsigned int arr_1 [25] ;
long long int arr_2 [25] ;
long long int arr_3 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 1237002321U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 1896184750U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = 4771035068825018844LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = 3675294646272386914LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test(_Bool var_3, unsigned short var_9, long long int var_14, short var_15, unsigned long long int var_16, int zero, unsigned int arr_0 [25] , unsigned int arr_1 [25] , long long int arr_2 [25] );

int main() {
    init();
    test(var_3, var_9, var_14, var_15, var_16, zero, arr_0 , arr_1 , arr_2 );
    checksum();
    printf("%llu\n", seed);
}
