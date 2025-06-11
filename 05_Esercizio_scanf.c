#include <stdio.h>

int main (void){
 int value_A;
 int value_B;
 int somma;
 char name[20];
 
    printf("Ciao Utente, digita il tuo nome:  ");
    scanf("%19s", &name);
    
//Si potrebbe anche effettuare una verifica sul valore inserito dall'utente.
//if (scanf("%19s", &name) != 1) {
//     printf("Input non valido per il nome.\n");
//     return 1;
// }
    
    printf("Ciao Utente, digita il primo valore: ");
    scanf("%d", &value_A);
  
// if (scanf("%d", &value_A) != 1) {
//      printf("Input non valido per il primo valore.\n");
//        return 1;
//  }
    
    printf("Ciao Utente, digita il secondo valore: ");
    scanf("%d", &value_B);
    
//  if (scanf("%d", &value_B) != 1) {
//      printf("Input non valido per il secondo valore.\n");
//    return 1;
//}

    somma = value_A + value_B;
    printf("Ciao %s\n", name);
    printf("La somma dei due numeri è: %d\n", somma);
}
