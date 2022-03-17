#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
* arquivo tipo texto
*/

int removendo_espacos(FILE* arquivo);

int main() {
    FILE *input = fopen("input.txt", "r");

    if (removendo_espacos(input) == 0)
        printf("Verdadeiro");
    else
        printf("Falso");


    return 0;
}


int removendo_espacos(FILE* arquivo) {
    int i, tam, j = 0;
    char texto[200], resultado[200];

    FILE *output;

    fscanf(arquivo,"%200[^\0]", texto);

    tam = strlen(texto);

    if (arquivo == NULL) { // erro de abertura
        printf("Erro na abertura do arquivo input.txt !");
        return 1;
    } else {
        for (i = 0; i < tam; i++){
            if (texto[i] != ' '){
                resultado[j] = texto[i];
                if (texto[i + 1]== ' '){
                    j++;
                    resultado[j]= ' ';
                }
                j++;
                resultado[j] = '\0';
            }
        }
        output = fopen("output.txt", "w");
        fprintf(output, resultado);
        return 0;
    }
    fclose(arquivo);
    fclose(output);
}
