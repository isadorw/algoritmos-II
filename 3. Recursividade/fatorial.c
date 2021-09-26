#include <stdio.h>

int fatorial(int); // definicao do prototipo

void main() {
    int num;
    scanf("%d", &num);
    printf("Fatorial (%d): %d", num, fatorial(num));
}

int fatorial(int n) {
    if (n == 0)
        return 1;
    else 
        return n * fatorial(n - 1);
}