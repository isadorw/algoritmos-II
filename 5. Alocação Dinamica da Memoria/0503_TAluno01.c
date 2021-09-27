/* 
0503 PONTEIROS EM C
> entender o funcionamento das variaveis apontadoras.
*/

// declaracao de uma variavel do tipo TAluno

#include <stdio.h>

typedef struct TAluno {
    char nome[30];
    int rga;
    char curso [50];
} TAluno;

int main () {
    // declaracao de variaveis, 3 primeiras sao ponteiros
    int *pNum;
    char *pNome;
    TAluno *pEst;
    int valor;

    valor = 45;
    pNum = &valor; // ponteiro pNum recebe endereco da variavel valor
    
    printf("%d", *pNum); // imprime 45
}