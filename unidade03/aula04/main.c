// Começando com as structs, ponteiros para estruturas são escritos de forma similar a uma variável comum. A principal diferença é o uso do operador “->” para acesso aos membros. Veja no Quadro 1 um exemplo de programa em C que trata esta questão.

#include <stdio.h>

// Definição da estrutura 'aluno'
struct aluno {
    int mat;    // Número da matrícula
    float nota; // Nota do aluno
};

int main() {
    struct aluno joao;      // Declaração de uma variável do tipo 'struct aluno'
    struct aluno *ptr;      // Declaração de um ponteiro para 'struct aluno'
    
    // Inicialização da variável 'joao'
    joao.mat = 1000;
    joao.nota = 8.5;
    
    // Inicialização do ponteiro 'ptr', que agora aponta para a variável 'joao'
    ptr = &joao;
    
    // Impressão dos atributos de 'joao' através do ponteiro 'ptr'
    printf("%d\n", ptr->mat);  // Acessando 'mat' através do ponteiro e imprimindo
    printf("%f\n", ptr->nota); // Acessando 'nota' através do ponteiro e imprimindo
    
    return 0;
}
