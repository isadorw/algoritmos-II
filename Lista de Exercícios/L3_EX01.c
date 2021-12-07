#include <string.h>
#include <math.h>

int reverso(int num);
int reverso2(int num, int ndig);
int numdig(int num);
	
int main () {   
    int numero;

    printf("Digite um numero: ");    
    scanf("%d",&numero);    
    
    printf("O reverso eh %d", reverso(numero));    
    
    return 0;
}

int reverso(int num){
	int n = numdig(num);
	return reverso2(num, n);
}

int numdig(int num){ // retorna a quantidade de digitos de num
	if (num < 10)
	   return 1;
	else
	   return numdig(num/10) + 1;
}

int reverso2(int num, int ndig){
	if (num == 0)
	   return num;
	else
	   return (num % 10)*(pow(10,(ndig-1))) + reverso2(num / 10, ndig-1);
       // 300 + reverso2(12, 2), pq 300 e nao 3
       // 20 + reverso2(1, 1), pq 20 e nao 2
       // 1 + reverso2(0, 0)
}

/*
54321
10000 + 

5432
1

543
1*10 + 2 = 12

54
12*10 + 3 = 123

5
123*10 + 4 = 1234

0
1234*10 + 5 = 12345
*/
