// Vamos agora criar um programa que calcula todos os números na sequência de Collatz para um dado número de entrada.

#include <stdio.h>  // Biblioteca necessária para as funções de entrada e saída.

int main() {
    int num, i;  // 'num' armazena o número informado pelo usuário, 'i' conta as iterações.
    
    // Solicita ao usuário para digitar um número.
    printf("\n\nDigite um numero:\n");
    scanf("%d", &num);  // Lê o número digitado pelo usuário.

    i = 0;  // Inicializa o contador de iterações.

    // Enquanto o número não for 1, aplica a lógica da sequência de Collatz
    while (num > 1) {
        if (num % 2 == 0)  // Verifica se o número é par
            num /= 2;  // Se for par, divide o número por 2.
        else
            num = 3 * num + 1;  // Se for ímpar, multiplica por 3 e soma 1.
        
        printf("\n%d\n", num);  // Exibe o número após cada operação.
        i++;  // Incrementa o contador de iterações.
    }

    return 0;  // Finaliza o programa.
}
