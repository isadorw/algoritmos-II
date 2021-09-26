#include <stdio.h>

int main() {
    float num[21];
    int i = 1, j = 1, troca, x = 1;
    for (i = 1; i <= 21; i++) {
        scanf("%f", &num[i]);
    }
    // metodo bubble
    for (i = 1; i <= 21; i++) {
    	for (j = i + 1; j <= 21; j++) {
    		if (num[j] < num[i]) {
    			troca = num[i];
    			num[i] = num[j];
    			num[j] = troca;
			}
		}
	}
	
	printf("Mediana: %.0f", num[11]); 
}