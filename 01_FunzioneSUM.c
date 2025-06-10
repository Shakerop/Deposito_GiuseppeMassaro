// Online C compiler to run C program online
// Aggiungiamo anche un commento che non influenza le performance
#include <stdio.h>


int sum(int a, int b){
    return a + b;
}

int main(void){
    int x = 10, y = 20;
    int s = sum (x,y);
    printf("La somma di %d e %d è %d\n", x,y,s);
    return 0;
}
