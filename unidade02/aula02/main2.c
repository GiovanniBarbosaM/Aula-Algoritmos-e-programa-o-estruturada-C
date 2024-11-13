// No exemplo, um programa é desenvolvido para repetir a entrada de dados até que uma condição de término especí ca seja alcançada, acumulando os valores inseridos.

#include <stdlib.h>  // Inclui a biblioteca padrão de funções, como 'printf' e 'scanf'.

int main() {
    float soma = 0, valor;  // 'soma' armazena o saldo atual, 'valor' armazena o valor das operações.
    int opcao;  // 'opcao' armazena a escolha do usuário no menu.

    // Loop do menu de opções
    do {
        // Exibe o menu de operações para o usuário
        printf("\n Digite uma Operação");
        printf("\n 1. Deposito");
        printf("\n 2. Saque");
        printf("\n 3. Saldo");
        printf("\n 4. Sair");
        printf("\n Qual opcao? ");
        scanf("%d", &opcao);  // Lê a opção escolhida pelo usuário.

        // Realiza a ação correspondente à opção escolhida
        switch(opcao) {
            case 1:  // Depósito
                printf("\n Valor do depósito? ");
                scanf("%f", &valor);  // Lê o valor do depósito.
                soma = soma + valor;  // Adiciona o valor ao saldo.
                break;
            
            case 2:  // Saque
                printf("\n Valor do saque? ");
                scanf("%f", &valor);  // Lê o valor do saque.
                soma = soma - valor;  // Subtrai o valor do saldo.
                break;
            
            case 3:  // Consulta de saldo
                printf("\n Saldo atual = R$ %.2f \n", soma);  // Exibe o saldo atual.
                break;
            
            default:  // Caso o usuário insira uma opção inválida
                if(opcao != 4) {
                    printf("\n Opção Inválida! \n");  // Informa que a opção é inválida.
                }
        }
    } while(opcao != 4);  // O loop continua até o usuário escolher a opção 4 para sair.

    printf("Fim das operações. \n\n");  // Exibe a mensagem de fim quando o programa sai do loop.

    return 0;  // Finaliza o programa.
}
