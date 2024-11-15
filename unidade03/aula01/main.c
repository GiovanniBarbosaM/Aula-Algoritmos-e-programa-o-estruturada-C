//Vamos criar dois vetores em C para armazenar informações sobre a idade e a altura (em metros) de 3 indivíduos. Observando o código apresentado no Quadro 1, na linha 3, é de nido o vetor "idade", que é do tipo inteiro e tem capacidade para armazenar três valores. Na linha 4, o vetor "altura" é criado e inicializado com valores especí cos. Ao declarar os valores no momento da criação do vetor, os elementos são listados entre chaves e separados por vírgula. Nas linhas de 5 a 7, os valores armazenados no vetor "altura" são impressos, acessando-os pelos seus respectivos índices.

#include <stdio.h>  // Inclui a biblioteca padrão de entrada e saída

int main() {  // Função principal do programa
    int idade[3];  // Declara um array de inteiros chamado 'idade' com 3 posições (não é utilizado neste exemplo)
    float altura[3] = {1.0, 1.5, 1.7};  // Declara um array de floats chamado 'altura' com valores iniciais

    // Exibe o valor do primeiro elemento do array 'altura' (altura[0])
    printf("\nVetor altura[0] = %.1f", altura[0]);

    // Exibe o valor do segundo elemento do array 'altura' (altura[1])
    printf("\nVetor altura[1] = %.1f", altura[1]);

    // Exibe o valor do terceiro elemento do array 'altura' (altura[2])
    printf("\nVetor altura[2] = %.1f", altura[2]);

    return 0;  // Indica que o programa terminou com sucesso
}
