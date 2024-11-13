//O programa deve permitir que o administrador insira o número de disciplinas e o número de alunos matriculados em cada uma delas. Em seguida, o programa precisa veri car se o número de alunos é válido e se o limite total de alunos é atingido.

#include <stdio.h> // Inclui a biblioteca padrão para entrada e saída de dados

int main() {
    int total_disciplinas, limite_alunos = 100, total_alunos = 0; // Variáveis para armazenar o número de disciplinas, o limite máximo de alunos e o total atual de alunos

    // Exibe a mensagem inicial e solicita o número de disciplinas ao usuário
    printf("Sistema de contagem de alunos matriculados!\n");
    printf("Insira o número de disciplinas disponíveis: ");
    scanf("%d", &total_disciplinas); // Lê o número de disciplinas fornecido pelo usuário

    // Inicia um loop para percorrer cada disciplina e contar os alunos matriculados
    for (int i = 1; i <= total_disciplinas; i++) {
        int alunos_matriculados; // Variável para armazenar o número de alunos em cada disciplina

        // Solicita ao usuário o número de alunos matriculados para a disciplina atual
        printf("Insira o número de alunos matriculados na disciplina %d: ", i);
        scanf("%d", &alunos_matriculados); // Lê o número de alunos matriculados

        // Verifica se o número de alunos fornecido é válido (não negativo)
        if (alunos_matriculados < 0) {
            printf("Número de alunos inválido. Tente novamente.\n"); // Exibe mensagem de erro
            i--; // Volta para a mesma disciplina para uma nova entrada válida
            continue; // Pula para a próxima iteração do loop para repetir a entrada
        }

        // Adiciona o número de alunos da disciplina atual ao total de alunos
        total_alunos += alunos_matriculados;

        // Verifica se o total de alunos atingiu ou excedeu o limite permitido
        if (total_alunos >= limite_alunos) {
            printf("Limite de alunos atingido. Encerrando contagem de disciplinas.\n");
            break; // Interrompe o loop, pois o limite de alunos foi atingido
        }
    }

    // Exibe o total de disciplinas contadas e o total de alunos matriculados
    printf("Total de disciplinas contadas: %d\n", total_disciplinas);
    printf("Total de alunos matriculados: %d\n", total_alunos);

    return 0; // Indica que o programa terminou com sucesso
}
