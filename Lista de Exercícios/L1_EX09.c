#include <stdio.h>

int main() {
    int i, j, cont = 0, par = 0;
    int M[3][3];

    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++){
            scanf("%d", &M[i][j]);
        if (M[i][j] % 2 == 0) {
			par++;	
		}
	}
	printf("Quantidade de pares: %d", par);

}