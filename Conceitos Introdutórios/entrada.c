// exemplo de comando de entrada
#include <stdio.h>

int main() // função principal
{
	int m;
	float valor;
	double porcentagem;
	char genero;
	
	printf("Digite um valor inteiro: ");
	scanf("%d", &m);
	printf("Digite um valor float: ");
	scanf("%f", &valor);
	printf("Digite um valor double: ");
	scanf("%lf", &porcentagem);
	printf("Digite um caractere: ");
	scanf("%c", &genero);
	
	return 0;
}