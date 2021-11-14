#include <stdio.h>

int main() {
    int n, i = 1, quantidadeDeDivisores;
    scanf("%d", &n);
    while (i < n) {
        for (i = 1; i <= n; i++) {
            if (n % i == 0) {
                printf("%d\n", i);
                quantidadeDeDivisores++;
            }
        }
	}
    printf("Numero de divisores: %d\n", quantidadeDeDivisores);
}