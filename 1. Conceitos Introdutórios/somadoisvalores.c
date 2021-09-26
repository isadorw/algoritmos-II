// informa soma de dois valores lidos
#include <stdio.h> // bib funçoes entrada e saida
#include <stdlib.h> // bib funçoes de controle de video
#include <math.h> // bib de funçoes matematicas

int main() // função principal
{
	float valor1, valor2, soma;
	printf("\nForneca os dois valores a serem somados: ");
	scanf("%f %f", &valor1, &valor2); // leitura dos valores
	soma = valor1 + valor2; // calculo da soma
	printf("\nSoma dos dois valores: %8.2f\n", soma); // saida
	system("pause");
	return 0; // valor devolvido
	
}