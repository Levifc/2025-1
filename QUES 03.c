//Questão 3

#include <stdio.h>

int inverternum(int num) {
    int inverso = 0;

    for (; num != 0; num /= 10) {
        int digito = num % 10;
        inverso = inverso * 10 + digito;
    }
    return inverso;
}

int main() {
    int num;

    printf("Informe um numero: ");
    scanf("%d", &num);

    int resultado = inverternum(num);
    printf("O inverso e %d\n", resultado);
    return 0;
}