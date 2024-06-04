#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)70;
unsigned char var_6 = (unsigned char)203;
signed char var_8 = (signed char)-108;
long long int var_10 = 8272855149217148444LL;
int var_12 = 1131684276;
int zero = 0;
signed char var_13 = (signed char)-22;
signed char var_14 = (signed char)58;
int var_15 = -334501158;
long long int var_16 = -2620663698462628841LL;
int var_17 = 1503405654;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test(unsigned char var_2, unsigned char var_6, signed char var_8, long long int var_10, int var_12, int zero);

int main() {
    init();
    test(var_2, var_6, var_8, var_10, var_12, zero);
    checksum();
    printf("%llu\n", seed);
}
