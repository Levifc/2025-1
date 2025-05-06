//Questão 07

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char nome[50];
    int matricula;
    float media;
} Aluno;

void Aprovados(Aluno alunos[], int n) {
    printf("\nAlunos Aprovados:\n");
    for (int i = 0; i < n; i++) {
        if (alunos[i].media >= 7.0) {
            printf("Nome: %s, Matricula: %d, Media: %.2f\n", alunos[i].nome, alunos[i].matricula, alunos[i].media);
        }
    }
}

int main(){
    int n;

    printf("Informe a qauntidade de alunos que deseja cadastrar? ");
    scanf("%d", &n);

    Aluno alunos[n];

    for (int i = 0; i < n; i++){
        printf("\nNome do aluno %d: ", i + 1);
        scanf(" %[^\n]", alunos[i].nome);
        printf("Matricula do aluno %d: ", i + 1);
        scanf("%d", &alunos[i].matricula);
        printf("Media do aluno %d: ", i + 1);
        scanf("%f", &alunos[i].media);
    }
    Aprovados(alunos, n);
    return 0;
}