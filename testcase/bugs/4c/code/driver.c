#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)171;
long long int var_5 = 5143462290923076264LL;
unsigned short var_6 = (unsigned short)57801;
long long int var_8 = -710856732900884839LL;
unsigned short var_14 = (unsigned short)16217;
int zero = 0;
unsigned short var_17 = (unsigned short)2540;
unsigned short var_18 = (unsigned short)39823;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test(unsigned short var_2, long long int var_5, unsigned short var_6, long long int var_8, unsigned short var_14, int zero);

int main() {
    init();
    test(var_2, var_5, var_6, var_8, var_14, zero);
    checksum();
    printf("%llu\n", seed);
}
