#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -7234282465195100163LL;
short var_6 = (short)29202;
unsigned short var_7 = (unsigned short)268;
int var_8 = 2137363060;
short var_11 = (short)3267;
long long int var_12 = 4366910933039442026LL;
int var_14 = 835394178;
unsigned char var_16 = (unsigned char)62;
int zero = 0;
unsigned char var_18 = (unsigned char)172;
unsigned char var_19 = (unsigned char)143;
signed char var_20 = (signed char)-58;
unsigned int arr_6 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 2935728682U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
}
void test(long long int var_4, short var_6, unsigned short var_7, int var_8, short var_11, long long int var_12, int var_14, unsigned char var_16, int zero);

int main() {
    init();
    test(var_4, var_6, var_7, var_8, var_11, var_12, var_14, var_16, zero);
    checksum();
    printf("%llu\n", seed);
}
