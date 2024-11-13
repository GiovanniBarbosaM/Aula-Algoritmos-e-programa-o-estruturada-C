#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

int main() {
    int numero_secreto = 7; // Define o número que o usuário precisa adivinhar
    int tentativa; // Declara a variável para armazenar a tentativa do usuário

    printf("Adivinhe o número secreto!\n"); // Mensagem inicial

    while (1) { // Cria um loop infinito que só será interrompido se o usuário acertar
        printf("Insira um número: "); // Pede ao usuário para inserir um número
        scanf("%d", &tentativa); // Lê o número inserido pelo usuário e armazena em 'tentativa'

        if (tentativa == numero_secreto) { // Verifica se a tentativa é igual ao número secreto
            printf("Parabéns! Você adivinhou o número secreto.\n");
            break; // Interrompe o loop quando o número correto é adivinhado
        } else { // Caso a tentativa não seja correta
            printf("Tente novamente!\n"); // Exibe uma mensagem pedindo ao usuário para tentar de novo
        }
    }

    return 0; // Indica que o programa foi executado com sucesso
}
