// Para desenvolver o sistema de gerenciamento de notas, podemos usar matrizes para armazenar os dados das notas dos alunos por disciplina e realizar os cálculos necessários. Nesta lógica, cada linha da matriz representa um aluno, e as colunas as respectivas disciplinas.

#include <stdio.h>

#define NUM_ALUNOS 3
#define NUM_DISCIPLINAS 3

int main() {
    // Inicialização das notas dos alunos em cada disciplina
    float notas[NUM_ALUNOS][NUM_DISCIPLINAS] = {
        {7.5, 8.0, 9.0}, 
        {6.5, 7.0, 8.0}, 
        {8.0, 7.5, 8.5}
    };
    float mediasAluno[NUM_ALUNOS]; // Média de cada aluno
    float mediaGeral, soma = 0;

    // Calcula a média das notas de cada aluno em todas as disciplinas
    for (int i = 0; i < NUM_ALUNOS; i++) {
        float somaAluno = 0; // Soma das notas de cada aluno
        for (int j = 0; j < NUM_DISCIPLINAS; j++) {
            somaAluno += notas[i][j];
        }
        mediasAluno[i] = somaAluno / NUM_DISCIPLINAS; // Calcula a média do aluno
    }

    // Calcula a média geral dos alunos
    soma = 0; // Reinicia a soma para calcular a média geral
    for (int i = 0; i < NUM_ALUNOS; i++) {
        soma += mediasAluno[i];
    }
    mediaGeral = soma / NUM_ALUNOS; // Calcula a média geral de todos os alunos

    // Imprime a média de cada aluno
    for (int i = 0; i < NUM_ALUNOS; i++) {
        printf("Média do aluno %d: %.2f\n", i + 1, mediasAluno[i]);
    }

    // Imprime a média geral de todos os alunos
    printf("Média geral de todos os alunos: %.2f\n", mediaGeral);

    return 0;
}
