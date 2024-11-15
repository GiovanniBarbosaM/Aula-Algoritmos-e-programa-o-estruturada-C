#include <stdio.h>     

int main() {
    char *ptr;       // Ponteiro para char
    int i;           // Variável de controle para o loop
    char vet[5] = {'a', 'b', 'c', 'd', 'e'};  // Vetor de caracteres

    ptr = vet;  // O ponteiro 'ptr' aponta para o primeiro elemento do vetor

    // Loop para percorrer o vetor e acessar os elementos
    for (i = 0; i < 5; i++) {
        // Conteúdo do vetor acessado pela variável 'i'
        printf("\nVet[%d] = %c", i, vet[i]);

        // Conteúdo do vetor acessado pelo ponteiro 'ptr'
        printf("\nptr = %c", *ptr);

        // Avançando o ponteiro para o próximo elemento
        ptr++;
    }

    return 0;  // Finaliza o programa com sucesso
}
