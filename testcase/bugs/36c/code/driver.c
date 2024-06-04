#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-28665;
signed char var_3 = (signed char)-126;
long long int var_4 = -2830154818950999516LL;
_Bool var_5 = (_Bool)1;
unsigned int var_6 = 2808804264U;
long long int var_7 = -2502041753356482193LL;
signed char var_8 = (signed char)-35;
unsigned int var_9 = 1495028870U;
short var_11 = (short)-27012;
unsigned int var_12 = 1071049592U;
int var_13 = -1134727113;
signed char var_16 = (signed char)56;
long long int var_17 = 8411293688785127340LL;
int zero = 0;
unsigned char var_18 = (unsigned char)119;
unsigned int var_19 = 1807740820U;
unsigned short var_20 = (unsigned short)6418;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test(short var_0, signed char var_3, long long int var_4, _Bool var_5, unsigned int var_6, long long int var_7, signed char var_8, unsigned int var_9, short var_11, unsigned int var_12, int var_13, signed char var_16, long long int var_17, int zero);

int main() {
    init();
    test(var_0, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_11, var_12, var_13, var_16, var_17, zero);
    checksum();
    printf("%llu\n", seed);
}
