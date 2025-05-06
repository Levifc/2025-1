//Questão 8

#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    int codigo;
    int quantidade;
    float preco;
} Produto;

void limparBuffer() {
    while (getchar() != '\n');
}

void cadastrarProduto(Produto produtos[], int *n) {
    printf("\nNome do produto: ");
    fgets(produtos[*n].nome, sizeof(produtos[*n].nome), stdin);
    strtok(produtos[*n].nome, "\n");

    printf("Digite o codigo, quantidade e preço do produto: ");
    scanf("%d %d %f", &produtos[*n].codigo, &produtos[*n].quantidade, &produtos[*n].preco);
    limparBuffer();
    (*n)++;
}

void buscarProduto(Produto produtos[], int n) {
    int codigo;
    printf("\nCodigo do produto: ");
    scanf("%d", &codigo);
    limparBuffer();

    for (int i = 0; i < n; i++) {
        if (produtos[i].codigo == codigo) {
            printf("Produto encontrado: Nome: %s, Codigo: %d, Quantidade: %d, Preço: %.2f\n",
                   produtos[i].nome, produtos[i].codigo, produtos[i].quantidade, produtos[i].preco);
            return;
        }
    }
    printf("Produto nao encontrado.\n");
}

void listarProdutos(Produto produtos[], int n) {
    printf("\nLista de produtos:\n");
    for (int i = 0; i < n; i++) {
        printf("Nome: %s, Codigo: %d, Quantidade: %d, Preço: %.2f\n",
               produtos[i].nome, produtos[i].codigo, produtos[i].quantidade, produtos[i].preco);
    }
}

int main() {
    Produto produtos[100];
    int n = 0, opcao;

    do {
        printf("\nMenu:\n1. Cadastrar produto\n2. Buscar produto\n3. Listar produtos\n4. Sair\nEscolha: ");
        scanf("%d", &opcao);
        limparBuffer();

        if (opcao == 1) cadastrarProduto(produtos, &n);
        else if (opcao == 2) buscarProduto(produtos, n);
        else if (opcao == 3) listarProdutos(produtos, n);
        else if (opcao != 4) printf("Opção invalida.\n");
    } while (opcao != 4);

    printf("\nSaindo...\n");
    return 0;
}