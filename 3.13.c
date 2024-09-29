#include<stdio.h>
int main(void) {

    int day1, month1, year1;
    int day2, month2, year2;

    printf("Inserire primo anno: ");
    scanf("%d", &year1);
    printf("Inserire primo mese: ");
    scanf("%d", &month1);
    printf("Inserire primo giorno: ");
    scanf("%d", &day1);

    printf("Inserire secondo anno: ");
    scanf("%d", &year2);
    printf("Inserire secondo mese: ");
    scanf("%d", &month2);
    printf("Inserire secondo giorno: ");
    scanf("%d", &day2);


    // conditions
    if (year1 > year2) {
        printf("la prima data e` piu recente");
    }
    else if (year1 <= year2) {
        if (month1 > month2) {
            printf("la prima data e` piu recente");
        }
        else if (month1 <= month2) {
            if (day1 > day2) {
                printf("la prima data e` piu recente");
            }
            else {
                printf("la seconda data e` piu recente");
            }
        }
     }
         
     

     return 0;


    }

    

