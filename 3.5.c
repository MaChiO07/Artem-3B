#include<stdio.h>
int main (void) {

    printf("--Calcolo dell`importo totale-- \n");

    int  product_quantity;
    int price_for_1;

    printf("inserire la quantita` dei prodotti aquistati: ");
    scanf("%d", &product_quantity);

    printf("inserire il prezzo per singolo prodotto: ");
    scanf("%d", &price_for_1);

    int total_price = product_quantity * price_for_1;
    int total_price_discount;

    // conditions 
    if (total_price >= 50) {
        printf("Gentile cliente lei ha ricevuto 20%% del sconto \n");
        total_price_discount = total_price*0.80;
    }

    else if (total_price < 10) {
        printf("Gentile cliente lei non ha ricevuto nessun sconto \n");
         total_price_discount = total_price;
    }

    else {
         printf("Gentile cliente lei ha ricevuto 10%% del sconto \n");
         total_price_discount = total_price*0.90;
    }

    // stampo la ricevuta

    printf("--Ricevuta-- \n");
    printf("importo totale: %d euro \n", total_price);
    printf("importo scontato: %d euro \n", total_price_discount);
    printf("Da pagare: %d euro \n", total_price_discount);
    printf("Grazie per il conquisto! \n");


    return 0;

}