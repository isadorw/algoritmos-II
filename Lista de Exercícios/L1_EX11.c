#include <stdio.h>
#include <math.h> // p usar raiz e potencia

int main() {
    struct ponto_coord {
        float x;
        float y;
    };
    
    struct ponto_coord ponto1, ponto2;
    float p1, p2, result;
    
    // lendo pontos A e B
    printf("Infome o valor do ponto A(x1, x2): ");
    scanf("%f %f", &ponto1.x, &ponto2.x);
    printf("\nInfome o valor do ponto B(y1, y2): ");
    scanf("%f %f", &ponto1.y, &ponto2.y);
    
	p1 = pow((ponto2.x - ponto1.x), 2); // quadrado do ponto a, x2 - x1 ao quadrado
	p2 = pow((ponto2.y - ponto1.y), 2); // quadrado do ponto b, y2 - y1 ao quadrado
	
    printf("Distancia entre os pontos: %5.2f\n", sqrt(p1 + p2)); // raiz quadrada da soma de p1 e p2
    
}