// questao 2; letra a; versao sem recursividade

#include <stdio.h>

float somaserie1(float); // prototipo

int main() // programa principal
{
	int i;
	float soma, num; // var globais
	
	// entrada de dados
	printf("Digite um numero inteiro para N: ");
	scanf("%f",&num);
	
	// resultado da soma da serie P por passagem de parametro
	printf("\nSoma da serie P = %.2f\n", somaserie1(num));
	
	return 0;
}

float somaserie1(float n) { // funcao
	float soma;
	int i;
	
	soma = 0.0f;
	
	for(i = 1; i <= n; i++)
		soma = soma + ((float)i/(float)(2 * i -1));
	return soma;
}




// questao 2; letra b versao recursiva

#include <stdio.h>

float somaserie2(float); // prototipo

int main() // programa principal
{
	int i;
	float soma, num;
	
	// entrada de dados
	printf("Digite um numero inteiro para N: ");
	scanf("%f", &num);
	
	// resultado da serie P + passagem de parametro
	printf("\nSoma da serie P = %.2f\n", somaserie2(num));
	
	return 0;
}

float somaserie2(float n) { // funcao
	float soma;
	int i;
	
	soma = 0.0f;
	
	// processamento
	if (n > 0) {
		soma = soma + ((float)n/(float)(2 * n -1));
		return soma + somaserie2(n - 1);
	}
	else 
		return 0;

}