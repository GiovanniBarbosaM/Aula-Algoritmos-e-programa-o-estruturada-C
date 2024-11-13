#include <stdio.h> // Inclui a biblioteca padrão para entrada e saída

int main() {
    int num = 10; // Declara e inicializa a variável 'num' com o valor 10

    // Verifica se o valor de 'num' é menor que 100
    if (num < 100) {
        printf("Menor que 100\n"); // Exibe "Menor que 100" se a condição for verdadeira
    }
    // Verifica se o valor de 'num' é menor que 1000
    else if (num < 1000) {
        printf("Menor que 1000\n"); // Exibe "Menor que 1000" se a condição for verdadeira
    }
    // Verifica se o valor de 'num' é menor que 10000
    else if (num < 10000) {
        printf("Menor que 10000\n"); // Exibe "Menor que 10000" se a condição for verdadeira
    }
    // Se nenhuma das condições anteriores for verdadeira, executa o bloco 'else'
    else {
        printf("Maior ou igual a 10000\n"); // Exibe "Maior ou igual a 10000"
    }

    return 0; // Indica que o programa terminou com sucesso
}
