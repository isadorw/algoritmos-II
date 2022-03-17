#include <stdio.h>
#include <stdlib.h>

/*
** arquivo tipo binário.

*** usar [] quando não sabemos o tamanho da cadeia
*/
void criaarq(char nomearq[]);
int invertendo(char nomearq1[], char nomearq2[], int qtd);

int main(){
    char nome[] = "lista1.dat";
    char nome2[] = "lista2.dat"; // arquivo numero 2 a ser invertido
    int num = 5; // número inteiro correspondendo a quantidade de elementos contidos no primeiro arquivo

    criaarq(nome);

    if (invertendo(nome, nome2, num) == 0)
        printf("Verdadeiro");
    else
        printf("Falso");

    return 0;
}

int invertendo(char nomearq1[], char nomearq2[], int qtd) {
    float x;

    FILE *arq1 = fopen(nomearq1, "rb");
    FILE *arq2 = fopen(nomearq2, "wb");

    if (arq1 == NULL)
        return 1;
    else {

        // aqui eu inverteria e passaria para o arquivo numero 2 mas nao deu tempo de terminar :(
        
        fclose(arq);
        return 0;
    }
}

void criaarq(char nomearq[]) { // cria o arquivo 1 inserindo os numeros 1.5, 8, 48.9, 7.5 e 12
    float x = 1;

    FILE *f = fopen(nomearq, "wb");

    if (f == NULL)
        printf("Erro para criar o arquivo!\n");
    else
        printf("Digite os numeros (0 para sair):\n");
        scanf("%f", &x);
        while (x != 0) {
            fwrite(&x, sizeof(float), 1, f);
            scanf("%f", &x);
        }
        fclose(f);
}

/*
-> abrir 2 arquivos binarios
-> colocar o nome fisico em cada string
-> passar 3 param em uma função logica param1 (string 1), param2 (string2), param3 (numero de elementos no arq binario 1)
-> dentro da função inverter os numeros, armazenando no segundo arquivo
-> fechar arquivos binarios
*/