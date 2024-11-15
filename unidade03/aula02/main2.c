// Outro exemplo clássico é relacionado à multiplicação de matrizes. Programa em C que lê duas matrizes e suas respectivas dimensões, veri ca se a multiplicação entre elas é possível e, se for o caso, calcula e exibe o produto das matrizes.

#include <stdio.h>

int main() {
    int m, n, p, q, i, j, k;
    int soma = 0;

    // Entrada das dimensões da primeira matriz
    printf("Digite as dimensões da primeira matriz (m x n): ");
    scanf("%d %d", &m, &n);

    // Entrada das dimensões da segunda matriz
    printf("Digite as dimensões da segunda matriz (p x q): ");
    scanf("%d %d", &p, &q);

    // Verificação se a multiplicação é possível
    if (n != p) {
        printf("A multiplicação entre as matrizes não é possível.\n");
        return 0; // Interrompe o programa se a condição não for atendida
    }

    // Declaração das matrizes e do resultado
    int matriz1[m][n], matriz2[p][q], resultado[m][q];

    // Entrada dos elementos da primeira matriz
    printf("Digite os elementos da primeira matriz:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("Elemento [%d][%d]: ", i+1, j+1);
            scanf("%d", &matriz1[i][j]);
        }
    }

    // Entrada dos elementos da segunda matriz
    printf("Digite os elementos da segunda matriz:\n");
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            printf("Elemento [%d][%d]: ", i+1, j+1);
            scanf("%d", &matriz2[i][j]);
        }
    }

    // Cálculo do produto das matrizes
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            soma = 0; // Reinicia a soma para cada elemento do resultado
            for (k = 0; k < n; k++) {
                soma += matriz1[i][k] * matriz2[k][j]; // Multiplica e acumula os valores
            }
            resultado[i][j] = soma; // Armazena o valor calculado no resultado
        }
    }

    // Exibição do resultado da multiplicação das matrizes
    printf("O produto das matrizes é:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            printf("%d\t", resultado[i][j]);
        }
        printf("\n");
    }

    return 0; // Indica que o programa terminou com sucesso
}
