#include <stdio.h>

int main() {
    float salario, inss, ir, sal_liquido;  // Corrigido "oat" para "float"
    
    // Exibe título
    printf("Cálculo de Salário Líquido com desconto do IR e INSS\n\n");

    // Solicita ao usuário o salário bruto
    printf("\nDigite seu salário bruto:\n");
    scanf("%f", &salario);

    // Cálculo do INSS com base na faixa salarial
    if (salario <= 1320) {
        inss = salario * 0.075;
    } else if (salario <= 2571.29) {
        inss = salario * 0.09;
    } else if (salario <= 3856.94) {
        inss = salario * 0.12;
    } else if (salario <= 7507.49) {
        inss = salario * 0.14;
    } else {
        inss = 1051.04;  // Teto de contribuição do INSS
    }

    // Cálculo do IR (Imposto de Renda) com base na faixa salarial
    if (salario <= 1903.98) {
        ir = 0;  // Isento
    } else if (salario <= 2826.65) {
        ir = salario * 0.075;
    } else if (sal
