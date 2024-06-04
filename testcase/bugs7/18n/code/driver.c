#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 1599985687U;
unsigned char var_7 = (unsigned char)112;
signed char var_10 = (signed char)-68;
int zero = 0;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)108;
unsigned long long int var_13 = 12540102600778333285ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test(unsigned int var_6, unsigned char var_7, signed char var_10, int zero);

int main() {
    init();
    test(var_6, var_7, var_10, zero);
    checksum();
    printf("%llu\n", seed);
}
