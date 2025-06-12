#include <stdio.h>

int main(){
    int num_1, num_2, num_3;
    int soglia;

    printf("Ciao, inserisci il primo numero intero \n");
    scanf("%d", &num_1);
    printf("Ciao, inserisci il secondo numero intero \n");
    scanf("%d", &num_2);
    printf("Ciao, inserisci il terzo numero intero \n");
    scanf("%d", &num_3);

    printf("Ciao, inserisci la soglia \n");
    scanf("%d", &soglia);

    int somma = num_1 + num_2;
    int prod = num_2 * num_3;

    if (somma > soglia){
        printf("La somma è stata calcolata correttamente, il valore è %d\n", somma);
    } else {
        printf("Le due cifre inserite sono troppo piccole, riprova!! \n");
    }

    if (prod < soglia){
        printf("Il prodotto è stato calcolato correttamente, il valore è %d\n", prod);
    } else {
        printf("Le due cifre inserite sono troppo piccole per l'operatore moltiplicazione, riprova!! \n");
    }  
    return 0;
}