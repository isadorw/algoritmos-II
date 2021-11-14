#include <stdio.h>
#include <stdlib.h>

int main () {
	int valor1, valor2, resultado;
	char operador;

	printf("Digite o primeiro valor: ");
	scanf("%d", &valor1);
	setbuf(stdin, NULL);

	printf("Digite a operacao (+ - * /): ");
	scanf("%c", &operador);
	setbuf(stdin, NULL);

	printf("Digite o segundo valor: ");
	scanf("%d", &valor2);
	setbuf(stdin, NULL);

	if (operador == '+') {
		resultado = valor1 + valor2;
	}
	else if (operador == '-') {
			resultado = valor1 - valor2;
	}
	else if (operador == '*') {
		resultado = valor1 * valor2;
	}
	else if (operador == '/') {
		resultado = valor1 / valor2;
	}
	else {
		printf("Operador invalido!\\n");
	}

	printf("O resultado da operacao e: %d", resultado);

	return 0;
}