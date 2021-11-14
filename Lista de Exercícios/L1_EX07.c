// l107
#include <stdio.h>

int main() {
    float num[21];
    int i = 0, j = 0, troca;
    for (i = 0; i < 21; i++) {
        scanf("%f", &num[i]);
    }
    // metodo bubble
    for (i = 0; i < 21; i++) {
      for (j = i; j < 21; j++) {
        if (num[j] < num[i]) {
          troca = num[i];
          num[i] = num[j];
          num[j] = troca;
      }
    }
  }
  
  printf("Mediana: %.0f", num[10]); 
  return 0;
}