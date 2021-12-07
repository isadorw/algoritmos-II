#include <stdio.h>

int quantidadeBemA(int a, int b);

int main () {
    int a, b;

    printf("Informe um numero (a): ");
    scanf("%d",&a);
    printf("Digite apenas um unico numero (b): ");
    scanf("%d",&b);

    printf("A quantidade de (b) em (a) eh %d", quantidadeBemA(a , b));

    return 0;
}

int quantidadeBemA(int a, int b) {
	if (a < 0 || b < 0 || b > 9) // flag se (a) e (b) for negativo e (b) com mais de 1 digito
	   return -1;
	else
	    if (a < 10)
	       if (a == b)
	           return 1;
	        else
	           return 0;
	    else
	        if (a % 10 == b)
	            return 1 + quantidadeBemA(a/10, b);
	        else
	            return quantidadeBemA(a/10, b);
}