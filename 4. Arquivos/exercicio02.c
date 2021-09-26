#include <stdio.h>

#define MAXP 4
#define DELIMITADOR '#'

typedef struct{
	char nome[50];
	int idade;
	float salario;
} TPessoas;

void main() {
	TPessoas infop[MAXP];
	int i = 0;
	FILE *arqp; // criação do arquivo (apelido)
	float media = 0;

    arqp = fopen("dados.txt", "r");

    for (i = 0; i < MAXP; i++) {
        fscanf(arqp, "%[^#]s", &infop[i].nome); // [^#] vai ler a primeira string ate chegar na #
        fscanf(arqp, "#%d", &infop[i].idade);
        fscanf(arqp, "#%f", &infop[i].salario);

        media = media + infop[i].salario;
    }
	fclose(arqp);
    media = media / MAXP;
    printf("A media dos salarios eh %.2f", media);
}