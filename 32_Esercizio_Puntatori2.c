#include <stdio.h>



int main() {

    int num_1;
    int num_2;
    int *ptr_1 = &num_2;
    int *ptr_2 = &num_1;

    printf("Inserisci il primo numero intero! \n");
    scanf("%d", &num_1);
    printf("Inserisci il secondo numero intero! \n");
    scanf("%d", &num_2); 
   
    printf("Il primo numero è: %d, mentre il secondo numero è %d \n \n", num_1, num_2);
    printf("Con lo scambio, il primo numero è: %d, mentre il secondo numero è %d\n \n", *ptr_1, *ptr_2);

    int somma = *ptr_1 + *ptr_2;
    printf("La somma è: %d\n \n", somma);


    if (*ptr_1 > *ptr_2){
        printf("Il primo puntatore ha il valore più grande\n");
    } else if (*ptr_2 > *ptr_1) {
        printf("Il secondo puntatore ha il valore più grande\n");
    } else {
        printf("I due valori sono uguali\n");
    }

    return 0;
}