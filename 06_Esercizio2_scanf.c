#include <stdio.h>

int main(){
char nome_town[20];
float valore_1;
float valore_2;
float valore_3;
float media;

printf("Ciao, digita il nome della tua città: ");
scanf("%s", nome_town);

printf("Perfetto, ora digita tre numeri decimali: \n");
scanf("%f", &valore_1);
scanf("%f", &valore_2);
scanf("%f", &valore_3);

media = (valore_1 + valore_2 + valore_3)/3;
if (media <= 2){
    printf("La media è troppo bassa, inserisci tre nuovi numeri");
} else {
    printf("Ciao, il nome della tua città è %s e la media dei tre numeri è %.2f\n", nome_town, media);
    }

return 0;
}