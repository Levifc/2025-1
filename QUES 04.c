//Questão 4

#include <stdio.h>

void frequencianum(int num[], int tam){
    int frequencia[101] = {0};

    for (int i = 0; i < tam; i++){
        frequencia[num[i]]++;
    }

    printf("Frequencia dos numeros:\n");
    for (int i = 0; i <= 100; i++){
        if (frequencia[i] > 0){
            printf("Numero %d: %d vezes\n", i, frequencia[i]);
        }
    }
}

int main(){
    int num[10];

    printf("informe 10 numeros: ");
    for (int i = 0; i < 10; i++){
        scanf("%d", &num[i]);
    }
    frequencianum(num, 10);
    return (0);
}