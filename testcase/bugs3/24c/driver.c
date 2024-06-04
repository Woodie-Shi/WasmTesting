#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)121;
long long int var_8 = 7798282151903731728LL;
int zero = 0;
unsigned char var_15 = (unsigned char)33;
unsigned char var_16 = (unsigned char)215;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test(signed char var_2, long long int var_8, int zero);

int main() {
    init();
    test(var_2, var_8, zero);
    checksum();
    printf("%llu\n", seed);
}
