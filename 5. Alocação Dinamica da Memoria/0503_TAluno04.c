/* 
0503 PONTEIROS EM C
>
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
    int *pNum, n, i;
    TAluno *pEst;
    n = 100;

    // alocando memoria em pNum
    pNum = (int *) malloc(sizeof(int) * n); // pNum vetor com 100 posicoes

    if (pNum != NULL) {
        for (i = 0; i < n; i++)
            scanf("%d", &pNum[i]);
    } else {
      printf("Nao foi possivel alocar a memoria");  
    } 
    
    // alocando memoria em pEst

    pEst = (TAluno *) malloc(sizeof(TAluno) *50); // vetor com 50 posicoes

    if (pEst != NULL) {
        pEst[2].rga = 123456;
        printf("RGA: %d", pEst[2].rga);
    } else {
      printf("Nao foi possivel alocar a memoria");
    }
}