#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2209703488U;
signed char var_18 = (signed char)63;
int zero = 0;
unsigned char var_20 = (unsigned char)222;
short var_21 = (short)-29208;
unsigned int arr_1 [18] ;
unsigned char arr_2 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 3765373737U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (unsigned char)252;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test(unsigned int var_1, signed char var_18, int zero, unsigned int arr_1 [18] );

int main() {
    init();
    test(var_1, var_18, zero, arr_1 );
    checksum();
    printf("%llu\n", seed);
}
