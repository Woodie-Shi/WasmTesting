#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8513291509223734125LL;
unsigned int var_2 = 929019118U;
unsigned short var_8 = (unsigned short)34934;
signed char var_10 = (signed char)-23;
unsigned int var_12 = 2969859455U;
unsigned long long int var_19 = 17796155635571971622ULL;
int zero = 0;
int var_20 = 719953356;
unsigned long long int var_21 = 451472371789964772ULL;
unsigned short arr_1 [16] [16] ;
int arr_2 [16] ;
long long int arr_3 [16] [16] ;
unsigned short arr_4 [16] ;
unsigned char arr_5 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)62686;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -868061297 : 315653275;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? 6464298549433805833LL : 1404525321438684224LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned short)6237 : (unsigned short)29512;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned char)48 : (unsigned char)2;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test(long long int var_0, unsigned int var_2, unsigned short var_8, signed char var_10, unsigned int var_12, unsigned long long int var_19, int zero, unsigned short arr_1 [16] [16] , int arr_2 [16] , long long int arr_3 [16] [16] );

int main() {
    init();
    test(var_0, var_2, var_8, var_10, var_12, var_19, zero, arr_1 , arr_2 , arr_3 );
    checksum();
    printf("%llu\n", seed);
}
