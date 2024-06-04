#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_11 = (unsigned short)20708;
_Bool var_12 = (_Bool)1;
int zero = 0;
int var_14 = -330813811;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)239;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test(unsigned short var_11, _Bool var_12, int zero);

int main() {
    init();
    test(var_11, var_12, zero);
    checksum();
    printf("%llu\n", seed);
}
