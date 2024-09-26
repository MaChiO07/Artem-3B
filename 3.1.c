#include<stdio.h>
int main(void) {
    
    int number;
    scanf("%d", &number);
    if (number %2 == 0) {
        printf("%d e` un numero pari\n", number);
    }
    else {
        printf("%d e` un numero dispari\n", number);
    }

    return 0;

}