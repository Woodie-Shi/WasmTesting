#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-25442;
_Bool var_1 = (_Bool)1;
long long int var_3 = 3976587908099951394LL;
unsigned short var_8 = (unsigned short)61013;
_Bool var_10 = (_Bool)0;
unsigned int var_12 = 880705510U;
int zero = 0;
unsigned short var_16 = (unsigned short)5537;
short var_17 = (short)-10810;
unsigned short var_18 = (unsigned short)12825;
unsigned char var_19 = (unsigned char)99;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test(short var_0, _Bool var_1, long long int var_3, unsigned short var_8, _Bool var_10, unsigned int var_12, int zero);

int main() {
    init();
    test(var_0, var_1, var_3, var_8, var_10, var_12, zero);
    checksum();
    printf("%llu\n", seed);
}
