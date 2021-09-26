// versao da professora

#include <stdio.h>

void multiplos(int, int, int);

void main () { // programa principal
    multiplos(5, 20, 3);
    multiplos(20, 5, 3);
}

void multiplos(int i1, int i2, int x) {
    int num;
    printf("\nOs multiplos sao: \n");
    if (i1 < i2) { // indica ordem crescente num++
        for (num = i1; num <= i2; num++) {
            if (num % x == 0) { // num percorre entre n1 ate n2 / x (multiplo)
                printf("%d\n", num);
            }
        }
    }
    else {
        for (num = i1; num >= i2; num--) {
            if (num % x == 0) {
                printf("%d\n", num);
            }
        }
    }
}


// versao com leitura 

#include <stdio.h>

void multiplos(int, int, int);

void main () { // programa principal
	int a, b, c;
	
	// leitura dos dados
	printf("Digite dois inteiros para A e B: \n");
	scanf("%d %d", &a, &b);
	printf("Digite o numero do multiplo: \n");
	scanf("%d", &c);
	
	multiplos(a, b, c);
	
}

void multiplos(int i1, int i2, int x) {
    int num;
    printf("\nOs multiplos sao: \n");
    if (i1 < i2) { // indica ordem crescente num++
        for (num = i1; num <= i2; num++) {
            if (num % x == 0) { // num percorre entre n1 ate n2 / x (multiplo)
                printf("%d\n", num);
            }
        }
    }
    else {
        for (num = i1; num >= i2; num--) {
            if (num % x == 0) {
                printf("%d\n", num);
            }
        }
    }
}