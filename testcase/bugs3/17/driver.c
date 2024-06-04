#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 5979504425798020398LL;
int var_7 = 2071560550;
unsigned long long int var_9 = 2773775966714184206ULL;
unsigned short var_11 = (unsigned short)18562;
long long int var_14 = 6432163494786090430LL;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 15947584495955617013ULL;
short var_19 = (short)-28315;
unsigned short var_20 = (unsigned short)32808;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test(long long int var_3, int var_7, unsigned long long int var_9, unsigned short var_11, long long int var_14, int zero);

int main() {
    init();
    test(var_3, var_7, var_9, var_11, var_14, zero);
    checksum();
    printf("%llu\n", seed);
}
