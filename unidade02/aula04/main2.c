#include <stdio.h> // Inclui a biblioteca padrão para entrada e saída

int main() {
    int numero; // Declara a variável para armazenar o número

    printf("Insira um número positivo: ");
    scanf("%d", &numero); // Lê o número fornecido pelo usuário

    // Verifica se o número é menor ou igual a zero
    if (numero <= 0) {
        goto erro; // Vai para o rótulo 'erro' caso o número seja negativo ou zero
    }

    // Caso o número seja positivo
    printf("Número válido: %d\n", numero);
    return 0; // Finaliza o programa normalmente

erro: // Rótulo que será acessado caso o número seja inválido
    printf("Erro: Número inválido.\n"); // Mensagem de erro para números não positivos
    return 0; // Finaliza o programa
}
