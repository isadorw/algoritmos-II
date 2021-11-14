#include <stdio.h>

int main () {
    int base, altura, area;

    printf("Insira o valor da base: ");
    scanf("%d", &base);
    printf("Insira o valor da altura: ");
    scanf("%d", &altura);

    area = base * altura;

    printf("\\n\\n ----- Area do retangulo -----\\n\\n");
    printf("Area = %d", area);

    return 0;
}