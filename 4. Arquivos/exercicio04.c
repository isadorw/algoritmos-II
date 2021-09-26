/*A partir dos dados armazaenados no arquivo funcionario,
gere um relatorio que liste o nome e o salario dos funcionarios
cuja funcao eh "gerente".*/

#include <stdio.h>

#define MINP 3 // exerc pede 10

typedef struct{
    int codigo;
    char nome[35];
    //char end[45];
    float salario;
    char funcao[30];
} TFuncionario;

void main() {
    TFuncionario func;
    FILE *arqf;
    int cont = 1;

    arqf = fopen("funcionaros.dat", "rb");

    while(!feof(arqf)) {
        fread(&func, sizeof(TFuncionario), 1, arqf); // funcao de leitura
        if (func.codigo == cont) {
                printf("Codigo: %d\n", func.codigo);
                printf("Nome: %s\n",func.nome);
                printf("Salario: %.2f\n", func.salario);
                printf("Funcao: %s\n", func.funcao);
        }
        cont++;
    }


    fclose(arqf);
}