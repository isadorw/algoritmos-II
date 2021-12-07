#include <stdio.h>

int mdc(int a, int b);

int main(){
    int num1, num2;

    printf("Digite o primeiro valor: ");
    scanf("%d", &num1);
    printf("Digite o segundo valor: ");
    scanf("%d", &num2);

    if (mdc(num1, num2) == -1)
        printf("Erro nos valores da entrada!");
    else
        printf("\n\nMaximo divisor comum (MDC) de %d e %d: %d", num1, num2, mdc(num1, num2));

    return 0;
}

int mdc(int a, int b){
    if (a < 0 || b < 0)
        return -1;
    else {
        if (a == 0)
            return b;
        if (b == 0)
            return a;

        if (a > b)
            return mdc(a % b, b);
        else
            return mdc(a, b % a);
    }
}