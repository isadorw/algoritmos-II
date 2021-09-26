#include <stdio.h>

#define max 100

typedef struct{
    int codigo;
    char desc[35];
    float valor;
} CadastroProdutos;

void main() {
    CadastroProdutos cadastro;
    FILE *arq;
    int cont = 1;

    // abertura do arquivo
    arq = fopen("produtos.dat", "wb");
	
	printf("------- Cadastro de Produtos -------\n\n");
    if (arq != NULL) {
        for (cont = 1; cont <= max; cont++) {
            printf("\nInsira os dados do produto %d: \n\n", cont);
            printf("Codigo: ");
            scanf("%d", &cadastro.codigo);
            printf("Descricao: ");
            scanf("%s", &cadastro.desc);
            printf("Valor R$ ");
            scanf("%d", &cadastro.valor);
             // deslocamento de posicao do cursor no arquivo
			fseek(arq, (cadastro.codigo)*sizeof(CadastroProdutos), SEEK_SET);
            // gravar no arquivo binario
            fwrite(&cadastro, sizeof(CadastroProdutos), 1, arq);
        }
    }
    fclose(arq);
}