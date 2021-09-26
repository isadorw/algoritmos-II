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
    int cont = 0;

    arqf = fopen("funcionaros.dat", "wb");

    if (arqf != NULL) {
        for (cont = 0; cont <MINP; cont++) {
            // leitura dos campos de um funcionario
            printf("Codigo: ");
            scanf("%d", &func.codigo);
            printf("Nome: ");
            scanf("%s", &func.nome); // tudo que o usuario digitar ate dar enter corresponde ao nome
            printf("Salario: ");
            scanf("%f", &func.salario);
            printf("Funcao: ");
            scanf("%s", &func.funcao);
            
            // deslocamento de posicao do cursor no arquivo
			fseek(arqf, (func.codigo - 1)*sizeof(TFuncionario), SEEK_SET);
            // gravar no arquivo binario
            fwrite(&func, sizeof(TFuncionario), 1, arqf);
        }
    }

    fclose(arqf);
}