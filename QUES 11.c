//Questão 11

#include <stdio.h>

int busBinaria(int v[], int tamanho, int chave) {
    int inicio = 0, fim = tamanho - 1;

    while (inicio <= fim) {
        int meio = (inicio + fim) / 2;

        if (v[meio] == chave) return meio;
        if (v[meio] < chave) inicio = meio + 1;
        else fim = meio - 1;
    }

    return -1;
}

int main() {
    int v[] = {1, 3, 5, 7, 9, 11, 13, 15};
    int tamanho = sizeof(v) / sizeof(v[0]);
    int chave;

    printf("Numero que deseja buscar: ");
    scanf("%d", &chave);

    int resultado = busBinaria(v, tamanho, chave);
    printf(resultado != -1 ? "\nNumero encontrado no Indice %d.\n" : "Numero nao encontrado.\n", resultado);

    return 0;
}