/* 
0503 PONTEIROS EM C
*/


#include <stdio.h>
#include <stdlib.h> // function malloc

int main () {
  int *pNum, *pNumAux, i;

  pNumAux = NULL; // ponteiro auxilicar inicia vazia
  
  // alocando memoria em pNum
  pNum = (int *) malloc(sizeof(int) *8 ); // vetor de 8 posicoes

  if (pNum != NULL) {
    pNumAux = pNum; // ponteiro auxiliar recebe pNum
    // processamento
    for (i = 0; i < 4; i++) {
      pNum[i] = i + 1;
      pNumAux[4 + i] = i + 5; // p aux comeca a partir de 5
    }
    // mostrando na tela
    for (i = 0; i < 4; i++) 
      printf("pNum = %d - pAux = %d \n", pNum[i], pNumAux[4 + i]);

    free(pNumAux); // como pNumAux e pNum possuem o mesmo endereco, entao pode-se usar qualquer um dos ponteiros para liberar a memoria
  }
}