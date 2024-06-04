#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 316910556824179846LL;
int var_1 = 53195214;
long long int var_2 = -5058512447757160512LL;
unsigned char var_4 = (unsigned char)97;
short var_5 = (short)-1246;
unsigned char var_6 = (unsigned char)138;
int var_7 = -1295284348;
signed char var_8 = (signed char)-10;
unsigned int var_9 = 1458362665U;
unsigned int var_10 = 1319270419U;
int var_11 = -622346130;
int zero = 0;
unsigned int var_12 = 1392150354U;
short var_13 = (short)1082;
unsigned char var_14 = (unsigned char)83;
long long int var_15 = -2426804150280552956LL;
unsigned char var_16 = (unsigned char)181;
unsigned char var_17 = (unsigned char)17;
unsigned long long int var_18 = 5102814230188243144ULL;
int var_19 = 1167869628;
long long int var_20 = 5051783205896716790LL;
_Bool var_21 = (_Bool)1;
short var_22 = (short)13663;
int var_23 = 841398023;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test(long long int var_0, int var_1, long long int var_2, unsigned char var_4, short var_5, unsigned char var_6, int var_7, signed char var_8, unsigned int var_9, unsigned int var_10, int var_11, int zero);

int main() {
    init();
    test(var_0, var_1, var_2, var_4, var_5, var_6, var_7, var_8, var_9, var_10, var_11, zero);
    checksum();
    printf("%llu\n", seed);
}
