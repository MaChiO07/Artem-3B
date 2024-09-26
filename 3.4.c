#include<stdio.h>
int main(void) {
    
    char name, sex;

    printf("dati in input il nome e il sesso");
    scanf("%c", &name);
    getchar();
    printf("sesso (M o F): ");
    scanf("%c", &sex);

    if (sex == 'M') {
        printf("Benvenuto signor %c", name);
    }

    else {
        printf("Benvenuta signora %c", name);
    }


    return 0;

}