#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
int zero = 0;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)-17;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test(_Bool var_1, int zero);

int main() {
    init();
    test(var_1, zero);
    checksum();
    printf("%llu\n", seed);
}
