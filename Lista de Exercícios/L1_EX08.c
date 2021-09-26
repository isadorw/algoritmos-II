#include <stdio.h>

int main() {
    int i = 1, x[150];
    
    // leitura do vetor
    for (i = 1; i <= 150; i++) {
        scanf("%d", &x[i]);
    }
    // pares || lista somente aqueles que forem pares
    for (i = 1; i <= 150; i++) {
	    if (x[i] % 2 == 0) {
	        printf("%d\n", x[i]);
    	}
    }
    // impares || lista somente aqueles que forem impares
    for (i = 1; i <= 150; i++) {
	    if (x[i] % 2 != 0) {
	    	printf("%d\n", x[i]);
    }
    }
}