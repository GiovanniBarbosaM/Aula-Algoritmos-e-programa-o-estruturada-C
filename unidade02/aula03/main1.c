//Este código em C imprime a tabuada de 1 a 5, onde para cada número de 1 a 5, é calculado e impresso o produto desse número por outros números de 1 a 10.

#include <stdio.h>

int main() {
    int multi, num;

    // Laço externo para os números de 1 a 5
    for (num = 1; num <= 5; num++) {
        // Laço interno para a tabuada de cada número
        for (multi = 1; multi <= 10; multi++) {
            // Calculando e imprimindo o produto
            printf("%d ", num * multi);
        }
        // Pulando para a próxima linha após a tabuada de cada número
        printf("\n");
    }

    return 0;
}
