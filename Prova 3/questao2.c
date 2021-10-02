/*
questão 2
isadora ito.
*/

#include <stdio.h>
#include <stdlib.h>

// registro no
struct elemento{
int info;
struct elemento *prox;
};
typedef struct elemento TNo;

// cabecalhos funcoes e procedimentos
TNo* insere(TNo*, int);
void lst_imprime(TNo*);
TNo* remover(TNo*, int);
void lst_libera(TNo* lst);

// PROGRAMA PRINCIPAL
int main (void) {
    // *lst: iniciando a lista vazia
    // *pont: pont aux vai receber lst para percorre-la e nao perder a lista
    TNo *lst = NULL, *pont = NULL;
    int x; // elemento a ser removido

    // entrada
    printf("Insira um valor inteiro qual deseja remover da lista: ");
    scanf("%d", &x); // ex: x = 2

    	// inserindo elementos na lista a partir do inicio
    lst = insere(lst, 10);
    lst = insere(lst, 20);
    lst = insere(lst, x);
    lst = insere(lst, 30);
    lst = insere(lst, x);
    lst = insere(lst, 50);
    lst = insere(lst, 70);
    lst = insere(lst, x);

    // exibindo a lista
    printf("\nElementos da lista ANTES da remocao do valor x: \n\n");
    lst_imprime(lst);

    // percorrendo a lista para remover todos os elementos iguais a X
    for (pont = lst; pont != NULL; pont = pont->prox) {
        lst = remover(lst, x);
    }
    
    printf("\n------------------------------------------------");

    // saida
    printf("\n\nElementos da lista DEPOIS da remocao do valor x: \n\n");
    lst_imprime(lst);


    lst_libera(lst); // // liberando espaco alocado pela lista
    return 0;
}

// FUNCOES E PROCEDIMENTOS

/* funcao: inserção de elementos na lista a partir do inicio */
TNo* insere(TNo* lst, int val) {
	TNo* novo;

	novo = (TNo*) malloc(sizeof(TNo)); // alocando memoria em novo

	novo->info = val; // guardando valor no elemento da lista
	novo->prox = lst; // novo elemento passa a ocupar inicio da lista
	return novo; 
}

/* procedimento: exibe a lista na tela */
void lst_imprime(TNo* lst) {
	TNo* p; // ponteiro para percorrer a lista

    // p percorre a lista ate o final (NULL)
	for (p = lst; p != NULL; p = p->prox)
		printf("Elemento da lista: %d\n", p->info);
}

/* remove elemento da lista */
TNo* remover(TNo* lst, int num) {
    TNo* ant = NULL; // ponteiro para elemento anterior 
    TNo* p = lst; // ponteiro para percorrer a lista por conta da passagem por referencia

    // percorre lista e guarda endereco elemento anterior
    while (p != NULL && p->info != num) { //
        ant = p;
        p = p->prox;
    }

    if (p == NULL) // se a lista for vazia retornar ela mesma
        return lst;

    if (ant == NULL) { // se anterior guardado for vazio, apontar para prox
        lst = p->prox;
    }
    else { //senao 
        ant->prox = p->prox; // pont ant recebe pont do prox elem
    }
    return lst;
}

/* procedimento: desaloca espaco de todos elementos da lista*/
void lst_libera(TNo* lst) {
    TNo* p = lst; // ponteiro que recebe lista devido a passagem por referencia
    TNo* t; // pont aux

    // percorre a lista liberando cada elemento ate que ela esteja vazia
    while (p != NULL) {
        t = p->prox;
        free(p);
        p = t;
    }
}