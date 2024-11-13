#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

int main() {
    int num; // Declara a variável 'num' para armazenar o número fornecido pelo usuário

    // Solicita ao usuário que insira um número
    printf("Digite um número: ");
    scanf("%d", &num); // Lê o número fornecido pelo usuário e armazena em 'num'

    // Verifica se o número é positivo
    if (num > 0) {
        // Se o número for maior que zero, exibe a mensagem de que é positivo
        printf("\n\nO número é positivo\n");
    } else {
        // Caso contrário, exibe a mensagem de que é negativo
        printf("O número é negativo\n");
    }

    return 0; // Indica que o programa terminou com sucesso
}
