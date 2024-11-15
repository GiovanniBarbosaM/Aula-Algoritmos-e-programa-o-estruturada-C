// Primeiramente, vamos aprender a manipular os índices de uma matriz dentro de laços for aninhados. Para isso, considere o seguinte exemplo: ler uma matriz quadrada 3x3 e retornar a soma dos elementos de sua diagonal principal e diagonal secundária. O Quadro 3 apresenta o algoritmo que resolve este problema.

#include <stdio.h>

int main() {
    int matriz[3][3]; // Declara uma matriz 3x3 de inteiros
    int i, j, sDiagPrinc = 0, sDiagSec = 0; // Variáveis para índices e somas das diagonais

    // Leitura da matriz
    printf("Digite os elementos da matriz 3x3:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i+1, j+1); // Solicita cada elemento individualmente
            scanf("%d", &matriz[i][j]); // Lê e armazena o elemento na posição correspondente
        }
    }

    // Cálculo das somas das diagonais principal e secundária
    for (i = 0; i < 3; i++) {
        sDiagPrinc += matriz[i][i]; // Soma os elementos da diagonal principal (posição [i][i])
        sDiagSec += matriz[i][2 - i]; // Soma os elementos da diagonal secundária (posição [i][2 - i])
    }

    // Exibição dos resultados
    printf("Soma dos elementos da diagonal principal: %d\n", sDiagPrinc);
    printf("Soma dos elementos da diagonal secundaria: %d\n", sDiagSec);

    return 0; // Indica que o programa terminou com sucesso
}
