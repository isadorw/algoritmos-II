/*
lista 2 - exerc 5
*/

#include <stdio.h>

void conversaoHora(int);

int main () {
    int segundos;

    printf("Informe um valor em SEGUNDOS: ");
    scanf("%d", &segundos);

    conversaoHora(segundos);

    return 0;
}

void conversaoHora(s) {
    int h, hresto, m, s;

    h = seg / 3600;     hresto = seg % 3600;
    m = h1 / 60;
    s = h1 % 60;
    printf("%d:%d:%d\n", h, m, s);
}