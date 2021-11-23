/*
lista 2 - exerc 3
*/

#include <stdio.h>

int triangulo (int, int, int);

int main () {
    int valor1, valor2, valor3, resultado;

    printf("Insira o primeiro valor: ");
    scanf("%d", &valor1);
    printf("Insira o segundo valor: ");
    scanf("%d", &valor2);
    printf("Insira o terceiro valor: ");
    scanf("%d", &valor3);

    triangulo(valor1, valor2, valor3);

    if (triangulo(valor1, valor2, valor3) == 1)
        printf("Os lados formam um triangulo!\n");
    else
        printf("Os lados nao formam um triangulo!\n");

    return 0;
}

int triangulo (int a, int b, int c) {
    if (a > 0 && b > 0 && c > 0)
        if (a + b > c)
            if (a + c > b)
                if (c + b > a)
                    return 1;
    else
        return 0;
        else
            return 0;
            else
                return 0;
                else
                    return 0;
}


/*
lista 2 - exerc 3

opcão mais enxuta
*/

#include <stdio.h>

int triangulo (int, int, int);

int main () {
    int valor1, valor2, valor3, resultado;

    printf("Insira o primeiro valor: ");
    scanf("%d", &valor1);
    printf("Insira o segundo valor: ");
    scanf("%d", &valor2);
    printf("Insira o terceiro valor: ");
    scanf("%d", &valor3);

    triangulo(valor1, valor2, valor3);

    if (triangulo(valor1, valor2, valor3) == 1)
        printf("Os lados formam um triangulo!\n");
    else
        printf("Os lados nao formam um triangulo!\n");

    return 0;
}

int triangulo (int a, int b, int c) {
    return (a > 0 && b > 0 && c > 0 && a + b > c && a + c > b && c + b > a);
}
