/*
questão 1
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
TNo* insere_pos(TNo*, int, int);
void lst_imprime(TNo*);
void lst_libera(TNo* lst);

// PROGRAMA PRINCIPAL
int main () {
    TNo *lst = NULL; // *lst: iniciando a lista vazia
    int posicao, val;

	// inserindo elementos na lista a partir do inicio
	lst = insere(lst, 2);
	lst = insere(lst, 4);
	lst = insere(lst, 6);
	lst = insere(lst, 8);
	lst = insere(lst, 10);
	lst = insere(lst, 12);
	lst = insere(lst, 14);

	// inserindo valor 1000 ao quarto elemento
	posicao = 4; // posicao
	val = 1000; // valor a ser guardado

    printf("Lista Encadeada ANTES: \n\n");
    lst_imprime(lst);

printf("\n------------------------------");
    // passagem de parametros
	insere_pos(lst, val, posicao);

    printf("\n\nLista Encadeada DEPOIS: \n\n");
    lst_imprime(lst);

    lst_libera(lst); // liberando espaco alocado pela lista
    return 0;
}

// FUNCOES E PROCEDIMENTOS

/* funcao: inserção de elementos na lista a partir do inicio */
TNo* insere(TNo* lst, int val) {
	TNo* novo;

	novo = (TNo*) malloc(sizeof(TNo)); // alocando memoria em novo

	novo->info = val;
	novo->prox = lst;
	return novo;
}


/* funcao: insere novo elemento na posicao splicitada */
TNo* insere_pos(TNo *lst, int num, int i) { // inicio da lista, info do elem, pos
    TNo *novo, *p; // pont para novo e elemento e outro para percorrer a lista
    int pos = 0;

    novo = (TNo*) malloc(sizeof(TNo)); // alocando memoria em novo

    // conferindo se espaco foi alocado corretamente
    if (novo == NULL)
        return lst;
    else {
        novo->info = num; // colocando informacao ref. ao elem.

        if (i == 0 || lst == NULL) { // add elem no inicio da lista se ela for vazia ou se i for igual a 1
            novo->prox = lst; // novo->prox recebe inicio da lista
            lst = novo; // lst aponta para novo
        }
        else { // caminhando pela lista
            p = lst;
            while (p->prox != NULL && pos < i - 2) { // p->prox != NULL: caminha pela lst enquanto n chegar no final | pos q comeca c zero tem que ser menor do que i
                p = p->prox; // comando para caminhar na lista
                pos++;
            }
            novo->prox = p->prox; // ponteiro novo recebe ponteiro do prox elemento
            p->prox = novo; // ponteiro do prox elemento recebe info
        }
        return lst;
    }
}

/* procedimento: exibe a lista na tela */
void lst_imprime(TNo* lst) {
	TNo* p; // ponteiro para percorrer a lista

	for (p = lst; p != NULL; p = p->prox)
		printf("Elemento da lista: %d\n", p->info);
}

//* procedimento: desaloca espaco de todos elementos da lista*/
void lst_libera(TNo* lst) {
    TNo* p = lst;
    TNo* t;

    while (p != NULL) {
        t = p->prox;
        free(p);
        p = t;
    }
}