#include <stdio.h>
#include <stdlib.h>

/*
* Insere elementos no início da lista.

* cria uma lista vazia, insere na lista e imprime.
*/

struct elemento {
    int info;
    struct elemento *prox;
} typedef struct elemento TNo;

TNo* CriaLista (void) {
    return NULL;
}

TNo* InsereNaLista (TNo *lst, int val) {
    TNo* novo = (TNo*) malloc (sizeof(TNo));
    novo->info = val;
    novo->prox = lst;
    return novo;
}

TNo* ImprimiLista (TNo *lst) {
    TNo *p;
    for (p = lst; p != NULL; p = p->prox) {
        printf("Número %d\n", p->info);
    }
}

int main(){
    TNo* lst;
    int valor;

    lst = CriaLista();
    lst = InsereNaLista(lst, 1);
    lst = InsereNaLista(lst, 2);
    lst = InsereNaLista(lst, 3);
    lst = InsereNaLista(lst, 4);
    lst = InsereNaLista(lst, 5);

 
    return 0;
}