// l1ex12

#include <stdio.h>

struct data {
   int dia;
   int mes;
 };

 struct aniversariantes {
   char nome [50];
   struct data aniversario;
 };

int main() {
  struct aniversariantes mural[4];
  int i;

  for (i = 0; i < 4; i++) {
    printf("Informe seu nome: ");
    scanf("%s", &mural[i].nome);

    printf("Informe o dia do seu aniversario: ");
    scanf("%d", &mural[i].aniversario.dia);

    printf("Informe o numero do mes do seu aniversario: ");
    scanf("%d", &mural[i].aniversario.mes);
  }

  printf("\n\n\n----------------------------");
  printf("\n\nANIVERSARIANTES DE CADA MES:\n\n");
  printf("----------------------------\n\n\n");

  printf("JANEIRO\n\n");
  for (i = 0; i < 4; i++) {
    if (mural[i].aniversario.mes == 1) {
      printf("Nome: %s - Data: %d/%d\n", mural[i].nome, mural[i].aniversario.dia, mural[i].aniversario.mes);
    }
  }

  printf("\n\nFEVEREIRO\n\n");
  for (i = 0; i < 4; i++) {
    if (mural[i].aniversario.mes == 2) {
      printf("Nome: %s - Data: %d/%d\n", mural[i].nome, mural[i].aniversario.dia, mural[i].aniversario.mes);
    }
  }

  printf("\n\nMARCO\n\n");
  for (i = 0; i < 4; i++) {
    if (mural[i].aniversario.mes == 3) {
      printf("Nome: %s - Data: %d/%d\n", mural[i].nome, mural[i].aniversario.dia, mural[i].aniversario.mes);
    }
  }

  printf("\n\nABRIL\n\n");
  for (i = 0; i < 4; i++) {
    if (mural[i].aniversario.mes == 4) {
      printf("Nome: %s - Data: %d/%d\n", mural[i].nome, mural[i].aniversario.dia, mural[i].aniversario.mes);
    }
  }

  return 0;
}