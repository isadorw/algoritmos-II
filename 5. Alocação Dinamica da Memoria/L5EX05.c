/* 
LISTA 5 - EXERCICIO 5

Faça o algoritmo de uma função lógica que inclua
um elemento na posição i de uma lista.

*/

#include <stdio.h>
#include <stdlib.h> // function malloc

int insere_pos(TNo *lst, int num, int i);

typedef struct TNo {
    int info;
    TNo *prox;
}

int main () {
  
}
    // * antes significa passagem por parametro, compartilha mesmo endereco, portando mudando algo da lista na funcao, mudara tb no programa principal
    // (ponteiro que aponta para inicio da lista, num que representa informacao, e i que representa a posicao i a ser inserida na lista)
int insere_pos(TNo *lst, int num, int i) { 
    /* 
    lst: inicio da lista encadeada
    num: valo do no novo
    i: posicao inicial na qual se deseja inserir o novo no (num)
    considerando que o primeiro elemento ocupa posicao 1
    se i > total de elementos (+1), inserir no final da lista
    1. i = 1 - novo elemento passa a ser primeiro
    2. se != de i
    3. ou a posicao pode nao existir nesse caso a posicao eh maior que o numero de elementos da lst
    para caminhar na lista eh necessario de um ponteiro auxiliar que receba o inicio da lista para nao correr o risco de mexer na lista da passagem de parametro por referencia e acabar perdendo */

    TNo *novo, *p;
    int pos = 0;

    novo = (TNo*) malloc(sizeof(TNo)); // alocando memoria em novo

    // conferindo se espaco foi alocado corretamente
    if (novo == NULL) 
        return 0;
    else {
        novo->info = num; // colocando informacao ref. ao elem.
        if (i == 1 || lst == NULL) { // adiciona elemento no inicio da lista se ela for vazia ou se i for igual a 1
            novo->prox = lst; // novo->prox recebe inicio da lista
            lst = novo; // lst aponta para novo
        }
        else { // caminhando pela lista
            p = lst;
            while (p->prox != NULL && pos < i - 1) { // p->prox != NULL: caminha pela lst enquanto n chegar no final | pos q comeca c zero tem que ser menor do que i
                p = p->prox; // comando para caminhar na lista
                pos++;
            }
            novo->prox = p->prox; // ponteiro novo recebe ponteiro do prox elemento
            p->prox = novo; // ponteiro do prox elemento recebe info
        }
        return 1;
    }  
}
