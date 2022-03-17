/* 
0503 PONTEIROS EM C
> function malloc que solicita alocacao de um espaco continuo da memoria
*/
#include <stdio.h>
#include <stdlib.h> // funcao malloc

int main () {
    int *p; // ponteiro
    
    // alocao de memoria
    p = (int*) malloc(sizeof(int)); // variavel a ser alocada = (tipo*) malloc(sizeof(tipo));

    // VERIFICANDO SE A ALOCACAO OBTEVE SUCESSO

    if (p == NULL) 
        printf("Problemas!!!!");
    else
        printf("Ok!");

    // LIBERACAO DO ESPACO ALOCADO

    free(p);
}