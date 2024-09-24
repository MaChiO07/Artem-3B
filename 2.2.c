#include<stdio.h>
int main(void) {

    float b, h;
    printf("Calcolo della area del triangolo \ninserire valore di base: ");
    scanf("%f", &b);
    printf("inserire valore di altezza: ");
    scanf("%f", &h);

    int a = b*h;
    printf("Area del triangolo = %d", a);
    return 0;
}