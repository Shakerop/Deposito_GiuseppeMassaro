#include <stdio.h>

int main(){
    char risposta = 'n';

    while(risposta != 's'){
        printf("Vuoi uscire dal programma? (s/n): ");
        scanf(" %c", &risposta);
        if (risposta != 's'){
            printf("Programma ancora in esecuzione....\n");
        }
    }
printf("Programma terminato. \n");

}
