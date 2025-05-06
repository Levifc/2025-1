//Questão 9

#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    char tel[15];
} Contato;

void adiContato(Contato contatos[], int *n) {
    printf("\nNome do contato: ");
    scanf(" %[^\n]", contatos[*n].nome);
    printf("Telefone do contato: ");
    scanf(" %[^\n]", contatos[*n].tel);
    (*n)++;
}

void busContato(Contato contatos[], int n) {
    char nome[50];
    printf("\nNome do contato: ");
    scanf(" %[^\n]", nome);

    for (int i = 0; i < n; i++) {
        if (strcmp(contatos[i].nome, nome) == 0) {
            printf("Contato encontrado: Nome: %s, Telefone: %s\n", contatos[i].nome, contatos[i].tel);
            return;
        }
    }
    printf("Contato não encontrado.\n");
}

void lisContatos(Contato contatos[], int n) {
    printf("\nLista de contatos:\n");
    for (int i = 0; i < n; i++) {
        printf("Nome: %s, Telefone: %s\n", contatos[i].nome, contatos[i].tel);
    }
}

int main() {
    Contato contatos[100];
    int n = 0, opcao;

    do {
        printf("\nMenu:\n1. Adicionar contato\n2. Buscar contato\n3. Listar contatos\n4. Sair\nEscolha: ");
        scanf("%d", &opcao);

        if (opcao == 1) adiContato(contatos, &n);
        else if (opcao == 2) busContato(contatos, n);
        else if (opcao == 3) lisContatos(contatos, n);
        else if (opcao != 4) printf("Opção inválida.\n");
    } while (opcao != 4);

    printf("\nSaindo...\n");
    return 0;
}