#include<stdio.h>

int main(void) {

    printf("--ETA` PREZZO DEL BIGLIETTO-- \n");

    int age;

    printf("Inserira l`eta: ");
    scanf("%d", &age);

    if (age < 5) {
        printf("prezzo del biglietto e` gratuito!");
    }

    else if (age < 10) {
        if (age >= 5) {
            printf("prezzo del biglietto e` 1 euro");
        }
        else {
            printf("prezzo del biglietto e` gratuito!");
        }
    }

    else if (age <= 17) {
        if(age >= 11) {
            printf("prezzo del biglietto e` 1.5 euro!");
        }
    }

    else if (age <= 26) {
        if(age >= 18) {
            printf("prezzo del biglietto e` 2 euro!");
        }
    }

    else {
        printf("prezzo del biglietto e` 3 euro");
    }


    return 0;
}