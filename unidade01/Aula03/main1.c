#include <stdio.h>

int main() {
    char caractere;
    float valor1, valor2;  // Corrigido para float

    printf("\nDigite um caractere qualquer: ");
    scanf(" %c", &caractere);  // Espaço antes de %c para ignorar nova linha anterior

    printf("\nDigite o primeiro valor: ");
    scanf("%f", &valor1);

    printf("\nDigite o segundo valor: ");
    scanf("%f", &valor2);

    printf("Variável 1 = %c\n", caractere);
    printf("Variável 2 = %.2f\n", valor1);
    printf("Variável 3 = %.2f\n", valor2);

    return 0;
}
