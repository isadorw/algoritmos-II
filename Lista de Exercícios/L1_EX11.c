// l1ex11

#include <stdio.h>
#include <math.h>

int main() {
  struct ponto_coord {
    float x;
    float y;
  };

  struct ponto_coord ponto1, ponto2;
  float distancia;

  printf("Insira os valores do ponto A (x1, x2): ");
  scanf("%f %f", &ponto1.x, &ponto2.x);
  printf("Insira os valores do ponto B (y1, y2): ");
  scanf("%f %f", &ponto1.y, &ponto2.y);

  distancia = pow(ponto2.x - ponto1.x,2) + pow(ponto2.y - ponto1.y,2); 

  printf("A distancia entre os dois pontos eh: %.0f", sqrt(distancia));
  

  return 0;
}