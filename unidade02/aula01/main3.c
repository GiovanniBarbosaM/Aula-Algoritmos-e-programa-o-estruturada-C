#include <stdio.h>

int main() {
    char opcao;
    float valor, total;  // Corrigi "oat" para "float", pois "oat" é um erro de digitação.

    // Solicita ao usuário o valor da compra
    printf("\nDigite o valor da compra:\n");
    scanf("%f", &valor);

    // Exibe opções de desconto para o usuário
    printf("\nDigite a letra que representa o desconto a ser aplicado:\n");
    printf("\ta - 10%% de desconto\n");  // %% é usado para exibir o símbolo %
    printf("\tb - 15%% de desconto\n");

    // Lê a opção de desconto escolhida pelo usuário
    printf("\nDigite sua opção: ");
    scanf(" %c", &opcao);  // Corrigi para " %c" para ler um caractere

    // Estrutura switch para aplicar o desconto conforme a opção
    switch(opcao) {
        case 'a':  // Opção para 10% de desconto
            total = valor - (valor * 0.10);
            printf("\nValor final da compra: R$ %.2f\n", total);
            break;
        case 'b':  // Opção para 15% de desconto
            total = valor - (valor * 0.15);
            printf("\nValor final da compra: R$ %.2f\n", total);
            break;
        default:  // Caso o usuário digite uma opção inválida
            printf("Opção inválida\n");
    }
    
    return 0;
}
