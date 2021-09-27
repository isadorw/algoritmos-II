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
    
    // alocando memoria em pEst
    pEst = (TAluno *) malloc(sizeof(TAluno)); 

    if (pEst != NULL) {
      (*pEst).rga = 2020199187064;
      pEst->rga = 2020199187064; // pEst aponta para rga
    } else {
      printf("Nao foi possivel alocar a memoria");
    }
    
}