

#include <stdio.h>
#include <stdlib.h>

void complexo2 (float *r, float *t); // prototipo de um procedimento com passagem de param por referencia

void main() {
    float a, b; // variaveis globais
    printf("Entre com um numero complexo (2 numeros inteiros): ");
    scanf("%f %f", &a, &b);
    complexo2(&a, &b);
    printf("O quadrado do numero complexo eh %f + 1 %f\n", a, b);
}

void complexo2 (float *r, float *t) {
    float real; // variavel local
    real = (*r * *r) - (*t * *t);
    *t = 3 * *r * *t;
    *r = real;
}