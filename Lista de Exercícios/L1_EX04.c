#include <stdio.h>

int main() {
    char op;
    int a, b;
    float result;
    
    printf("Selecione um dos operadores (+, -, *, /) para realizar a operacao: ");
    scanf("%c", &op);
    printf("Insira o primeiro numero: ");
    scanf("%d", &a);
    printf("Insira o segundo numero: ");
    scanf("%d", &b);
    
    if (op == '+') {
    	result = a + b;
    	printf("Adicao = %.0f", result);
	}
	
	else if (op == '-') {
		result = a - b;
    	printf("Subtracao = %.0f", result);
	}
	
	else if (op == '*') {
		result = a * b;
    	printf("Multiplicacao = %.0f", result);
	}
	
	else if (op == '/') {
		
		result = a / b;
    	printf("Divisao = %.0f", result);
	}
	else {
		printf("\n Voce inseriu as entradas erradas");
	}
    return 0;
}