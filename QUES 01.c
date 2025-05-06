//Questão 1

#include <stdio.h>
#include <stdbool.h>

bool ehPrimo(int n){
    if (n <= 1) return false; 
    for (int i = 2; i * i <= n; i++){
        if (n % i == 0) return false;
    }
    return true;
}

int main(){
    int ini, fim;

    printf("Informe o numero inicial: ");
    scanf("%d", &ini);
    printf("Informe o numero final: ");
    scanf("%d", &fim);

    if (ini > fim){
        printf("Intervalo invalido.\n");
        return 1; 
    }
    printf("Numeros primos entre %d e %d: ", ini, fim);

    for (int i = ini; i <= fim; i++){
        if (ehPrimo(i)){
            printf("%d ", i);
        }
    }
    printf("\n");
    return (0);
}