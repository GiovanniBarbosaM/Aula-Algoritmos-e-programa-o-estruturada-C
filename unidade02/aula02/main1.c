#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída para o uso das funções printf e scanf.

int main() {
    float metragem1 = 0, metragem2 = 0, resultado = 0; // Declara as variáveis: 'metragem1' e 'metragem2' para as dimensões do terreno e 'resultado' para a área calculada.
    int resp; // Declara a variável 'resp' para armazenar a resposta do usuário para continuar ou sair.

    do {
        printf("Calculo de metros quadrados\n\n"); // Exibe o título do programa.
        
        printf("Digite a 1a metragem do terreno: "); // Solicita a primeira dimensão do terreno.
        scanf("%f", &metragem1); // Lê o valor da primeira dimensão e armazena em 'metragem1'.
        
        printf("\nDigite a 2a metragem do terreno: "); // Solicita a segunda dimensão do terreno.
        scanf("%f", &metragem2); // Lê o valor da segunda dimensão e armazena em 'metragem2'.
        
        resultado = (metragem1 * metragem2); // Calcula a área do terreno multiplicando as duas dimensões.
        
        printf("\n\nTerreno tem = %.2f m2 \n", resultado); // Exibe o resultado da área do terreno em metros quadrados.
        
        printf("Digite 1 para continuar ou 2 para sair\n"); // Solicita ao usuário uma resposta para continuar ou encerrar o programa.
        scanf("%d", &resp); // Lê a resposta do usuário (1 para continuar, 2 para sair).
        
    } while (resp == 1); // Continua o loop enquanto 'resp' for igual a 1.

    return 0; // Finaliza o programa.
}
