#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)75;
unsigned short var_3 = (unsigned short)13392;
unsigned long long int var_5 = 13753951753893549950ULL;
unsigned char var_8 = (unsigned char)189;
unsigned long long int var_10 = 15339079722784489138ULL;
long long int var_11 = 1594425966075848289LL;
long long int var_13 = 5731719820982912137LL;
unsigned short var_14 = (unsigned short)1943;
unsigned long long int var_16 = 17782687831221106197ULL;
int zero = 0;
int var_20 = -1744515291;
unsigned short var_21 = (unsigned short)38272;
long long int var_22 = -1212591663290267818LL;
unsigned short var_23 = (unsigned short)22943;
int var_24 = 23705440;
signed char var_25 = (signed char)-80;
unsigned char var_26 = (unsigned char)163;
_Bool arr_2 [18] ;
unsigned char arr_4 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (unsigned char)54;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test(unsigned char var_2, unsigned short var_3, unsigned long long int var_5, unsigned char var_8, unsigned long long int var_10, long long int var_11, long long int var_13, unsigned short var_14, unsigned long long int var_16, int zero, _Bool arr_2 [18] , unsigned char arr_4 [15] );

int main() {
    init();
    test(var_2, var_3, var_5, var_8, var_10, var_11, var_13, var_14, var_16, zero, arr_2 , arr_4 );
    checksum();
    printf("%llu\n", seed);
}
