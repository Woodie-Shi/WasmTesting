#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -5326848320076167505LL;
long long int var_5 = 8242143624252027599LL;
unsigned int var_6 = 664045793U;
signed char var_7 = (signed char)-21;
short var_8 = (short)7158;
int var_9 = -591819131;
unsigned int var_10 = 3798182619U;
unsigned short var_11 = (unsigned short)52973;
unsigned long long int var_13 = 16621117779499794433ULL;
unsigned long long int var_14 = 8106690657839872613ULL;
int zero = 0;
long long int var_15 = -7183968743277957166LL;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 7473098351439786449ULL;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 292517549178701667ULL;
unsigned int var_20 = 1344059244U;
unsigned long long int var_21 = 2608518500034052151ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test(long long int var_2, long long int var_5, unsigned int var_6, signed char var_7, short var_8, int var_9, unsigned int var_10, unsigned short var_11, unsigned long long int var_13, unsigned long long int var_14, int zero);

int main() {
    init();
    test(var_2, var_5, var_6, var_7, var_8, var_9, var_10, var_11, var_13, var_14, zero);
    checksum();
    printf("%llu\n", seed);
}
