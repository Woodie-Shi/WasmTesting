#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7112749993813388029ULL;
long long int var_1 = -8311102964331838516LL;
long long int var_2 = -8167003918765558125LL;
long long int var_3 = 7611074320895040116LL;
unsigned short var_4 = (unsigned short)64872;
unsigned long long int var_5 = 7511089687895127897ULL;
unsigned short var_6 = (unsigned short)48658;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)1;
int zero = 0;
long long int var_10 = -358249732877081866LL;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)40684;
unsigned short var_13 = (unsigned short)49321;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test(unsigned long long int var_0, long long int var_1, long long int var_2, long long int var_3, unsigned short var_4, unsigned long long int var_5, unsigned short var_6, _Bool var_7, _Bool var_8, int zero);

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, zero);
    checksum();
    printf("%llu\n", seed);
}
