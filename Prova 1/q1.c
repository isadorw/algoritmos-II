#include <stdio.h>

int numeroperfeito (int num);

int main() {
    int n;

    printf("Digite um valor: ");
    scanf("%d", &n);

    if (numeroperfeito(n) == 1)
        printf("%d eh um numero perfeito!", n);
    else
        if (numeroperfeito(n) == -1)
            printf("Erro de entrada!");
        else
            printf("%d nao eh um numero perfeito!", n);
}

int numeroperfeito (int x) {
    int i = 1, soma = 0;

    if (x < 0){
        return -1;
    } else {
        for (i = 1; i <= x/2; i++) {
            if (x % i == 0)
                soma+= i;
        }
        if (soma == x)
            return 1;
        else
            return 0;
    }
}