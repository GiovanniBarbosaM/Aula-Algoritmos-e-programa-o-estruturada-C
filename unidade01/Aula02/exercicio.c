// programa que calcule a média entre dois valores de entrada

#include <stdio.h>

int main() {
    float num1, num2, media;  // Declara as variáveis como float

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);  // Lê o primeiro número

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);  // Lê o segundo número

    media = (num1 + num2) / 2;  // Calcula a média dos dois números

    printf("Media = %.2f", media);  // Exibe a média com duas casas decimais

    return 0;  // Indica que o programa terminou com sucesso
}
 