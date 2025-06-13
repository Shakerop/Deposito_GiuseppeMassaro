#include <stdio.h>

int main() {
    int num;
    printf("Per favore, inserisci un numero intero: \n");
    scanf("%d", &num);

    if (num == 0){
        printf("Il numero inserito è nullo \n");
    } else if(num > 0) {
        printf("Ottimo il numero è positivo.....");
        if (num >= 100){
            printf("Wowwwwwww! E' anche maggiore di 100! \n");
        }
    } else {
        printf("Il numero inserito è negativo \n");
    }
    return 0;
}