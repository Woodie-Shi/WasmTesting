#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_14 = 6308224858022030395ULL;
int zero = 0;
long long int var_19 = -8989689568625012704LL;
short var_20 = (short)9118;
short var_21 = (short)18301;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test(unsigned long long int var_14, int zero);

int main() {
    init();
    test(var_14, zero);
    checksum();
    printf("%llu\n", seed);
}
