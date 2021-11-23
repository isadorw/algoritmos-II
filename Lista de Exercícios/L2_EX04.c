/*
lista 2 - exerc 4
*/

#include <stdio.h>

void trocaValores(float, float);

int main () {
    float valor1, valor2;

    printf("Insira o primeiro valor: ");
    scanf("%f", &valor1);
    printf("Insira o segundo valor: ");
    scanf("%f", &valor2);

    printf("\n\nValores ANTES da troca:\n\n");
    printf("A = %.2f - B = %.2f", valor1, valor2);

    trocaValores(valor1, valor2);

    return 0;
}

void trocaValores(float a, float b) {
    float temp;

    temp = a;
    a = b;
    b = temp;

    printf("\n\nValores DEPOIS da troca: \n\n");
    printf("A = %.2f - B = %.2f", a, b);
}
