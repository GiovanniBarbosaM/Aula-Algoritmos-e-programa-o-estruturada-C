#include <stdio.h>  // Inclui a biblioteca de entrada e saída

int main() {
    // Declaração e inicialização das variáveis
    int a = 5, b = 10, c = 5;

    // A expressão (a == b) && (a == c) verifica se ambos são verdadeiros (a igual a b e a igual a c)
    // Imprime o resultado da comparação lógica "E"
    printf("\n (a==b)&&(a==c) = %d", ((a == b) && (a == c)));

    // A expressão (a == b) || (a == c) verifica se pelo menos uma das condições é verdadeira (a igual a b ou a igual a c)
    // Imprime o resultado da comparação lógica "OU"
    printf("\n (a==b)||(a==c) = %d", ((a == b) || (a == c)));

    // A expressão !(a == b) || (a == c) verifica se a != b ou a == c
    // O operador "!" nega a comparação (a == b), e depois é feita a comparação lógica "OU"
    // Imprime o resultado da negação combinada com "OU"
    printf("\n !(a==b)||(a==c) = %d", !((a == b) || (a == c)));

    return 0;  // Retorna 0 indicando que o programa foi executado corretamente
}
