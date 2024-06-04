#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_9 = (signed char)-38;
unsigned long long int var_12 = 3969689002974320627ULL;
unsigned char var_13 = (unsigned char)119;
int var_14 = 654910614;
int zero = 0;
unsigned char var_17 = (unsigned char)45;
unsigned long long int var_18 = 2361146440651186207ULL;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test(signed char var_9, unsigned long long int var_12, unsigned char var_13, int var_14, int zero);

int main() {
    init();
    test(var_9, var_12, var_13, var_14, zero);
    checksum();
    printf("%llu\n", seed);
}
