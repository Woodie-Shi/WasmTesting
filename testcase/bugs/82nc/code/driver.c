#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_10 = (unsigned short)25887;
long long int var_11 = -2260707718529504059LL;
int zero = 0;
_Bool var_12 = (_Bool)0;
short var_13 = (short)-1521;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test(unsigned short var_10, long long int var_11, int zero);

int main() {
    init();
    test(var_10, var_11, zero);
    checksum();
    printf("%llu\n", seed);
}
