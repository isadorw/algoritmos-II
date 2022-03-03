#include <stdio.h>
#include <stdlib.h>

/*
* Escreva um algoritmo que exclua os comentários de um programa
* escrito em uma linguagem onde estes são escritos entre {}.

** arqutivo tipo texto.

*** arq1: leitura (r = read)
*** arq2: escrita (w = write)
*/

int main(){
    char caracter;
    int inicio = 1;

    // declaração de arquivo + abertura
    FILE *arq1 = fopen("codfont.txt", "r"); // cod fonte original
    FILE *arq2; // cod fonte sem comentários

    // verficar se realmente foi aberto
    if (arq1 == NULL) // erro de abertura
        printf("Erro na abertura do arquivo.");
    else {
        arq2 = fopen("codfont2.txt", "w");
        // leitura de caractere e verificando se ja chegou no fim do arquivo
        while (fscanf(arq1, "%c", &caracter) != EOF) {
            if (caracter == '{' && inicio == 1)
                inicio = 0;
            else
                if (inicio == 0) {
                    if (caracter == '}')
                        inicio = 1;
                }
                else
                    fprintf(arq2, "%c", caracter);
        }
        fclose(arq1);
        fclose(arq2);
    }
    return 0;
}