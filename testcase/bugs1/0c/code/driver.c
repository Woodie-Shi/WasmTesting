#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)0;
long long int var_7 = -2038702953803225270LL;
int zero = 0;
long long int var_16 = 3659287461293503098LL;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test(_Bool var_5, long long int var_7, int zero);

int main() {
    init();
    test(var_5, var_7, zero);
    checksum();
    printf("%llu\n", seed);
}
