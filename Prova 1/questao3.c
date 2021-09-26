// questao 3

#include <stdio.h>

int serie3(int); // prototipo

void main() { // programa principal
    int num; // var global

    // entrada de dados
    printf("Digite um valor inteiro: ");
    scanf("%d", &num);

    // passagem de parametro e resultado
    printf("\nResultado da serie S = %d", serie3(num)); // PS: por testes o resultado da soma de S da valores decimais mas deixei como pedido no exercicio
}

// S = 2 + 5/2 + 10/3 + ... + (1 + n^2)/n 
int serie3(int n) { // funcao
    int i, soma; // var locais

    soma = 0;
    
    // processamento de dados por recursividade
    if (n > 0) {
        soma = soma + (1 + (n * n)) / n;
        return soma + serie3(n - 1);
    }
    else {
        return 0;
    }
}