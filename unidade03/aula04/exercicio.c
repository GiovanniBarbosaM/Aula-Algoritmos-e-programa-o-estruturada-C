// Declara um vetor de inteiros e um ponteiro para inteiros. Em seguida, associar o ponteiro ao vetor e somar mais dez (+10) a cada posição do vetor usando o ponteiro com aritmética de ponteiros.

#include <stdio.h>

int main() {
    int vetor[5] = {1, 2, 3, 4, 5};      // Vetor de inteiros
    int *ponteiro = vetor;                // Ponteiro apontando para o início do vetor
    
    // Adicionando 10 a cada elemento do vetor usando o ponteiro
    for (int i = 0; i < 5; i++) {
        *(ponteiro + i) += 10;            // Incrementa 10 ao valor apontado pelo ponteiro
    }
    
    // Imprimindo os elementos do vetor após a modificação
    printf("Elementos do vetor após adicionar 10:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", vetor[i]);           // Imprime cada elemento do vetor
    }
    printf("\n");                          // Nova linha após a impressão
    
    return 0;                              // Finaliza o programa com sucesso
}
