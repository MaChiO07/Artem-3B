#include<stdio.h>
int main(void) {
    
    char name;
    int age;

    printf("Inserire nome: ");
    scanf("%c", &name);

    printf("inserire l`eta: ");
    scanf("%d", &age);

    if (age < 18) {
        printf("%c sei minorenne!", name);
    }
    else {
        printf("%c sei maggiorenne!", name);
    }


    return 0;

}