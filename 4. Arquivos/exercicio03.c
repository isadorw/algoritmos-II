#include <stdio.h>

/*
* Preencher dados de tres funcionarios (arquivo binario).
*/

#define MINP 3

typedef struct {
    int codigo;
    char nome[35];
    //char end[45];
    float salario;
    char funcao[30];
} TFuncionario;

int main(){
    TFuncionario func;
    int cont = 0;

    FILE *arqf;
    arqf = fopen("funcionarios.dat", "wb");

    if (arqf != NULL) {
        for (cont = 0; cont < MINP; cont++) {
            printf("Codigo: ");
            scanf("%d", &func.codigo);
            printf("Nome: ");
            scanf("%s", &func.nome);
            printf("Salario: ");
            scanf("%f", &func.salario);
            printf("Funcao: ");
            scanf("%s", &func.funcao);

            // <int fseek (FILE * fluxo, int deslocamento, int origem);>  
            fseek(arqf, (func.codigo - 1) * sizeof(TFuncionario), SEEK_SET);

            fwrite(&func, sizeof(TFuncionario), 1, arqf);
        }
    }

    fclose(arqf);
    return 0;
}