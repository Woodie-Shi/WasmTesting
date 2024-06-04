#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)141;
_Bool var_9 = (_Bool)1;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned long long int var_12 = 148793314689452748ULL;
unsigned long long int var_13 = 807313960827763613ULL;
long long int var_14 = 7719391319780630277LL;
_Bool var_15 = (_Bool)1;
int arr_4 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = -387226284;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test(unsigned char var_6, _Bool var_9, _Bool var_11, int zero);

int main() {
    init();
    test(var_6, var_9, var_11, zero);
    checksum();
    printf("%llu\n", seed);
}
