/* 
0503 PONTEIROS EM C
> entender o funcionamento das variaveis apontadoras.
*/

// declaracao de uma variavel do tipo TAluno

#include <stdio.h>
#include <stdlib.h> // function malloc

typedef struct TAluno {
    char nome[30];
    int rga;
    char curso [50];
} TAluno;

int main () {
    // declaracao de variaveis
    int *pNum;
    TAluno *pEst;

    // alocando espaco p/ usar um vetor com 20 posicoes
    pNum = (int *) malloc(sizeof(int) * 20); // variavel a ser alocada = (tipo *) malloc(sizeof(tipo) * qtd de posicoes)
    
    // verificando se a alocacao obteve sucesso para pNum
    if (pNum == NULL) 
        printf("Problemas!!!!");
    else
        printf("Ok!\n");

    // alocando espaco para um registro
    pEst = (TAluno *) malloc(sizeof(TAluno));

    // verificando se a alocacao obteve sucesso para registro pEst
    if (pEst == NULL) 
        printf("Problemas!!!!");
    else
        printf("Ok!\n");

    // liberacao de memoria
    free(pNum);
    free(pEst);
}