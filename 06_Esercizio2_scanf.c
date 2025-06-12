#include <stdio.h>

int main(){
char nome_town[20];
int valore_1;
int valore_2;
int valore_3;
int media;

printf("Ciao, digita il nome della tua città: ");
scanf("%s", &nome_town);

printf("Perfetto, ora digita tre numeri decimali: \n");
scanf("%d", &valore_1);
scanf("%d", &valore_2);
scanf("%d", &valore_3);

media = (valore_1 + valore_2 + valore_3)/3;

if (media <= 2){
    printf("La media è troppo bassa, inserisci tre nuovi numeri");
} else {
    printf("Ciao, il nome della tua città è %s e la media dei tre numeri è %d\n", nome_town, media);
    }

return 0;
}