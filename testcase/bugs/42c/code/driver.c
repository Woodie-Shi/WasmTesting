#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 594279050;
long long int var_2 = -2928614114023280492LL;
long long int var_6 = -4883950251496192577LL;
_Bool var_7 = (_Bool)0;
unsigned long long int var_10 = 2069671705443628686ULL;
int var_12 = -693495001;
unsigned short var_13 = (unsigned short)20308;
int zero = 0;
long long int var_16 = 8373600193928809618LL;
unsigned long long int var_17 = 16774190113353846160ULL;
unsigned long long int var_18 = 13886794599902030779ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test(int var_1, long long int var_2, long long int var_6, _Bool var_7, unsigned long long int var_10, int var_12, unsigned short var_13, int zero);

int main() {
    init();
    test(var_1, var_2, var_6, var_7, var_10, var_12, var_13, zero);
    checksum();
    printf("%llu\n", seed);
}
