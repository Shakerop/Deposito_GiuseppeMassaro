#include <stdio.h>
#include <string.h>

int main(void) {
    int num = 0;
    int v[50];
    int num_2 = 0;
    int tot = 0;

    printf("Quanti numeri desideri inserire? \n");
    scanf("%d", &num);
    
    if (num < 1 || num > 50) {
        printf("Numero non valido. Inserire un valore tra 1 e 50.\n");
        return 1;
    }

    for (int i = 0; i < num; i++) {
        printf("Inserisci i valori desiderati:\n");
        scanf("%d", &v[i]);
    }
    
    printf("Inserisci il valore da cercare: ");
    scanf("%d", &num_2);

    for (int i = 0; i < num; i++) {
        if (v[i] == num_2) {
            tot++;
        }
    }

    printf("Il numero %d appare %d volta/e nell'array.\n", num_2, tot);
    
    return 0;
}

