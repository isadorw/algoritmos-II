#include <stdio.h>
#include <math.h>
 
int temraiz (int a, int b, int c);
 
int main () {
  int num1, num2, num3;
 
  printf("Digite um valor para (a): ");
  scanf("%d", &num1);
  printf("Digite um valor para (b): ");
  scanf("%d", &num2);
  printf("Digite um valor para (c): ");
  scanf("%d", &num3);
 
  if (temraiz(num1, num2, num3))
    printf("Existem raizes!");
  else
    printf("Nao existem raizes!");
 
  return 0;
}
 
int temraiz (int a, int b, int c) {
  int delta, raiz1, raiz2;
  
  delta = pow(b, 2) - 4 * a * c;
  return delta >= 0;
}