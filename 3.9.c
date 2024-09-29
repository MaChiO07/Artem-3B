#include<stdio.h>
int main (void) {

    int urgenza;
    float weight;
    int distance;


    printf("--Spese di Spedizione-- \n");

    printf("Inserire il peso dell`articolo (in kg): ");
    scanf("%f", &weight);
    printf("inserire la distanza (in km): ");
    scanf("%d", &distance);
    printf("Inserire livello di urgenza(0 non urgente, 1 urgente): ");
    scanf("%d", &urgenza);

    int price;


    // condizioni di urgenza 0
    if (urgenza == 0) {

        if (distance <= 100) {
            price = 1*weight;
        } 
        else if (distance >= 300) {
            price = 3*weight;
        } 
        else {
            price = 2*weight;

        }
    }


    // condizioni di urgenza 1
    else if (urgenza == 1) {

         if (distance <= 100) {
            price = 2.5*weight;
        } 
        else if (distance >= 300) {
            price = 3.5*weight;
        } 
        else {
            price = 4*weight;

        }
    }

    else {
        printf("dato di urgenza inserito non corrisponde 0 o 1");
    }



    printf("La spedizione costera` %d euro", price);

    return 0;

}