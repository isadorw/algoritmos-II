#include <stdio.h>

void trocavalorref(float *a, float *b);

void main () { // programa principal
    float n1, n2;

    // leitura de dados
    printf("\nN[1]: ");
    scanf("%f", &n1);
    printf("\nN[2]: ");
    scanf("%f", &n2);

    // passagem de parametros
    trocavalorref(&n1, &n2); // passagem por referencia precisa do e comercial '&'

    // resultado
    printf("\nN[1]: %.2f", n1);
    printf("\nN[2]: %.2f", n2);
}

void trocavalorref(float *a, float *b) { // passagem por referencia
    float aux;
    aux = *a;
    *a = *b;
    *b = aux;
}
