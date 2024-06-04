#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned short var_2 = (unsigned short)31591;
int var_5 = 83150928;
unsigned short var_8 = (unsigned short)31603;
signed char var_9 = (signed char)96;
signed char var_10 = (signed char)100;
int zero = 0;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)36;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test(_Bool var_1, unsigned short var_2, int var_5, unsigned short var_8, signed char var_9, signed char var_10, int zero);

int main() {
    init();
    test(var_1, var_2, var_5, var_8, var_9, var_10, zero);
    checksum();
    printf("%llu\n", seed);
}
