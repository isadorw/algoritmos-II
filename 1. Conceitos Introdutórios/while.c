// estrutura de repeticao: while
#include <stdio.h> // bib funçoes entrada e saida

int main() // função principal
{
	int x=1, y=5;
	while (x < y)
	{
		printf("X = %d e Y = %d \n", x, y);
		x = x + 2;
		y++; // y recebe y + 1	
	}	
	printf("Fim do laço\n");
	printf("X = %d e Y = %d \n");
	
	return 0;
}