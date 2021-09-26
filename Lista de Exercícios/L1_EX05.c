#include <stdio.h>

int main () {
    float chico = 1.50, ze = 1.10;
    int anos;
    do
    {
        chico = chico + 0.02;
        ze = ze + 0.03;
        anos += 1;
    } while (chico >= ze);
    printf("%d anos para que Ze seja maior que Chico", anos);
    return 0;
}