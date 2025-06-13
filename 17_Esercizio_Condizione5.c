#include <stdio.h>

int main() {
    int num;
    printf("Per favore, inserisci un numero intero: \n");
    scanf("%d", &num);

    if ((num > 0) && (num % 2 == 0)){
        printf("Ottimo, il numero è positivo.....");
        if (num > 50){
            printf("Wow, Molto grande! \n");
        }
    } else if ((num > 100) || (num < 0)){
        if (num % 5 == 0){
            printf("Multiplo di 5! \n");
        }
    } else {
        printf("Il numero non soddisfa nessuna delle condizioni \n");
    }

    if (num != 0){
        printf(" Il numero è diverso da zero \n");
    }
    return 0;
}