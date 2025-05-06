//Questão 6

#include <stdio.h>

void somamatrizes(int m1[3][3], int m2[3][3], int resultado[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            resultado[i][j] = m1[i][j] + m2[i][j];
        }
    }
}

void Matriz(int matriz[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int m1[3][3], m2[3][3], resul[3][3];

    printf("Informe os valores da primeira matriz 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &m1[i][j]);
        }
    }

    printf("Informe os valores da segunda matriz 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &m2[i][j]);
        }
    }
    somamatrizes(m1, m2, resul);

    printf("\nSoma das matrizes:\n");
    Matriz(resul);
    return 0;
}