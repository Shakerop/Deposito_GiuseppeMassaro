#include <stdio.h>

int main(){
    int num;
    int somma = 0;


    while(num != 0){
        printf("Inserisci un numero? ");
        scanf(" %d", &num);
            if (num < 0){
                printf("Numero non valido \n");
            break;
            }
        somma = somma + num;
        printf("La somma totale è: %d\n", somma);
        }

printf("Programma terminato. \n");
return 0;

}