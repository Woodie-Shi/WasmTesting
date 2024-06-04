#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 15059005737150366784ULL;
unsigned short var_14 = (unsigned short)21954;
int zero = 0;
unsigned char var_19 = (unsigned char)33;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test(unsigned long long int var_3, unsigned short var_14, int zero);

int main() {
    init();
    test(var_3, var_14, zero);
    checksum();
    printf("%llu\n", seed);
}
