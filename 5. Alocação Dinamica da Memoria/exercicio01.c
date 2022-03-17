#include <stdlib.h>
#include <stdio.h>

// Solicita um valor ao usuário correspondente a quantidade
// de números a serem inseridos em um vetor e adiciona os
// números em um vetor

int *CriarVetor(int n) { // função:
	int *p = (int*) malloc(n * sizeof(int)); // cria um vetor de acordo com a qtd escolhida pelo usuário
	if (p == NULL) {
	   printf("Falha na alocacao de memoria.");
	   exit(1);
	}
	printf("Vetor alocado!\n"); 
	return p;
}

void ImprimirVetor(int *p, int n) {
	int i;
	for (i = 0; i < n; i++){
	printf ("Vetor[%d] = %d\n", i, p[i]);
	}
}

void LimparMemoria(int *p){
	free(p);
}

int main () {
	int n, j, *vetor, i;

	printf ("Digite um valor: ");
	scanf ("%d", &n);

	vetor = CriarVetor(n);

	printf ("Prencha o vetor: \n");
	for (i = 0; i < n; i++){
		scanf("%d", &vetor[i]); 
	}

	ImprimirVetor(vetor, n);
	LimparMemoria(vetor);
	 
   return 0;
}