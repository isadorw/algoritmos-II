// o programa e subprograma informa o numero de divisores de um inteiro positivo
// exemplo: 10 (int positivo) tem como divisores -> 1, 2, 5, 10. 4 divisores serao apresentados

#include <stdio.h>

int ndivisores(int); // cabecacho subp prototipo para reconhecimento

int main() {
  int num; // variavel global
  printf("Numero a processar(positivo): ");
  scanf("%d", &num); // ex 90
  if (num > 0)
    printf("Numero %d tem %d divisores", num, ndivisores(num)); // uso do parametro
  else
    printf("Numero invalido");
  return 0;
}

int ndivisores (int numero) // numero vai receber 90 || funcao que calcula a qtd de divisores e inicio do subprog
{
    int i, lim, cont = 1; // variaveis locais / contabiliza o numero 1
    lim = numero / 2; //exceto o proprio, so tem divisores ate a metade do numero
    for (i = 2; i <= lim; i++)
        if (numero % i == 0) // se eh divisor, conta
            cont++;
    if (numero > 1)
        cont++; // contabiliza o proprio numero
    return cont; // devolve o valor e encerra o processamento
}