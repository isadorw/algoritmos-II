/*
lista 2 - exerc 2
*/

#include <stdio.h>

void multiplos (int, int, int);

int main () {
    int valor1, valor2, valor3;

    printf("Insira o primeiro valor: ");
    scanf("%d", &valor1);
    printf("Insira o segundo valor: ");
    scanf("%d", &valor2);
    printf("Insira o terceiro valor: ");
    scanf("%d", &valor3);

    multiplos(valor1, valor2, valor3);

    system("pause");
    return 0;
}

void multiplos (int a, int b, int x) {
    int i;

    printf("\n\nOs multiplos sao: \n\n");
    if (a < b) {
        for (i = a; i <= b; i++) {
            if (i % x == 0) {
                printf("%d\n", i);
            }
        }
    } else { // a = 16 b = 8
        for (i = a; i >= b; i--) {
            if (i % x == 0) {
                printf("%d\n", i);
            }
        }
    }
}
