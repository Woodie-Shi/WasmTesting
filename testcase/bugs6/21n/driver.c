#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_8 = (signed char)28;
unsigned short var_9 = (unsigned short)26586;
signed char var_14 = (signed char)35;
int zero = 0;
unsigned short var_15 = (unsigned short)50716;
unsigned long long int var_16 = 492334432379971185ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test(signed char var_8, unsigned short var_9, signed char var_14, int zero);

int main() {
    init();
    test(var_8, var_9, var_14, zero);
    checksum();
    printf("%llu\n", seed);
}
