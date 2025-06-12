#include <stdio.h>

int main(void){
 int value_A;
 int value_B;
 int somma;
 char name[20];
 
    printf("Ciao Utente, digita il tuo nome:  ");
    scanf("%19s", &name);
    
    printf("Ciao Utente, digita il primo valore: ");
    scanf("%d", &value_A);
    
    printf("Ciao Utente, digita il secondo valore: ");
    scanf("%d", &value_B);

    somma = value_A + value_B;
    printf("Ciao %s\n", name);
    printf("La somma dei due numeri è: %d\n", somma);
}