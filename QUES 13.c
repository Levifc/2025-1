//Questão 13

#include <stdio.h>

#define TAMANHO 4

int somaDiagonal(int matriz[TAMANHO][TAMANHO]) {
    int soma = 0;

    for (int i = 0; i < TAMANHO; i++) {
        soma += matriz[i][i];
    }

    return soma;
}

int main() {
    int matriz[TAMANHO][TAMANHO];

    printf("Informe os valores da matriz 4x4:\n");
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    int soma = somaDiagonal(matriz);
    printf("A soma da diagonal principal e: %d\n", soma);
    return 0;
}