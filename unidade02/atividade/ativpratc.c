//Nesta atividade, deverá ser desenvolvido um programa em C que utiliza a estrutura de repetição  “while” para executar uma tarefa até que uma condição de parada seja satisfeita. A atividade foca  em como controlar loops baseados em condições de início, garantindo a compreensão de como inicializar, executar e encerrar laços de repetição corretamente.

#include <stdio.h>

int main() {
    int numero, soma = 0;  // Declaramos as variáveis: 'numero' para armazenar o número inserido pelo usuário e 'soma' para acumular o total dos números.

    // Inicia o loop while para solicitar números até o usuário inserir 0
    while (1) {  // O loop será infinito até encontrarmos o número 0, que irá quebrar o loop
        printf("Digite um número (digite 0 para encerrar): ");  // Mensagem solicitando a entrada de um número
        scanf("%d", &numero);  // Lê o número inserido pelo usuário

        // Se o número inserido for 0, encerra o loop
        if (numero == 0) {  // Se o número for 0, a condição de parada é atingida
            break;  // Interrompe o loop
        }

        // Soma o número inserido ao total
        soma += numero;  // Adiciona o número inserido à variável soma
    }

    // Exibe o resultado final da soma
    printf("A soma total dos números inseridos é: %d\n", soma);  // Exibe a soma acumulada até o momento em que o loop foi interrompido

    return 0;  // O programa termina e retorna 0 indicando que a execução foi bem-sucedida
}
