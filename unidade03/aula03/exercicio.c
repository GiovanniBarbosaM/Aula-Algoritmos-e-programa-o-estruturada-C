// criar uma estrutura Livro, contendo os atributos título, autor, ISBN, ano de publicação e quantidade disponível em estoque. Em seguida, no programa principal vamos instanciar um vetor desta estrutura de acordo com o número de livros que a escola possui em estoque.

#include <stdio.h>
#include <string.h>

#define NUM_LIVROS 3 // Define o número de livros na coleção

// Estrutura para armazenar informações sobre livros
typedef struct {
    char titulo[100];       // Título do livro
    char autor[50];         // Nome do autor
    char ISBN[13];          // Código ISBN do livro
    int anoPublicacao;      // Ano de publicação
    int estoque;            // Quantidade disponível no estoque
} Livro;

int main() {
    // Inicializa um array de livros com dados pré-definidos
    Livro livros[NUM_LIVROS] = {
        {"Memórias de um Futuro Esquecido", "Martelo de Assis", "1231231231239", 1899, 10},
        {"O Silêncio dos Inocentes Gritando", "Franz Kafta", "4564564564569", 1915, 5},
        {"A Menina que Roubava Livros e os Devolvia com Juros", "Dan Brownie", "7897897897899", 1949, 8}
    };

    // Realizar uma busca por autor
    char autorProcurado[50];
    printf("Digite o nome do autor para procurar livros: ");
    fgets(autorProcurado, 50, stdin); // Lê o nome do autor com espaços
    autorProcurado[strcspn(autorProcurado, "\n")] = 0; // Remove o '\n' do final da string

    printf("\nLivros por %s:\n", autorProcurado);
    int livrosEncontrados = 0;

    // Percorre os livros para encontrar os do autor solicitado
    for (int i = 0; i < NUM_LIVROS; i++) {
        if (strcmp(livros[i].autor, autorProcurado) == 0) {
            printf("Título: %s\n", livros[i].titulo);
            printf("ISBN: %s\n", livros[i].ISBN);
            printf("Ano de Publicação: %d\n", livros[i].anoPublicacao);
            printf("Estoque Disponível: %d\n\n", livros[i].estoque);
            livrosEncontrados++;
        }
    }

    // Caso nenhum livro do autor seja encontrado
    if (livrosEncontrados == 0) {
        printf("Nenhum livro encontrado para o autor %s.\n\n", autorProcurado);
    }

    // Verificar disponibilidade de um livro pelo ISBN
    char ISBNProcurado[13];
    printf("Digite o ISBN do livro para verificar a disponibilidade: ");
    fgets(ISBNProcurado, 13, stdin);
    ISBNProcurado[strcspn(ISBNProcurado, "\n")] = 0; // Remove o '\n' do final da string

    int encontrado = 0;
    for (int i = 0; i < NUM_LIVROS; i++) {
        if (strcmp(livros[i].ISBN, ISBNProcurado) == 0) {
            printf("\nO livro \"%s\" está disponível em estoque: %d unidades.\n", livros[i].titulo, livros[i].estoque);
            encontrado = 1;
            break;
        }
    }

    // Caso o livro não seja encontrado
    if (!encontrado) {
        printf("Livro com ISBN %s não encontrado.\n", ISBNProcurado);
    }

    return 0; // Indica execução bem-sucedida
}



//Opções de pesquisa por autor e ISBN dentro de um switch-case, criando assim um menu de seleção? Ainda, você pode incluir outra opção neste menu para possibilitar a alteração dos dados dos livros ou ainda a inclusão de novos livros.

#include <stdio.h>
#include <string.h>

#define MAX_LIVROS 100           // Define o número máximo de livros que podem ser armazenados
#define NUM_INICIAL_LIVROS 3     // Define o número inicial de livros na coleção

// Estrutura que representa um livro
typedef struct {
    char titulo[100];            // Título do livro
    char autor[50];              // Autor do livro
    char ISBN[13];               // Código ISBN do livro (13 caracteres)
    int anoPublicacao;           // Ano de publicação do livro
    int estoque;                 // Quantidade de exemplares disponíveis no estoque
} Livro;

// Função que exibe o menu de opções
void exibirMenu() {
    printf("\nMenu de Opções:\n");
    printf("1. Buscar livros por autor\n");
    printf("2. Verificar disponibilidade por ISBN\n");
    printf("3. Alterar dados de um livro\n");
    printf("4. Adicionar um novo livro\n");
    printf("5. Sair\n");
    printf("Escolha uma opção: ");
}

// Função para buscar livros por autor
void buscarPorAutor(Livro livros[], int totalLivros) {
    char autorProcurado[50];
    printf("Digite o nome do autor para procurar livros: ");
    fgets(autorProcurado, 50, stdin);                // Lê o nome do autor do usuário
    autorProcurado[strcspn(autorProcurado, "\n")] = 0; // Remove o caractere '\n' do final da string

    printf("\nLivros por %s:\n", autorProcurado);
    int livrosEncontrados = 0;

    // Percorre o array de livros procurando pelo autor
    for (int i = 0; i < totalLivros; i++) {
        if (strcmp(livros[i].autor, autorProcurado) == 0) { // Compara o autor atual com o procurado
            printf("Título: %s\n", livros[i].titulo);
            printf("ISBN: %s\n", livros[i].ISBN);
            printf("Ano de Publicação: %d\n", livros[i].anoPublicacao);
            printf("Estoque Disponível: %d\n\n", livros[i].estoque);
            livrosEncontrados++;
        }
    }

    // Se nenhum livro foi encontrado
    if (livrosEncontrados == 0) {
        printf("Nenhum livro encontrado para o autor %s.\n", autorProcurado);
    }
}

// Função para verificar a disponibilidade de um livro por ISBN
void verificarPorISBN(Livro livros[], int totalLivros) {
    char ISBNProcurado[13];
    printf("Digite o ISBN do livro para verificar a disponibilidade: ");
    fgets(ISBNProcurado, 13, stdin);                   // Lê o ISBN do usuário
    ISBNProcurado[strcspn(ISBNProcurado, "\n")] = 0;   // Remove o caractere '\n' do final da string

    int encontrado = 0;

    // Percorre o array de livros procurando pelo ISBN
    for (int i = 0; i < totalLivros; i++) {
        if (strcmp(livros[i].ISBN, ISBNProcurado) == 0) { // Compara o ISBN atual com o procurado
            printf("\nO livro \"%s\" está disponível em estoque: %d unidades.\n", livros[i].titulo, livros[i].estoque);
            encontrado = 1;
            break; // Sai do loop ao encontrar o livro
        }
    }

    // Se o ISBN não foi encontrado
    if (!encontrado) {
        printf("Livro com ISBN %s não encontrado.\n", ISBNProcurado);
    }
}

// Função para alterar os dados de um livro
void alterarDados(Livro livros[], int totalLivros) {
    char ISBNProcurado[13];
    printf("Digite o ISBN do livro que deseja alterar: ");
    fgets(ISBNProcurado, 13, stdin);                   // Lê o ISBN do usuário
    ISBNProcurado[strcspn(ISBNProcurado, "\n")] = 0;   // Remove o caractere '\n' do final da string

    // Percorre o array de livros procurando pelo ISBN
    for (int i = 0; i < totalLivros; i++) {
        if (strcmp(livros[i].ISBN, ISBNProcurado) == 0) { // Compara o ISBN atual com o procurado
            printf("Alterando dados do livro \"%s\":\n", livros[i].titulo);

            printf("Novo título: ");
            fgets(livros[i].titulo, 100, stdin);           // Atualiza o título do livro
            livros[i].titulo[strcspn(livros[i].titulo, "\n")] = 0;

            printf("Novo autor: ");
            fgets(livros[i].autor, 50, stdin);             // Atualiza o autor do livro
            livros[i].autor[strcspn(livros[i].autor, "\n")] = 0;

            printf("Novo ano de publicação: ");
            scanf("%d", &livros[i].anoPublicacao);         // Atualiza o ano de publicação
            getchar(); // Limpa o buffer

            printf("Novo estoque: ");
            scanf("%d", &livros[i].estoque);               // Atualiza o estoque
            getchar(); // Limpa o buffer

            printf("Dados do livro atualizados com sucesso!\n");
            return;
        }
    }

    // Se o ISBN não foi encontrado
    printf("Livro com ISBN %s não encontrado.\n", ISBNProcurado);
}

// Função para adicionar um novo livro
void adicionarLivro(Livro livros[], int *totalLivros) {
    if (*totalLivros >= MAX_LIVROS) { // Verifica se há espaço no array
        printf("Não é possível adicionar mais livros. Limite atingido.\n");
        return;
    }

    Livro novoLivro;

    // Solicita as informações do novo livro
    printf("Digite o título do novo livro: ");
    fgets(novoLivro.titulo, 100, stdin);
    novoLivro.titulo[strcspn(novoLivro.titulo, "\n")] = 0;

    printf("Digite o autor do novo livro: ");
    fgets(novoLivro.autor, 50, stdin);
    novoLivro.autor[strcspn(novoLivro.autor, "\n")] = 0;

    printf("Digite o ISBN do novo livro: ");
    fgets(novoLivro.ISBN, 13, stdin);
    novoLivro.ISBN[strcspn(novoLivro.ISBN, "\n")] = 0;

    printf("Digite o ano de publicação do novo livro: ");
    scanf("%d", &novoLivro.anoPublicacao);
    getchar(); // Limpa o buffer

    printf("Digite o estoque inicial do novo livro: ");
    scanf("%d", &novoLivro.estoque);
    getchar(); // Limpa o buffer

    livros[*totalLivros] = novoLivro; // Adiciona o novo livro ao array
    (*totalLivros)++; // Incrementa o total de livros

    printf("Livro adicionado com sucesso!\n");
}

// Função principal
int main() {
    // Lista inicial de livros
    Livro livros[MAX_LIVROS] = {
        {"Memórias de um Futuro Esquecido", "Martelo de Assis", "1231231231239", 1899, 10},
        {"O Silêncio dos Inocentes Gritando", "Franz Kafta", "4564564564569", 1915, 5},
        {"A Menina que Roubava Livros e os Devolvia com Juros", "Dan Brownie", "7897897897899", 1949, 8}
    };
    int totalLivros = NUM_INICIAL_LIVROS; // Total de livros inicialmente

    int opcao; // Variável para armazenar a escolha do menu
    do {
        exibirMenu(); // Exibe o menu
        scanf("%d", &opcao); // Lê a opção escolhida
        getchar(); // Limpa o buffer

        switch (opcao) {
            case 1:
                buscarPorAutor(livros, totalLivros); // Busca livros por autor
                break;
            case 2:
                verificarPorISBN(livros, totalLivros); // Verifica disponibilidade por ISBN
                break;
            case 3:
                alterarDados(livros, totalLivros); // Altera dados de um livro
                break;
            case 4:
                adicionarLivro(livros, &totalLivros); // Adiciona um novo livro
                break;
            case 5:
                printf("Saindo do programa. Até logo!\n"); // Encerra o programa
                break;
            default:
                printf("Opção inválida. Tente novamente.\n"); // Opção inválida
        }
    } while (opcao != 5); // Repete até o usuário escolher sair

    return 0;
}
