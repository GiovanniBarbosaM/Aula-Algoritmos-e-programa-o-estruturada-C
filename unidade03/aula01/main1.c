// Para resolver a situação, será necessário implementar um programa em C que solicite ao usuário que insira o CPF no formato "NNN.NNN.NNN-NN" e, em seguida, elimine os pontos e os traços para criar um CPF sem formatação. Dessa forma, o sistema poderá processar e armazenar os CPFs de forma padronizada, facilitando a indexação e busca. 

#include <stdio.h>

int main() {
    char cpf1[15];     // Vetor para armazenar o CPF com pontos e traço (formato "NNN.NNN.NNN-NN")
    char cpf2[11] = ""; // Vetor para armazenar o CPF sem formatação, inicializado como vazio
    int i = 0, n = 0;   // Variáveis para controle dos índices

    printf("Digite seu CPF no formato NNN.NNN.NNN-NN:\n");
    scanf("%s", cpf1); // Lê o CPF com formatação e armazena em cpf1

    // Laço para percorrer todo o vetor cpf1 e remover pontos e traços, armazenando apenas os dígitos
    for (i = 0; i < 14; i++) {
        if (cpf1[i] == '.' || cpf1[i] == '-') {
            continue; // Ignora pontos e traços
        } else {
            // Armazena apenas os dígitos em cpf2
            cpf2[n] = cpf1[i];
            n++; // Incrementa n para controlar o tamanho de cpf2
        }
    }

    // Imprime o CPF formatado sem pontos e traços
    printf("\n\nCPF formatado = %s", cpf2);

    return 0; // Indica que o programa terminou com sucesso
}
