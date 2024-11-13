#include <stdlib.h>
#include <stdio.h>  // Corrigi a falta do #include <stdio.h> para as funções de entrada/saída
#include <string.h>

int main() {
    int avalia, cont = 0, soma = 0;  // Variáveis para a nota, contador de avaliações e soma das notas
    char letra;
    float media;  // Corrigi o tipo de 'media' para 'float'

    do {
        printf("Digite uma nota para avaliação: \n");
        scanf("%d", &avalia);  // Lê a nota informada pelo usuário

        cont++;  // Incrementa o contador de avaliações
        soma = soma + avalia;  // Acumula as notas

        printf("Digite qualquer letra para continuar ou 's' para encerrar: \n");
        getchar();  // Captura o caractere de nova linha deixado pelo scanf
        letra = getchar();  // Lê a letra digitada para controlar o loop

    } while (letra != 's');  // Continua enquanto a letra digitada não for 's'

    // Exibe a quantidade de avaliações e a soma das notas
    printf("\nQuantidade de avaliações = %d e soma das notas = %d.\n", cont, soma);

    // Calcula a média das notas
    if (cont > 0) {  // Verifica se pelo menos uma avaliação foi feita
        media = (float)soma / cont;  // Calcula a média (convenciona soma para float para divisão correta)
        printf("Média das notas = %.2f\n", media);  // Exibe a média das notas
    } else {
        printf("Nenhuma avaliação foi feita.\n");  // Caso nenhuma nota tenha sido informada
    }

    system("PAUSE");  // Pausa a execução (para sistemas Windows)
    return 0;  // Finaliza o programa
}
