#include <stdio.h>

/*
* Faça um programa que leia as informações
* de nome, idade e salário de 4 pessoas e salve
* em um arquivo chamado dados.txt
*/

// #define <nome_da_constane> <valor>

#define MAXP 4
#define DELIMITADOR '#'

typedef struct {
    char nome[50];
    int idade;
    float salario;
} TPessoas;

int main(){
    TPessoas pessoa[MAXP];
    int cont = 0;

    FILE *arqpessoas;

    while (cont < MAXP) {
        printf("Nome: ");
        scanf("%s", &pessoa[cont].nome);
        printf("Idade: ");
        scanf("%d", &pessoa[cont].idade);
        printf("Salario: ");
        scanf("%f", &pessoa[cont].salario);
        cont++;
    }

    arqpessoas = fopen("dados.txt", "w");

    for (cont = 0; cont < MAXP; cont++) {
        fprintf(arqpessoas, "%s", pessoa[cont].nome);
        fprintf(arqpessoas, "%c", DELIMITADOR);
        fprintf(arqpessoas, "%d", pessoa[cont].idade);
        fprintf(arqpessoas, "%c", DELIMITADOR);
        fprintf(arqpessoas, "%f", pessoa[cont].salario);
        fprintf(arqpessoas, "%c", DELIMITADOR);
    }

    fclose(arqpessoas);

    return 0;
}
