#include <stdio.h>

int main() {
    int i, j, x, aux = 0;
    int M[3][3];
	
	printf("Informe um valor inteiro para busca na matriz3x3: ");
	scanf("%d",&x);
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++){
            scanf("%d", &M[i][j]);
	}
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++){
		if (M[i][j] == x) {
        	printf("Numero %d localizado em M[%d][%d]\n", x, i, j);
            aux = 1;
		}
	}
    if (aux == 0) {
        printf("Numero %d nao encontrado!", x);
    }
}