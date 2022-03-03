#include <stdio.h>
#include <stdlib.h>

/*
* Faça o algoritmo de uma função lógica que receba o nome
* de um arquivo de reais e devolva, em uma variável real passada
* como parâmetro por referência, o maior valor nele contido. A função deve
* retornar VERDADEIRO, se, e apenas se, o arquivo exista e haja valor a ser devolvido.

** arquivo tipo binário.

*** usar [] quando não sabemos o tamanho da cadeia
*/

int maior_valor(char nomearq[], float *maior);
void criaarq(char nomearq[]);

int main(){
    char nome[] = "arqnumerosreais.dat";
    float num;

    criaarq(nome);

    if (maior_valor(nome, &num))
        printf("O maior valor eh %f", num);
    else
        printf("Erro na leitura dos dados!");

    return 0;
}

int maior_valor(char nomearq[], float *maior) {
    float x;

    FILE *arq = fopen(nomearq, "rb");

    if (arq == NULL)
        return 0;
    else {
        if (!fread(&x, sizeof(float), 1, arq))
            return 0;
        else {
            *maior = x;
            while (fread(&x, sizeof(float), 1, arq))
                if (x > *maior)
                    *maior = x;
        }
        fclose(arq);
        return 1;
    }
}

void criaarq(char nomearq[]) {
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