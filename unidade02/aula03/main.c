#include <stdio.h>

int main() {
    int multiplicador, resultado, num;

    // Solicita ao usuário qual número deseja ver a tabuada
    printf("Tabuada de qual numero: ");
    scanf("%d", &num);

    // Laço de repetição para calcular e imprimir a tabuada
    for(multiplicador = 1; multiplicador <= 10; multiplicador++) {
        resultado = num * multiplicador;  // Calcula o resultado da multiplicação
        printf("%d x %d = %d\n", num, multiplicador, resultado);  // Exibe o resultado de forma legível
    }

    return 0;
}
