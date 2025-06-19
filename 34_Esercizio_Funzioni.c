#include <stdio.h>

int fx_quadrato(int n) {
    return n * n;
}

int fx_num_max(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

int main() {
    int num1, num2;

    printf("Inserisci il primo numero intero: ");
    scanf("%d", &num1);

    printf("Inserisci il secondo numero intero: ");
    scanf("%d", &num2);

    int quad1 = fx_quadrato(num1);
    int quad2 = fx_quadrato(num2);
    int num_max = fx_num_max(num1, num2);

    printf("Il quadrato di %d è %d, mentre il quadrato di %d è %d.\n", num1, quad1, num2, quad2);
    printf("Il maggiore tra %d e %d è %d.\n", num1, num2, num_max);

    return 0;
}
