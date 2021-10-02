/*
questão 3
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
void lst_libera(TNo*);
void lst_invertida(TNo*);

// PROGRAMA PRINCIPAL
int main () {
    TNo *lst = NULL; // iniciando a lista vazia

	// inserindo elementos na listam a partir do inicio
	lst = insere(lst, 5);
	lst = insere(lst, 10);
	lst = insere(lst, 15);
	lst = insere(lst, 20);
	lst = insere(lst, 25);
	lst = insere(lst, 30);
	lst = insere(lst, 35);

    // exibindo lista a partir do inicio antes do processamento
    printf("Elementos da lista ANTES: \n\n");
	lst_imprime(lst);

    printf("\n\n------------------------------");

    // exibindo a lista invertida depois do processamento
	printf("\n\nElementos da lista DEPOIS: \n\n");
	lst_invertida(lst);

    lst_libera(lst); // liberando espaco alocado pela lista
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

/* procedimento: inverte a ordem da lista */
void lst_invertida(TNo* lst) {
    if (lst != NULL) { // faz se lista lista
        lst_invertida(lst->prox); // chamada recursiva para apontar para o prox
        printf("Elemento da lista: %d\n", lst->info); // exibindo lista invertidA
    }
}