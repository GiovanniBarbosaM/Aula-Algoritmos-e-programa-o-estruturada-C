#include <stdio.h>

int main() {
    int x, y;
    
    // Exemplo de pós-incremento (x++)
    x = 10;
    y = x++;  // y recebe o valor de x antes do incremento
    printf("y = x++ : valor de y => %d\n", y);  // y = 10
    printf("y = x++ : valor de x => %d\n\n", x); // x = 11, pois foi incrementado após a atribuição

    // Exemplo de pós-decremento (x--)
    x = 10;
    y = x--;  // y recebe o valor de x antes do decremento
    printf("y = x-- : valor de y => %d\n", y);  // y = 10
    printf("y = x-- : valor de x => %d\n\n", x); // x = 9, pois foi decrementado após a atribuição

    // Exemplo de pré-incremento (++x)
    x = 10;
    y = ++x;  // x é incrementado antes de ser atribuído a y
    printf("y = ++x : valor de y => %d\n", y);  // y = 11
    printf("y = ++x : valor de x => %d\n\n", x); // x = 11

    // Exemplo de pré-decremento (--x)
    x = 10;
    y = --x;  // x é decrementado antes de ser atribuído a y
    printf("y = --x : valor de y => %d\n", y);  // y = 9
    printf("y = --x : valor de x => %d\n\n", x); // x = 9

    return 0;
}
