#include <stdio.h>
#include <stdlib.h>

/*
* Gere um arquivo funcionario, em que cada registro armazene o código do funcionário
* (inteiro entre 1 e 140), seu nome (35 caracteres), endereço (45 caracteres), salário (real)
* e função (30 caracteres), com no mínimo 10 funcionários, tendo pelo menos 3 com a função de gerente.
* O acesso ados dos funcionários será feito com base no seu código, utilizando acesso direto. Os
* dados de um funcionários estão da posição do seu código.

** registros só da para usar com arquivo binario.
** arquivo tipo binário.
*/

// define minimo de funcionarios = 10
#define MINF 10

typedef struct {
    int codigo; // codigo de funcionario (inteiro entre 1 e 140)
    char nome[35];
    char endereco[45];
    float salario;
    char funcao[30];
} TFuncionario;

int main(){
     TFuncionario func;
     int cont = 0;

     FILE *arqf;

     arqf = fopen("funcionarios.dat", "wb");
     
     if (arqf != NULL) {
        for (cont = 0; cont < MINF; cont++) {
            // Leitura dos dados do funcionario a partir do usuário
            printf("Funcionario %d\n\n", cont);

            printf("Codigo: ");
            scanf("%d", &func.codigo);
            printf("Nome: ");
            scanf("%s", &func.nome);
            printf("Endereco: ");
            scanf("%s", &func.endereco);
            printf("Salario: R$ ");
            scanf("%f", &func.salario);
            printf("Funcao: ");
            scanf("%s", &func.funcao);

            // Deslocamento do cursor para a posição desejada
            fseek(arqf, sizeof(TFuncionario)*(func.codigo-1), SEEK_SET);
            // Gravando os dados do funcionario no arquivo
            fwrite(&func, sizeof(TFuncionario), 1, arqf);
        }
        fclose(arqf);
     }
    return 0;
}