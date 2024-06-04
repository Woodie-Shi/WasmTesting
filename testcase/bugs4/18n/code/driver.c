#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)8;
unsigned short var_3 = (unsigned short)44780;
unsigned char var_8 = (unsigned char)44;
long long int var_10 = -8442010583750854623LL;
int zero = 0;
unsigned int var_12 = 167933125U;
int var_13 = 1872277642;
int var_14 = -454768815;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test(signed char var_0, unsigned short var_3, unsigned char var_8, long long int var_10, int zero);

int main() {
    init();
    test(var_0, var_3, var_8, var_10, zero);
    checksum();
    printf("%llu\n", seed);
}
