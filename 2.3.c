#include<stdio.h>
int main(void) {

    int h0, m0, s0;
    int h1, m1, s1;
    
    printf("Calcolo della diferenza delle ore\n");

    printf("inserire ore del primo tempo: ");
    scanf("%d", &h0);
    printf("inserire minuti del primo tempo: ");
    scanf("%d", &m0);
    printf("inserire secondi del primo tempo: ");
    scanf("%d", &s0);

    printf("inserire ore del secondo tempo: ");
    scanf("%d", &h1);
    printf("inserire minuti del secondo tempo: ");
    scanf("%d", &m1);
    printf("inserire secondi del secondo tempo: ");
    scanf("%d", &s1);

    

    int sec_tot_0 = h0*3600 + m0*60 + s0;
    int sec_tot_1 = h1*3600 + m1*60 + s1;

    int time_difference = sec_tot_0 - sec_tot_1;

    printf("differenza tra due ore in secondi risulta: %d secondi", time_difference);

    
    


    return 0;
}