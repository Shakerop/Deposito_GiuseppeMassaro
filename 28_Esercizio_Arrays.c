#include <stdio.h>
#include <string.h>

int num = 0;
int somma = 0;

int main(void) {


    printf("Quanti numeri desideri inserire? \n");
    scanf("%d", &num);
    
    int v[num];

    for (int i = 0; i < num; i++) {
        printf("Inserisci i valori desiderati:\n");
        scanf("%d", &v[i]);
    }

    for (int i = 0; i < num; i++) {
        somma = somma + v[i];
    }

    printf("La somma totale è: %d\n", somma);
    
    return 0;
}