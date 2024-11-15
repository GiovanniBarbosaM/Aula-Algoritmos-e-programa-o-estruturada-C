//exemplo de utilização de structs em C que ilustra como os campos da estrutura "Aluno" podem ser facilmente acessados

#include <stdio.h>
#include <string.h>

// Definição da estrutura Aluno
struct Aluno {
    int numMat;          // Número de matrícula do aluno
    char nome[30];       // Nome do aluno (até 30 caracteres)
    char sexo;           // Sexo do aluno ('M' ou 'F')
    int idade;           // Idade do aluno
};

int main() {
    // Declaração de uma variável do tipo struct Aluno
    struct Aluno aluno1;

    // Inserindo dados no aluno1
    aluno1.numMat = 1000;                        // Atribuição do número de matrícula
    strcpy(aluno1.nome, "Joao");                 // Copiando o nome para a variável 'nome'
    aluno1.sexo = 'M';                           // Definindo o sexo como masculino
    aluno1.idade = 19;                           // Atribuindo a idade

    // Imprimindo os dados do aluno1
    printf("Número de matrícula: %d\n", aluno1.numMat); // Exibe o número de matrícula
    printf("Nome: %s\n", aluno1.nome);                 // Exibe o nome
    printf("Sexo: %c\n", aluno1.sexo);                 // Exibe o sexo
    printf("Idade: %d\n", aluno1.idade);               // Exibe a idade

    return 0; // Indica que o programa foi executado com sucesso
}
