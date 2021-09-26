// Faça o algoritmo de uma função que receba três valores numéricos reais e retorne aquele de maior valor.

#include <stdio.h>

float maior(float, float, float); // importante deixa o cabecalho do subp antes da funcao main pq colocamos o subp dps do main

void main() { // programa principal
    float n1, n2, n3, nmaior;

    // leitura dos dados
    printf("Digite tres numeros reais:\n");
    printf("Primeiro numero: ");
    scanf("%f", &n1);
    printf("Segundo numero: ");
    scanf("%f", &n2);
    printf("Terceiro numero: ");
    scanf("%f", &n3);

    // recebe o maior
    nmaior = maior(n1, n2, n3); // funcao calcula com base nos valores de n1, n2, n3
    
    // mostra o resultado
    printf("O maior dos tres eh: %.2f", nmaior);
    // printf("O maior dos tres eh: %.2f", maior(n1, n2, n3)); || tb poderia ser mostrado o resultado assim
}


// subprograma do tipo funcao tipo, identific (tipo do param e nome)
float maior(float a, float b, float c) {
    float maior;
    if (a > b) {
        if (a > c)
            maior = a;
        else
            maior = c;
    }
    else {
        if (b > c)
            maior = b;
        else 
            maior = c;
    }
    return maior;
}