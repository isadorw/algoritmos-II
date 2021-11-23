#include <stdio.h>
#include <string.h>

int ehpalindrome (char *palavra);

int main () {
    char cadeia[30];

    printf("Digite uma palavra: ");
    scanf("%s", &cadeia);

    if (ehpalindrome(cadeia))
        printf("Eh palindrome!");
    else
        printf("Nao eh palindrome!");

    return 0;
}

int ehpalindrome (char *palavra) {
    int tam, i = 0;

    tam = strlen(palavra);

    while (i <= tam/2 && palavra[i] == palavra[tam - i - 1]) {
        i++;
    }

    return palavra[i] == palavra[tam - i - 1];
}