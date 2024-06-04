#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)51863;
unsigned char var_1 = (unsigned char)129;
_Bool var_2 = (_Bool)0;
unsigned long long int var_3 = 3946991215206395538ULL;
int var_4 = 1741451997;
unsigned int var_6 = 470909386U;
signed char var_7 = (signed char)-26;
long long int var_8 = -5221335970931391430LL;
signed char var_9 = (signed char)-88;
int var_10 = 1851022268;
int zero = 0;
unsigned short var_11 = (unsigned short)46751;
unsigned char var_12 = (unsigned char)218;
unsigned int var_13 = 3083014503U;
unsigned short var_14 = (unsigned short)51063;
_Bool arr_0 [21] ;
unsigned short arr_2 [21] [21] ;
_Bool arr_4 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)21142;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test(unsigned short var_0, unsigned char var_1, _Bool var_2, unsigned long long int var_3, int var_4, unsigned int var_6, signed char var_7, long long int var_8, signed char var_9, int var_10, int zero, _Bool arr_0 [21] , unsigned short arr_2 [21] [21] );

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_4, var_6, var_7, var_8, var_9, var_10, zero, arr_0 , arr_2 );
    checksum();
    printf("%llu\n", seed);
}
