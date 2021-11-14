// l1ex9

#include <stdio.h>

int main() {
  int M[5][5], i = 0, j =0, qtdpar = 0;

  for (i = 0; i < 5; i++) {
    for (j = 0; j < 5; j++) {
      scanf("%d", &M[i][j]);
    }
  }

  for (i = 0; i < 5; i++) {
    for (j = 0; j < 5; j++) {
      if (M[i][j] % 2 == 0) {
        qtdpar += 1;
      }
    }
  }

  printf("\n\nQuantidade de pares: %d", qtdpar);
  
  return 0;
}