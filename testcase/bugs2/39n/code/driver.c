#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-1233;
short var_8 = (short)-29958;
unsigned short var_9 = (unsigned short)8328;
unsigned char var_12 = (unsigned char)48;
unsigned int var_15 = 2925552097U;
int var_16 = -1051020428;
unsigned int var_17 = 2225843382U;
int zero = 0;
int var_18 = 1972210060;
unsigned short var_19 = (unsigned short)13120;
unsigned long long int var_20 = 3673510739361482989ULL;
short var_21 = (short)1664;
short var_22 = (short)29265;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test(short var_0, short var_8, unsigned short var_9, unsigned char var_12, unsigned int var_15, int var_16, unsigned int var_17, int zero);

int main() {
    init();
    test(var_0, var_8, var_9, var_12, var_15, var_16, var_17, zero);
    checksum();
    printf("%llu\n", seed);
}
