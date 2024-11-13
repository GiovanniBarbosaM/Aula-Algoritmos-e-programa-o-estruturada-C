#include <stdio.h>

int main() {
    // Definindo as variáveis
    float valor_bruto = 0.0;  // Armazena o valor total da conta
    float valor_liquido = 0.0;  // Armazena o valor após o desconto
    float desconto = 0.0;  // Armazena o valor do desconto em porcentagem
    int qtd_pessoas = 0;  // Armazena a quantidade de pessoas

    // Solicitando a entrada de dados
    printf("\nDigite o valor total da conta: ");
    scanf("%f", &valor_bruto);  // Lê o valor total da conta

    printf("\nDigite a quantidade de pessoas: ");
    scanf("%d", &qtd_pessoas);  // Lê o número de pessoas

    printf("\nDigite o desconto (em porcentagem): ");
    scanf("%f", &desconto);  // Lê o valor do desconto em porcentagem

    // Calculando o valor líquido com o desconto
    valor_liquido = valor_bruto - (valor_bruto * desconto / 100);

    // Exibindo o resultado
    printf("\nValor da conta com desconto = %.2f", valor_liquido);  // Mostra o valor com desconto
    printf("\nValor a ser pago por pessoa = %.2f", valor_liquido / qtd_pessoas);  // Mostra o valor por pessoa

    return 0;
}
