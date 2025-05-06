//Questão 12

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool Palindromo(char str[]) {
    int inicio = 0;
    int fim = strlen(str) - 1;

    while (inicio < fim) {
        if (str[inicio] != str[fim]) {
            return false;
        }
        inicio++;
        fim--;
    }

    return true;
}

int main() {
    char palavra[100];

    printf("\ninforme a palavra: ");
    scanf("%s", palavra);

    if (Palindromo(palavra)) {
        printf("A palavra '%s' e um palindromo.\n", palavra);
    } else {
        printf("A palavra '%s' nao e um palindromo.\n", palavra);
    }
    return 0;
}