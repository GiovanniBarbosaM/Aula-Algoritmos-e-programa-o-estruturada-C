#include <stdio.h>

int main() {
    // Laço 'for' inicializando 'x' em 10 e 'y' em 0.
    // A condição de continuidade é que 'x' seja maior ou igual a 0 E 'y' seja menor ou igual a 10.
    // No final de cada iteração, 'x' será decrementado e 'y' será incrementado.
    for (int x = 10, y = 0; x >= 0 && y <= 10; x--, y++) {
        
        // Impressão do valor de 'x' e 'y' a cada iteração
        printf("x = %d, y = %d\n", x, y);
    }

    // Retorno 0 para indicar que o programa foi executado com sucesso
    return 0;
}
