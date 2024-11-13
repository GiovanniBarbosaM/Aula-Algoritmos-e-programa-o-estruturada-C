#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída para o uso das funções printf e scanf.

int main() {
    int multiplicador = 0, resultado, num; // Declara as variáveis: 'multiplicador' para iterar de 0 a 10, 'resultado' para armazenar o cálculo, e 'num' para armazenar o número fornecido pelo usuário.

    printf("Tabuada de qual numero: "); // Solicita ao usuário o número para o qual a tabuada será calculada.
    scanf("%d", &num); // Lê o número fornecido pelo usuário e armazena em 'num'.

    while (multiplicador <= 10) { // Inicia um loop que vai de 0 até 10, criando a tabuada completa.
        resultado = num * multiplicador; // Calcula o valor da tabuada, multiplicando o número escolhido pelo 'multiplicador' atual.
        printf("%d x %d = %d\n", num, multiplicador, resultado); // Exibe o cálculo e o resultado no formato "num x multiplicador = resultado".

        multiplicador = multiplicador + 1; // Incrementa o 'multiplicador' em 1, avançando para o próximo número na tabuada.
    }

    return 0; // Finaliza o programa.
}
