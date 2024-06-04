#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 2034152922U;
unsigned int var_11 = 439896570U;
int zero = 0;
signed char var_17 = (signed char)-108;
unsigned int var_18 = 260172794U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test(unsigned int var_6, unsigned int var_11, int zero);

int main() {
    init();
    test(var_6, var_11, zero);
    checksum();
    printf("%llu\n", seed);
}
