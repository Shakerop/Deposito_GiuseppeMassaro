#include <stdio.h>
int num_utente;
int var;
int tot_disp = 0;

int main(){
    printf("Quanti numeri vuoi inserire? ");
    scanf(" %d", &num_utente);

    for(int i = 0; i <= num_utente; i++) {
        printf("Inserisci il numero: ");
        scanf(" %d", &var);

        while(var < 10 || var > 100){
        printf("Inserisci di nuovo il numero: ");
        scanf(" %d", &var);
        }

        if (var % 2 != 0){
        tot_disp = tot_disp + 1;
        }
    }

    if (tot_disp > 0){
        printf("Il numero di interi dispari inseriti è: %d\n", tot_disp);
    }

}

