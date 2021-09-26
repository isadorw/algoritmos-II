// questao 1
#include <stdio.h>

void multiplos(int, int, int); // cabecalho subp prototipo para reconhecimento

void main() {
    int x, y, z;

    // entrada de dados
    printf("Digite o primeiro numero inteiro: \n");
    scanf("%d", &x);
    printf("Digite o segundo numero inteiro: \n");
    scanf("%d", &y);
    printf("Digite o terceiro numero inteiro: \n");
    scanf("%d", &z);
		
    // passagem de parametros
    multiplos(x, y, z);
    
}


void multiplos(int a, int b, int m) { // procedimento
    int i, resultado; // var locais
    
    printf("\nResultado dos multiplos entre o primeiro e segundo numero: \n");
    
    if (a < b) {
        for (i = a; i<= b; i++) {
            if (i % m == 0) {
                printf("%d\n", i);
            }
        }
    }
    else {
        for (i = b; i<= a; i++) { // se b > a
            if (i % m == 0) {
                printf("%d\n", i);
            }
        }	
	}
}

// p calcular multiplos entre percorrendo dois valores eh preciso colocar a e b em ordem crescente