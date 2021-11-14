/*
lista 2 - exerc 1
*/

#include <stdio.h>
#include <stdlib.h>

int maiornum(int, int, int);

int main () {
    int valor1, valor2, valor3, resultado;

    printf("Insira o primeiro valor: ");
    scanf("%d", &valor1);
    printf("Insira o segundo valor: ");
    scanf("%d", &valor2);
    printf("Insira o terceiro valor: ");
    scanf("%d", &valor3);

    resultado = maiornum(valor1, valor2, valor3);

    printf("\n\nO maior numero eh: %d\n\n", resultado);
    system("pause");
    return 0;
}

int maiornum(int a, int b, int c) {
    int maior;

    if (a > b) {
        if (a > c)
            maior = a;
        else
            maior = c;
    } else {
        if (b > c)
            maior = b;
        else
            maior = c;
    }

    return maior;
}
