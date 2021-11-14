#include <stdio.h>

int main () {
    int valor1, valor2, temp;

    printf("Insira 1o valor: ");
    scanf("%d", &valor1);
    printf("Insira 2o valor: ");
    scanf("%d", &valor2);

    temp = valor1;
    valor1 = valor2;
    valor2 = temp;

    printf("\\n\\n ----- Valores trocados -----\\n\\n");
    printf("1o valor: %d\\n", valor1);
    printf("2o valor: %d\\n", valor2);

    return 0;
}