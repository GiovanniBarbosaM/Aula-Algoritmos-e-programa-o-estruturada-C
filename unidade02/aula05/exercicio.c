//projeto de análise de crescimento populacional e precisa calcular a sequência de Fibonacci para prever o número de indivíduos em uma população de coelhos ao longo do tempo. 

#include <stdio.h> // Biblioteca padrão para entrada e saída

int main() {
    int n; // Variável para armazenar o número de termos desejado
    int primeiro = 0, segundo = 1, proximo; // Variáveis para os dois primeiros termos e o próximo termo da sequência

    // Solicita ao usuário o número de termos da sequência Fibonacci que deseja calcular
    printf("Digite o número de termos da sequência de Fibonacci que você deseja calcular: ");
    scanf("%d", &n); // Lê o número de termos

    // Exibe o cabeçalho da sequência
    printf("Sequência de Fibonacci até o termo %d:\n", n);

    // Laço para calcular e exibir cada termo da sequência
    for (int i = 0; i < n; i++) { // A iteração vai até n (quantidade de termos desejada)
        if (i <= 1) { // Para os dois primeiros termos, atribuímos diretamente
            proximo = i; // O primeiro termo é 0, o segundo é 1
        } else {
            proximo = primeiro + segundo; // O próximo termo é a soma dos dois anteriores
            primeiro = segundo; // Atualiza o primeiro termo para o valor do segundo
            segundo = proximo; // Atualiza o segundo termo para o novo valor calculado
        }
        
        // Exibe o próximo termo da sequência
        printf("%d ", proximo);
    }

    // Finaliza o programa
    return 0;
}
