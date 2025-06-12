#include <stdio.h>

int main(){
    int Valore1;
    int Valore2;

printf("Ciao utente, per favore inserisci un primo numero intero \n");
scanf("%d", &Valore1);

printf("Ciao utente, per favore inserisci un secondo numero intero \n");
scanf("%d", &Valore2);

int somma = Valore1 + Valore2;
int differenza = Valore1 - Valore2;
int prodotto = Valore1 * Valore2;
int quoziente = Valore1 / Valore2;
int resto = Valore1 % Valore2;

if ((Valore1 > 0 && Valore2>0) && ((Valore1 % 2 == 0) || (Valore2 % 2 == 0))){
    printf("La somma è %d\n", somma);
    printf("La differenza è %d\n", differenza);
    printf("Il prodotto è %d\n", prodotto);
    printf("Il quoziente è %d\n", quoziente);
    printf("Il resto è %d\n", resto);
} else {
   printf("I due numeri inseriti non sono maggiori di zero oppure non sono pari");
}
    return 0;
}