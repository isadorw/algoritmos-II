#include <string.h>

int qtdB(int a, int b);

int main () {
    int a, b;

    printf("a: ");
    scanf("%d",&a);
    printf("b: ");
    scanf("%d",&b);

    printf("A quantidade de b em a eh %d", qtdB(a , b));

    return 0;
}

int qtdB(int a, int b){
	if (a < 0 || b < 0 || b > 9)
	   return -1; // erro de entrada
	else
	    if (a < 10)
	       if (a == b)
	           return 1;
	        else
	           return 0;
	    else
	        if (a % 10 == b)
	            return 1 + qtdB(a / 10, b);
	        else
	            return qtdB(a / 10, b);
}