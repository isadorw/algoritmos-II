// leitura de 2 valores e sua troca
#include <stdio.h> // declaração de bibliotecas

int main () // variavel princiapal
{
int A, B, temp; // declaração das variaveis tipo > nome;
scanf("%d %d", &A, &B); // entrada 
temp = A; // troca de valores
A = B;
B = temp;
printf("%d %d", A, B); // saida
return 0;
}


// leitura de 2 valores inteiros e sua troca sem variavel auxiliar
#include <stdio.h> // declaração de bibliotecas

int main () // variavel princiapal
{
int A, B; 
scanf("%d %d", &A, &B); // entrada 
// troca de valores EX: A = 30 B = 50
A = A + B; // EX: A = 80
B = A - B; // EX: B = 80 - 50 -> B = 30 (trocado)
A = A - B; // EX: A = 80 - 30 -> A = 50 (trocado)
printf("A: %d B: %d", A, B);
}