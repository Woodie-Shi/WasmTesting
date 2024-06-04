#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16507954597545680127ULL;
unsigned int var_1 = 2075246518U;
long long int var_2 = -1325991080596804116LL;
long long int var_3 = -2049713951310237442LL;
unsigned long long int var_4 = 16827511959830430893ULL;
long long int var_5 = 6878361588418378900LL;
unsigned long long int var_6 = 7804328453485439991ULL;
unsigned long long int var_7 = 2623557680975861365ULL;
unsigned int var_8 = 970428099U;
long long int var_9 = 1103270913570358525LL;
unsigned long long int var_10 = 9159319731827560122ULL;
unsigned long long int var_11 = 11144290747609520938ULL;
unsigned long long int var_13 = 12205687112009042544ULL;
unsigned int var_14 = 3475482846U;
int zero = 0;
unsigned long long int var_17 = 808948305616649314ULL;
unsigned long long int var_18 = 6777003916010504734ULL;
unsigned int var_19 = 1572786726U;
unsigned int var_20 = 262529907U;
unsigned long long int var_21 = 13002499410052452608ULL;
long long int var_22 = -5176504512650996964LL;
unsigned long long int var_23 = 11392452879741452294ULL;
unsigned int var_24 = 2266352041U;
unsigned long long int var_25 = 14864330184560102287ULL;
unsigned int var_26 = 3310515097U;
unsigned long long int var_27 = 9266043216341366147ULL;
unsigned long long int var_28 = 13902707153560200327ULL;
long long int var_29 = -1496545916932093336LL;
unsigned int var_30 = 3980230759U;
long long int var_31 = 866104907749648027LL;
long long int var_32 = -2386309387789843138LL;
unsigned long long int var_33 = 16087653354820775730ULL;
unsigned int var_34 = 3945348571U;
long long int var_35 = 6161222080311824881LL;
unsigned long long int var_36 = 3138956442257774149ULL;
long long int var_37 = -4015508809620437554LL;
long long int var_38 = -5135817810980065575LL;
unsigned int var_39 = 3594840312U;
long long int var_40 = 3557199972548055497LL;
long long int var_41 = 5664213808887188345LL;
unsigned int var_42 = 2509723797U;
unsigned long long int var_43 = 301828947024748414ULL;
long long int var_44 = -528667583865086588LL;
unsigned long long int var_45 = 16743487726850474431ULL;
unsigned int var_46 = 886489765U;
unsigned int var_47 = 3544537576U;
long long int var_48 = -6252078650913765447LL;
unsigned long long int var_49 = 4942834364529549145ULL;
long long int var_50 = 2395637485173566324LL;
long long int var_51 = 8649624181542586794LL;
unsigned long long int var_52 = 15943335015674199913ULL;
unsigned long long int var_53 = 16782666627347338352ULL;
long long int var_54 = -3838377739676468128LL;
long long int var_55 = 6755804924041975508LL;
unsigned int var_56 = 2093679938U;
unsigned int var_57 = 3192026697U;
long long int var_58 = 8644105837300664853LL;
unsigned int var_59 = 212891641U;
unsigned long long int var_60 = 4489988901029437811ULL;
unsigned int var_61 = 525592459U;
unsigned int var_62 = 208285759U;
unsigned int var_63 = 1827631837U;
long long int var_64 = -2986422647515641576LL;
unsigned long long int var_65 = 15148667992271370355ULL;
long long int var_66 = 8136903588844315821LL;
unsigned long long int var_67 = 2680889789541959452ULL;
unsigned long long int var_68 = 4333255939038670753ULL;
long long int var_69 = -869006323715719903LL;
long long int var_70 = 5337697483927005164LL;
unsigned long long int var_71 = 8317228587841527182ULL;
unsigned int var_72 = 6637318U;
unsigned int var_73 = 2212520439U;
unsigned int var_74 = 3047355453U;
unsigned int arr_0 [23] ;
unsigned int arr_1 [23] [23] ;
unsigned long long int arr_2 [23] ;
long long int arr_3 [23] ;
unsigned long long int arr_4 [23] [23] [23] ;
unsigned int arr_5 [23] [23] [23] ;
long long int arr_6 [23] [23] [23] [23] ;
long long int arr_7 [23] [23] [23] [23] ;
unsigned long long int arr_8 [23] [23] [23] [23] ;
unsigned int arr_9 [23] [23] [23] [23] ;
unsigned long long int arr_10 [23] ;
unsigned long long int arr_11 [23] [23] [23] [23] ;
unsigned int arr_12 [23] [23] [23] [23] [23] ;
unsigned long long int arr_13 [23] [23] [23] [23] [23] [23] ;
unsigned int arr_16 [23] [23] [23] [23] [23] ;
long long int arr_17 [23] [23] [23] [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 1400052905U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? 24050271U : 1559797178U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 1185076826584632155ULL : 1988987883771759894ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 1685532932979120680LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 16600507865389904254ULL : 14788354847108187356ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 623458215U : 2020886246U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = -5852707205100162628LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 3756036562647370396LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 2434365419687330663ULL : 16544929752511524667ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 975836289U : 3167992111U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_10 [i_0] = 9841231321114170418ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 9494153908184650055ULL : 2703945741804286304ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = 4091800413U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 6927886130453640381ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? 2796262431U : 4226121099U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 3454988537831110163LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
    hash(&seed, var_43);
    hash(&seed, var_44);
    hash(&seed, var_45);
    hash(&seed, var_46);
    hash(&seed, var_47);
    hash(&seed, var_48);
    hash(&seed, var_49);
    hash(&seed, var_50);
    hash(&seed, var_51);
    hash(&seed, var_52);
    hash(&seed, var_53);
    hash(&seed, var_54);
    hash(&seed, var_55);
    hash(&seed, var_56);
    hash(&seed, var_57);
    hash(&seed, var_58);
    hash(&seed, var_59);
    hash(&seed, var_60);
    hash(&seed, var_61);
    hash(&seed, var_62);
    hash(&seed, var_63);
    hash(&seed, var_64);
    hash(&seed, var_65);
    hash(&seed, var_66);
    hash(&seed, var_67);
    hash(&seed, var_68);
    hash(&seed, var_69);
    hash(&seed, var_70);
    hash(&seed, var_71);
    hash(&seed, var_72);
    hash(&seed, var_73);
    hash(&seed, var_74);
}
void test(unsigned long long int var_0, unsigned int var_1, long long int var_2, long long int var_3, unsigned long long int var_4, long long int var_5, unsigned long long int var_6, unsigned long long int var_7, unsigned int var_8, long long int var_9, unsigned long long int var_10, unsigned long long int var_11, unsigned long long int var_13, unsigned int var_14, int zero, unsigned int arr_0 [23] , unsigned int arr_1 [23] [23] , unsigned long long int arr_2 [23] , long long int arr_3 [23] , unsigned long long int arr_4 [23] [23] [23] , unsigned int arr_5 [23] [23] [23] , long long int arr_6 [23] [23] [23] [23] , long long int arr_7 [23] [23] [23] [23] , unsigned long long int arr_8 [23] [23] [23] [23] , unsigned int arr_9 [23] [23] [23] [23] , unsigned long long int arr_10 [23] , unsigned long long int arr_11 [23] [23] [23] [23] , unsigned int arr_12 [23] [23] [23] [23] [23] , unsigned long long int arr_13 [23] [23] [23] [23] [23] [23] , unsigned int arr_16 [23] [23] [23] [23] [23] , long long int arr_17 [23] [23] [23] [23] [23] [23] );

int main() {
    init();
    test(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_10, var_11, var_13, var_14, zero, arr_0 , arr_1 , arr_2 , arr_3 , arr_4 , arr_5 , arr_6 , arr_7 , arr_8 , arr_9 , arr_10 , arr_11 , arr_12 , arr_13 , arr_16 , arr_17 );
    checksum();
    printf("%llu\n", seed);
}
