#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)57982;
unsigned long long int var_5 = 8917448307859683889ULL;
int zero = 0;
unsigned short var_15 = (unsigned short)14967;
signed char var_16 = (signed char)120;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test(unsigned short var_3, unsigned long long int var_5, int zero);

int main() {
    init();
    test(var_3, var_5, zero);
    checksum();
    printf("%llu\n", seed);
}
