#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)10438;
unsigned short var_3 = (unsigned short)56620;
signed char var_4 = (signed char)-2;
long long int var_5 = 2128636737045917592LL;
unsigned short var_6 = (unsigned short)12281;
_Bool var_8 = (_Bool)0;
unsigned short var_10 = (unsigned short)11617;
int zero = 0;
short var_12 = (short)-12715;
unsigned short var_13 = (unsigned short)10398;
long long int var_14 = -67000123507674966LL;
unsigned int var_15 = 22349911U;
unsigned int arr_0 [21] [21] ;
_Bool arr_3 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = 878739120U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test(short var_1, unsigned short var_3, signed char var_4, long long int var_5, unsigned short var_6, _Bool var_8, unsigned short var_10, int zero, unsigned int arr_0 [21] [21] , _Bool arr_3 [21] );

int main() {
    init();
    test(var_1, var_3, var_4, var_5, var_6, var_8, var_10, zero, arr_0 , arr_3 );
    checksum();
    printf("%llu\n", seed);
}
