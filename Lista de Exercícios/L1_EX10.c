// l1ex10

#include <stdio.h>

int main() {
  int M[3][3], i = 0, j = 0, num, aux = 0;

  printf("Insira um numero para buscar na matriz: ");
  scanf("%d", &num);

  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      scanf("%d", &M[i][j]);
    }
  }

  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      if (M[i][j] == num) {
        printf("NUMERO %d ENCONTRADO EM M[%d][%d]!!", num, i + 1, j + 1);
        aux = 1;
      } 
    }
  }

  if (aux == 0) {
    printf("NUMERO %d NAO ENCONTRADO!!", num);
  }

  return 0;
}