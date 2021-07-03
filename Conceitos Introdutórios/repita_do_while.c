// estrutura de repeticao: while
#include <stdio.h> // bib funçoes entrada e saida

int main() // função principal
{
	int X, Y;
	X = 1;
	Y = 5;
	
	do {
		X = X + 2;
		Y = Y + 1;
	} while (X < Y);
	
	printf("Valor de X: %d\n", X);
	printf("Valor de Y: %d\n", Y);
	
	return 0;
}