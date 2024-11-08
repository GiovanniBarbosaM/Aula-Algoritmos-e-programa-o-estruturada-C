#include <stdio.h>

int main() {
    int num;  // Declara uma variável inteira

    printf("Digite um número: ");  // Pede ao usuário para digitar um número
    scanf("%d", &num);             // Lê o número digitado e armazena em 'num'

    printf("Você digitou: %d\n", num);  // Exibe o número digitado

    system("pause");  // Pausa o programa no Windows (opcional)

    return 0;  // Indica que o programa terminou com sucesso
}
