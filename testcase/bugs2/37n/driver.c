#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 3170569159U;
int zero = 0;
signed char var_18 = (signed char)-59;
int var_19 = 13319462;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test(unsigned int var_7, int zero);

int main() {
    init();
    test(var_7, zero);
    checksum();
    printf("%llu\n", seed);
}
