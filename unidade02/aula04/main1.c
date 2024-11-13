#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

int main() {
    // Loop de 1 a 20 para imprimir apenas números ímpares
    for (int i = 1; i <= 20; i++) { // Inicia 'i' em 1 e incrementa até 20
        if (i % 2 == 0) { // Verifica se 'i' é par (resto da divisão por 2 é 0)
            continue; // Pula para a próxima iteração quando 'i' é par
        }
        printf("%d ", i); // Imprime 'i' apenas se for ímpar (caso não tenha pulado)
    }
    
    return 0; // Indica que o programa foi executado com sucesso
}
