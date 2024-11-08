#include <stdio.h>  // Biblioteca para entrada e saída

int main() {
    // Variáveis
    float precoVenda, valorImposto, valorDesconto, precoFinal;

    // Constantes
    const float taxaImposto = 0.1;  // 10% de imposto
    const float descontoPadrao = 0.05;  // 5% de desconto

    // Entrada
    printf("Informe o preço de venda do produto: ");
    scanf("%f", &precoVenda);  // Lê o preço de venda do produto

    // Processamento
    valorImposto = precoVenda * taxaImposto;  // Calcula o valor do imposto
    valorDesconto = precoVenda * descontoPadrao;  // Calcula o valor do desconto
    precoFinal = precoVenda + valorImposto - valorDesconto;  // Calcula o preço final

    // Saída
    printf("O preço final do produto é: R$ %.2f\n", precoFinal);  // Exibe o preço final

    return 0;  // Retorna 0 indicando que o programa terminou com sucesso
}
