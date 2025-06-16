#include <stdio.h>
#include <string.h>

int main() {
    char ruolo[15];
    int numero = 0;

    printf("Inserisci il tuo ruolo (studente, docente, ospite): ");
    scanf("%s", ruolo);

    printf("Inserisci un numero intero per 1 = Visualizza, 2 = Modifica, 3 = Esci ");
    scanf("%d", &numero);


    if (strcmp(ruolo, "studente") == 0 || numero == 1){
        printf("Accesso ai materiali didattici\n");
    } else if (strcmp(ruolo, "docente") == 0 || numero == 2){
        printf("Accesso alla gestione corsi\n");
    } else if (strcmp(ruolo, "ospite") == 0) {
        printf("Area informativa\n");
    } else {
        printf(" Opzione non dispnibile");
    }

    switch (numero) {
        case 1:
            printf("Hai scelto visualizza\n");
            break;
        case 2:
            printf("Hai scelto Modifica\n");
            break;
        case 3:
            printf("Hai scelto Esci\n");
            break;
        default:
            printf("Opzione di menù non valida!\n");
            break;
    }
    return 0;
}




