#include <stdio.h>

int main() {
    int x = 5;
    int *ptr = &x;

    printf("x = %d\n", x);       // 5
    printf("*ptr = %d\n", *ptr); // 5

    x = 10;           
    printf("*ptr = %d\n", *ptr); 

    *ptr = 20;      
    printf("x = %d\n", x);      

    return 0;
}