// l1ex8

#include <stdio.h>

int main() {
  int x[150], i = 0;

  for (i = 0; i < 150; i++) {
    scanf("%d", &x[i]);
  }

  printf("\n\nPARES: \n\n");
  for (i = 0; i < 150; i++) {
    if (x[i] % 2 == 0) {
      printf("%d\n", x[i]);
    }
  }

  printf("\n\nIMPARES: \n\n");
  for (i = 0; i < 150; i++) {
    if (x[i] % 2 != 0) {
      printf("%d\n", x[i]);
    }
  }

  return 0;
}