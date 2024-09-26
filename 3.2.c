#include<stdio.h>
int main(void) {
    
    int number;

    printf("Scopri se il numero positivo o negativo: ");
    scanf("%d", &number);

    if (number > 0) {
        printf("il numero e` positivo");
    }

    else if (number == 0) {
        printf("il numero e` zero");
    }

    else {
        printf("numero e` negativo");

    }



    return 0;

}