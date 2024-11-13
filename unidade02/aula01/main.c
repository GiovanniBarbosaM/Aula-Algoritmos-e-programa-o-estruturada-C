#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

int main() {
    float idade; // Declara a variável 'idade' do tipo float para armazenar a idade do usuário

    // Solicita ao usuário que digite sua idade
    printf("Digite sua idade: \n");
    scanf("%f", &idade); // Lê a idade fornecida pelo usuário e armazena em 'idade'

    // Verifica se a idade é maior ou igual a 18
    if (idade >= 18) {
        // Caso a condição seja verdadeira, exibe a mensagem informando que o usuário pode tirar a carteira de habilitação
        printf("Você já pode tirar sua carteira de habilitação, pois é maior de 18.\n");
    }

    return 0; // Indica que o programa terminou com sucesso
}
