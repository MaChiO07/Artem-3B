#include<stdio.h>
int main(void) {
    
    char name, sex;

    printf("--dati in input il nome (solo la prima lettera) e il sesso(M o F)-- \n");
    printf("inserire nome: ");
    scanf("%c", &name);
    getchar();
    printf("inserire sesso (M o F): ");
    scanf("%c", &sex);

    if (sex == 'M') {
        printf("Benvenuto signor %c", name);
    }

    else if (sex == 'F') {
        printf("Benvenuta signora %c", name);
    }

    else {
        printf("Benvenuto utente %c", name);
    }


    return 0;

}