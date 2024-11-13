#include <stdio.h>

int main() {
    int linhas, espacos, asteriscos; // Variáveis para controlar o número de linhas, espaços e asteriscos
    
    // Solicita ao usuário o número de linhas do triângulo
    printf("Digite o número de linhas do triângulo: ");
    scanf("%d", &linhas);

    // Loop para cada linha do triângulo
    for (int i = 1; i <= linhas; i++) {
        
        // Loop para imprimir os espaços antes dos asteriscos (alinhamento do triângulo)
        for (espacos = 1; espacos <= linhas - i; espacos++) {
            printf(" ");  // Imprime o espaço
        }
        
        // Loop para imprimir os asteriscos da linha
        for (asteriscos = 1; asteriscos <= 2 * i - 1; asteriscos++) {
            printf("*");  // Imprime o asterisco
        }
        
        // Imprime uma nova linha para o próximo nível do triângulo
        printf("\n");
    }

    return 0;  // Retorna 0 para indicar que o programa terminou com sucesso
}
