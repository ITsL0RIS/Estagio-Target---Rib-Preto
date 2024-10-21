#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PRODUTOS 100

typedef struct {
    int id;
    char nome[50];
    int quantidade;
    float preco;
} Produto;

Produto produtos[MAX_PRODUTOS]; 
int total_produtos = 0; // Contador de produtos

// Funções
void adicionarProduto();
void listarProdutos();
void atualizarProduto();
void excluirProduto();

int main() {
    int opcao;

    do {
        // Menu de opções
        printf("\n----- MENU -----\n");
        printf("1 - Adicionar Produto\n");
        printf("2 - Listar Produtos\n");
        printf("3 - Atualizar Produto\n");
        printf("4 - Excluir Produto\n");
        printf("5 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        // Executa a opção selecionada
        switch (opcao) {
            case 1:
                adicionarProduto();
                break;
            case 2:
                listarProdutos();
                break;
            case 3:
                atualizarProduto();
                break;
            case 4:
                excluirProduto();
                break;
            case 5:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção invalida! \nEscolha novamente (numero de 1 a 5)\n\n");
        }
    } while (opcao != 5);

    return 0;
}

// Função Adicionar produto
void adicionarProduto() {
    if (total_produtos < MAX_PRODUTOS) {
        Produto p;

        printf("ID do produto: ");
        scanf("%d", &p.id);
        printf("Nome do produto: ");
        scanf("%s", p.nome);
        printf("Quantidade do produto: ");
        scanf("%d", &p.quantidade);
        printf("Preco do produto: ");
        scanf("%f", &p.preco);

        
        produtos[total_produtos] = p;
        total_produtos++;

        printf("Produto adicionado com sucesso!\n");
    } else {
        printf("Limite de produtos atingido!\n");
    }
}

// Função listar produtos
void listarProdutos() {
    printf("\n----- LISTA -----\n");

    if (total_produtos == 0) {
        printf("Nenhum produto cadastrado.\n");
    } else {
        for (int i = 0; i < total_produtos; i++) {
            printf("ID: %d\nNome: %s\nQuantidade: %d\nPreco: %.2f\n\n", produtos[i].id, produtos[i].nome, produtos[i].quantidade, produtos[i].preco);
        }
    }
}

// Função Atualizar Produto
void atualizarProduto() {
    int id, encontrado = 0;
    printf("Digite o ID do produto a ser atualizado: ");
    scanf("%d", &id);

    // Procura o produto pelo ID
    for (int i = 0; i < total_produtos; i++) {
        if (produtos[i].id == id) {
            printf("Produto encontrado!\n");
            printf("Novo nome do produto: ");
            scanf("%s", produtos[i].nome);
            printf("Nova quantidade do produto: ");
            scanf("%d", &produtos[i].quantidade);
            printf("Novo preco do produto: ");
            scanf("%f", &produtos[i].preco);

            printf("Produto atualizado com sucesso!\n");
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("Produto não encontrado, por favor verifique o ID digitado (%d)\n", id);
    }
}

// Função Excluir Produto
void excluirProduto() {
    int id, encontrado = 0;
    printf("Digite o ID do produto a ser excluido: ");
    scanf("%d", &id);

    // Procura o produto pelo ID e exclui
    for (int i = 0; i < total_produtos; i++) {
        if (produtos[i].id == id) {
            encontrado = 1;
            // Desloca os produtos seguintes para "excluir" o produto
            for (int j = i; j < total_produtos - 1; j++) {
                produtos[j] = produtos[j + 1];
            }
            total_produtos--;
            printf("Produto excluido com sucesso!\n");
            break;
        }
    }

    if (!encontrado) {
        printf("Produto com ID %d nao encontrado.\n", id);
    }
}
