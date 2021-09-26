// REVISÃO PROVA 2

// ex na vida real, cadastro de clientes, cadastro de produtos
// uso da memoria secundaria atraves de arquivos
// SEMPRE abrir e fechar um arquivo
// na maioria dos casos eh usado o arquivo binario
// para entender o que ta escrito no arq binario somente no uso do programa
// feof = end of file
// REGISTRO em C: typedef struct


// faça um programa que leia as informações de nome, idade e salário de 4 pessoas e salve em um arquivo chamado dados.txt

#include <stdio.h>

#define MAXP 4
#define DELIMITADOR '#'

typedef struct{
	char nome[50];
	int idade;
	float salario;
} TPessoas;

void main() {
	TPessoas pessoa[MAXP];
	int cont = 0;
	FILE *arqpessoas; // criação do arquivo (apelido)
	

	// leitura dos dados pelo usuario

	while (cont < MAXP) {
		printf("Nome: ");
		scanf("%s", &pessoa[cont].nome);
		printf("Idade: ");
		scanf("%d", &pessoa[cont].idade);
		printf("Salario: ");
		scanf("%f", &pessoa[cont].salario);
		cont++;	
	}	

	// abertura do arquivo (nome e tipo de abertura)

	arqpessoas = fopen("dados.txt", "w"); // se sem diretorio entao ta armazenado no mesmo diretorio do programa, se nao, tem que colocar o caminho inteiro

	// gravar dados no arquivo
	
	for (cont = 0; cont <MAXP; cont++) {
		fprintf(arqpessoas, "%s", pessoa[cont].nome);
		fprintf(arqpessoas, "%c", DELIMITADOR);
		fprintf(arqpessoas, "%d", pessoa[cont].idade);
		fprintf(arqpessoas, "%c", DELIMITADOR);
		fprintf(arqpessoas, "%f", pessoa[cont].salario);
		fprintf(arqpessoas, "%c", DELIMITADOR);
	}

	// fechamento do arquivo

	fclose(arqpessoas);
}