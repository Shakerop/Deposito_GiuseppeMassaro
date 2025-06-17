#include <stdio.h>

int main(){
    char risposta = 'n';
    int num;
    int somma = 0;

  do{
        printf("Inserisci un numero intero? ");
        scanf(" %d", &num);

        if (num > 0){
            somma = somma + 1;
            printf("\nIl numero di numeri pari inseriti è %d \n", somma);   
        }

        printf("Vuoi continuare l'esecuzione del programma? (s/n): ");
        scanf(" %c", &risposta);
            if (risposta != 'n' && risposta != 's'){
                printf("Valore non corretto, inserisci solo 's' o 'n': ");
                scanf(" %c", &risposta);
            }
  
  } while (risposta == 's');

printf("Programma terminato. \n");
return 0;

}