#include <stdio.h>  // Inclui a biblioteca padrão de entrada e saída para usar funções como printf e scanf

// Define uma constante de pré-processador para o valor de pi
#define pi 3.14

int main() {
    // Declara uma constante do tipo float chamada 'g' com valor 9.8
    const float g = 9.8;

    // Exibe o valor de pi na tela. O %f é um especificador de formato para números de ponto flutuante.
    // O valor de pi será mostrado com 6 casas decimais por padrão.
    printf("\n pi = %f", pi);

    // Exibe o valor de g na tela. O %f também é usado para exibir o valor de ponto flutuante de 'g'.
    printf("\n g = %f", g);

    return 0;  // Retorna 0, indicando que o programa foi executado com sucesso
}
