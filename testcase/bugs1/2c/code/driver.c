#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)47636;
unsigned int var_6 = 3198289939U;
unsigned short var_13 = (unsigned short)53940;
unsigned short var_15 = (unsigned short)60206;
int zero = 0;
signed char var_16 = (signed char)-105;
signed char var_17 = (signed char)-98;
signed char var_18 = (signed char)-122;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test(unsigned short var_0, unsigned int var_6, unsigned short var_13, unsigned short var_15, int zero);

int main() {
    init();
    test(var_0, var_6, var_13, var_15, zero);
    checksum();
    printf("%llu\n", seed);
}
