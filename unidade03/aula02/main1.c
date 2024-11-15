// como poderíamos deixar a inserção de dados a cargo do usuário e de forma otimizada? Simples! Utilizando dois laços de repetição for aninhados, uma para percorrer as linhas e outro para percorrer as colunas em cada uma das linhas.

#include <stdio.h>

int main() {
    // Declaração de uma matriz 3x2 do tipo float para armazenar as notas de 3 alunos em 2 avaliações
    float notas[3][2];

    // Loop para receber as notas dos alunos
    for (int i = 0; i < 3; i++) {  // Itera sobre os alunos
        for (int j = 0; j < 2; j++) {  // Itera sobre as notas de cada aluno
            printf("Digite a nota %d do aluno %d: ", j + 1, i + 1);
            scanf("%f", &notas[i][j]);  // Lê a nota fornecida pelo usuário e armazena na matriz
        }
    }

    return 0;  // O programa termina com sucesso
}
