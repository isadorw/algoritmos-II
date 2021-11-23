// fiz de outra forma

// l2 - ex06

#include <stdio.h>

void conversaoBinaria (int n);

int main() {
    int num;

    printf("Informe um numero na base decimal: ");
    scanf("%d", &num);

    conversaoBinaria(num);

    return 0;
}

void conversaoBinaria (int n) {
    int resto[20], i;

    for (i = 0; n > 0; i++) {
    resto[i] = n % 2;
    n /= 2;
    }

    printf("\n\nNumero convertido para base binaria: ");
    for (i = i - 1; i >= 0; i--) {
        printf("%d", resto[i]);
    }
}