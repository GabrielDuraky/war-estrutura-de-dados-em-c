// ===============================================================
// NÍVEL NOVATO - CADASTRO DE TERRITÓRIOS
//
// DESCRIÇÃO:
// O programa deve permitir o cadastro de cinco territórios
// utilizando uma estrutura de dados. Cada território deve conter
// as seguintes informações:
// - Nome do território (string)
// - Cor do Exercito (string)
// - Quantidade de soldados (inteiro)
//
// ===============================================================

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definição de constantes globais para os tamanhos máximos dos campos
#define MAX_TERRITORIOS 5
#define MAX_NOME 50
#define MAX_COR 20

// Definição da estrutura para armazenar as informações dos territórios
typedef struct {
    char nome[MAX_NOME];
    char corExercito[MAX_COR];
    int quantidadeSoldados;
} Territorio;

// Função para limpar o buffer de entrada
void LimparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

// Função para exibir as informações de um território (confirmação do cadastro)
void mostrarTerritorio(Territorio t) {
    printf("Nome: %s\n", t.nome);
    printf("Cor do Exército: %s\n", t.corExercito);
    printf("Quantidade de Soldados: %d\n", t.quantidadeSoldados);
} 

// Função de cadastro com confirmação
void cadastrarTerritorio(Territorio territorios[], int *total) {
    if (*total >= MAX_TERRITORIOS) {
        printf("Limite de territórios atingido.\n");
        return;
    }

    Territorio novoTerritorio; // Variável para armazenar temporariamente os dados do novo território

    printf("\n=== Cadastro de Território ===\n");
    printf("Digite o nome do território: ");
    fgets(novoTerritorio.nome, MAX_NOME, stdin);
    novoTerritorio.nome[strcspn(novoTerritorio.nome, "\n")] = '\0'; // Remove a nova linha

    printf("Digite a cor do exército: ");
    fgets(novoTerritorio.corExercito, MAX_COR, stdin);
    novoTerritorio.corExercito[strcspn(novoTerritorio.corExercito, "\n")] = '\0'; // Remove a nova linha
    
    printf("Digite a quantidade de soldados: ");
    scanf("%d", &novoTerritorio.quantidadeSoldados);
    LimparBuffer(); // Limpa o buffer após ler o inteiro

    // mostra resumo para confirmação
    printf("\n=== Resumo do Cadastro ===\n");
    mostrarTerritorio(novoTerritorio); // Exibe as informações do território para confirmação

    char confirmacao;
    printf("Deseja confirmar o cadastro? (s/n): ");
    scanf(" %c", &confirmacao);
    LimparBuffer(); // Limpa o buffer após ler o caractere

    if (confirmacao == 's' || confirmacao == 'S') {
        territorios[*total] = novoTerritorio;
        (*total)++;
        printf("Território cadastrado com sucesso!\n");
    } else {
        printf("Cadastro cancelado.\n");
    }
}

// Função para listar os territórios cadastrados
void listarTerritorios(Territorio territorios[], int total) {
    if (total <= 0) {
        printf("Nenhum território cadastrado.\n");
        return;
    }

    printf("\n=== Territórios Cadastrados (%d/%d) ===\n", total, MAX_TERRITORIOS);
    for (int i = 0; i < total; i++) {
        printf("Território %d:\n", i + 1);
        mostrarTerritorio(territorios[i]);
        printf("\n");
    }
}





// Função principal do programa
int main() {
    Territorio territorios[MAX_TERRITORIOS];
    int totalTerritorios = 0;
    int opcao;

    do {
        // Exibe o menu de opções para o usuário
        printf("=== Cadastro de Territórios ===\n");
        printf("1. Cadastrar território\n");
        printf("2. Listar territórios cadastrados\n");
        printf("3. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        LimparBuffer(); // Limpa o buffer para evitar problemas com fgets

        switch (opcao) {
            case 1:
                cadastrarTerritorio(territorios, &totalTerritorios);
                break;

            case 2:
                listarTerritorios(territorios, totalTerritorios);
                break;

            case 3:
                printf("Saindo do programa...\n");
                break;


            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 3);

    return 0;
}
