#include <stdio.h>  // Inclui a biblioteca de entrada e saída

int main() {
    int n1, n2;  // Declaração de duas variáveis inteiras

    // Solicita ao usuário o primeiro número e armazena o valor na variável n1
    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);

    // Solicita ao usuário o segundo número e armazena o valor na variável n2
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);

    // Compara se n1 é igual a n2 e imprime o resultado (1 para verdadeiro, 0 para falso)
    printf("\nn1 e n2 sao iguais? %d", n1 == n2);

    // Compara se n1 é maior que n2 e imprime o resultado (1 para verdadeiro, 0 para falso)
    printf("\nn1 e maior que n2? %d", n1 > n2);

    // Compara se n1 é menor ou igual a n2 e imprime o resultado (1 para verdadeiro, 0 para falso)
    printf("\nn1 e menor ou igual a n2? %d", n1 <= n2);

    // Retorna 0 para indicar que o programa foi executado com sucesso
    return 0;
}
