//Vamos declarar uma matriz em C para armazenar as notas do primeiro e segundo bimestre de três alunos. No Quadro 1, na linha 3, declaramos uma matriz denominada "notas" com 3 linhas e 2 colunas, o que implica no armazenamento de 6 valores no total (produto das linhas pelo número de colunas). Nas linhas 4 e 5, são armazenadas as notas do primeiro aluno. É importante notar que as linhas (primeiro índice) permanecem xas, enquanto as colunas (segundo índice) são alteradas para registrar as notas dos respectivos alunos. Este procedimento é repetido para o segundo e terceiro aluno, que são armazenados na segunda e terceira linha da matriz, respectivamente.

#include <stdio.h>

int main() {
    // Declaração de uma matriz 3x2 do tipo float para armazenar as notas de 3 alunos em 2 avaliações
    float notas[3][2];

    // Aluno 1
    notas[0][0] = 9.5;  // Primeira nota do aluno 1
    notas[0][1] = 10.0; // Segunda nota do aluno 1

    // Aluno 2
    notas[1][0] = 4.5;  // Primeira nota do aluno 2
    notas[1][1] = 6.2;  // Segunda nota do aluno 2

    // Aluno 3
    notas[2][0] = 7.0;  // Primeira nota do aluno 3
    notas[2][1] = 8.5;  // Segunda nota do aluno 3

    return 0; // O programa termina com sucesso
}
