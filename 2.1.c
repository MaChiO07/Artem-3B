#include<stdio.h>
int main(void) {

    float a, b;
    printf("Calcolo della media\n");
    printf("inserire primo numero: ");
    scanf("%f", &a);
    printf("inserire secondo numero: ");
    scanf("%f", &b);
    
    float c = (a+b)/2;

    printf("Media e`: %f", c);
    return 0;


}