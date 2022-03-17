#include <stdio.h>
#include <stdlib.h>

/* L5EX01

Faça o algoritmo de um procedimento que exclua de
uma lista de inteiros, todos os elementos que tenham
o mesmo valor passado como parâmetro.
*/

struct elemento {
    int info;
    struct elemento *prox;
}; typedef struct elemento no;

no* insereinicio (no *lst, int val) {
    no *novo = (no*) malloc (sizeof(no));

    // criando elemento e apontando para a cabeça da lista (o inicio)
    novo->info = val;
    novo->prox = lst;

    return novo;
}

void excluirno2 (no* lst, int val) {
    no *atual, *ant;
    atual = lst;

    if (lst == NULL)
        printf("\nLista vazia!");

    ant = NULL;

    while (atual) {
        if (atual->info == val) {
            if (ant == NULL) { // elemento a ser removido se encontra no inicio da lista
                lst = lst->prox; // Atualiza o início da lista
                free(atual);
                atual = lst;
            } else { // remove elemento meio ou final
                ant->prox = atual->prox;
                free(atual);
                atual = ant;
              //  continue;
            }
        }
        ant = atual;
        atual = atual->prox;
    }

    no *aux;
    printf("----------------------------\n");
    printf("Lista DEPOIS de remover num 10:\n");
    for (aux = lst; aux != NULL; aux = aux->prox) {
        printf("Numero: %d\n", aux->info);
    }
    printf("----------------------------\n\n");
}


void imprimelista (no *lst) {
    no *aux;

    for (aux = lst; aux != NULL; aux = aux->prox) {
        printf("Numero: %d\n", aux->info);
    }
}

int main() {
    no* lst = NULL;

    // 1º criando lista de inteiros
    lst = insereinicio(lst, 1); // 2
    lst = insereinicio(lst, 2);
    lst = insereinicio(lst, 3);
    lst = insereinicio(lst, 10);
    lst = insereinicio(lst, 4);
    lst = insereinicio(lst, 10);
    lst = insereinicio(lst, 5);
    lst = insereinicio(lst, 10);

    printf("----------------------------\n");
    printf("Lista ANTES de remover num 10:\n");
    imprimelista(lst);
    printf("----------------------------\n\n");

    // passando como parametro valor a ser excluido

    excluirno2(lst, 10);

    return 0;
}


// no* excluirnofunc(no* lst, int val) {
//     no *ant = NULL;
//     no *p;

//     if (lst != NULL) {
//         ant = lst;

//         if (ant->info == val ) {
//             p = lst;
//             lst = p->prox;
//             free(p);
//         } else {
//             while (ant->prox != NULL && ant->prox->info != val)
//                 ant = ant->prox;
//             if (ant->prox != NULL) {
//                 p = ant->prox;
//                 ant->prox = p->prox;
//                 free(p);
//             }
//         }
//     }
//     return lst;
// }

// void excluirno(no* lst, int val) {
//     no *ant = NULL;
//     no *p;

//     if (lst != NULL) {
//         ant = lst;

//         if (ant->info == val ) { // remove no inicio
//             p = lst;
//             lst = p->prox;
//             free(p);
//         } else {
//             while (ant->prox != NULL && ant->prox->info != val)
//                 ant = ant->prox;
//             if (ant->prox != NULL) {
//                 p = ant->prox;
//                 ant->prox = p->prox;
//                 free(p);
//             }
//         }
//     }

//     no *aux;
//     printf("----------------------------\n");
//     printf("Lista DEPOIS de remover num 1:\n");
//     for (aux = lst; aux != NULL; aux = aux->prox) {
//         printf("Numero: %d\n", aux->info);
//     }
//     printf("----------------------------\n\n");
// }