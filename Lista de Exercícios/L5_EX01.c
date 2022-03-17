#include <stdio.h>
#include <stdlib.h>

/* L5EX01

Faça o algoritmo de uma função lógica que inclua um elemento
no final de uma lista.

    foi feita também a versão sem ser função lógica.
*/

struct elemento {
    int info;
    struct elemento *prox;
}; typedef struct elemento no;

no* inserefimlog (no *lst, int val) {
    no *novo = (no*) malloc (sizeof(no));
    no *aux = lst; // aqui ao inves de receber NULL como na aula tive que receber a cabeça da lista para imprimir todos os elementos no final da lista

    if (novo == NULL) {
        return 0; // erro
    } else {
        novo->info = val;
        novo->prox = NULL;

        if (lst == NULL) {
            lst = novo;
        } else {
            while (aux->prox != NULL) {
                aux = aux->prox;
            }
            aux->prox = novo;
        }
        return 1;
    }
}

no* inserefim (no *lst, int val) {
    no *novo = (no*) malloc (sizeof(no));
    no *aux = lst; // aqui ao inves de receber NULL como na aula tive que receber a cabeça da lista para imprimir todos os elementos no final da lista

    if (novo != NULL) {
        novo->info = val;
        novo->prox = NULL;

        if (lst == NULL) {
            lst = novo;
        } else {
            while (aux->prox != NULL) {
                aux = aux->prox;
            }
            aux->prox = novo;
        }
        return lst;
    }
}

void imprimelista (no *lst) {
    no *aux;

    for (aux = lst; aux != NULL; aux = aux->prox) {
        printf("Numero: %d\n", aux->info);
    }
}

int main() {
    no* lst = NULL;

    // função sem ser logica

    lst = inserefim(lst, 1);
    lst = inserefim(lst, 2);
    lst = inserefim(lst, 3);
    lst = inserefim(lst, 4);
    lst = inserefim(lst, 5);

    imprimelista(lst);

    // função logica

    if (inserefimlog(lst, 1) == 0)
        printf("\n\nErro na alocacao de memoria!");
    else 
        printf("Elemento alocado no final da lista com sucesso");

    return 0;
}