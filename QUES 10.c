//Questão 10

#include <stdio.h>

int fibonacci(int n){
    if (n == 0){
        return 0;
    } else if (n == 1){
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main(){
    int n;
    
    printf("Informe o valor de n para calcular o n-esimo numero de Fibonacci: ");
    scanf("%d", &n);
    
    if (n < 0){
        printf("Numero invalido.\n");
    } else {
        printf("O %d numero de Fibonacci e: %d\n", n, fibonacci(n));
    }
    return 0;
}