#include <stdio.h>

void trocavalores (int *a, int *b, int *c);
void troca(int *a, int *b);

int main () {
    int a, b, c;

    printf("Digite um valor para (a): ");
    scanf("%d", &a);
    printf("Digite um valor para (b): ");
    scanf("%d", &b);
    printf("Digite um valor para (c): ");
    scanf("%d", &c);

    printf("\n\nValores de (a), (b) e (c) ANTES: %d %d %d", a, b, c);

    trocavalores(&a, &b, &c);

    printf("\n\nValores de (a), (b) e (c) DEPOIS: %d %d %d", a, b, c);

    return 0;
}

void troca(int *a, int *b) {
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

void trocavalores(int *a, int *b, int *c) {
    if (*a > *b)
        troca(a, b);
    if (*a > *c)
        troca(a, c);
    if (*b > *c)
        troca(b, c);
}