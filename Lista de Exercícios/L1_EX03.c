// lados de um triangulo
#include <stdio.h>
#include <math.h>
// verificar se é EQUILÁTERO, ISOSCELES, ESCALENO OU RETANGULO
int main () {
    double a, b, c, temp;
    scanf("%lf %lf %lf", &a, &b, &c);
    // a tem que ser maior ent vms comparar a com b e c e se for menor trocar os valores
    if (a < b) {
        temp = a;
        a = b;
        b = temp;
    }
    if (a < c) {
        temp = a;
        a = c;
        c = temp;
    }
    // comparar b com c
    if (b < c) {
        temp = b;
        b = c;
        c = temp;
    }
    // A2 = B2 + C2
    if (a * a == b * b + c * c)
        printf("TRIANGULO RETANGULO\n");

    if (a == b & a == c & b == c)
        printf("TRIANGULO EQUILATERO\n");
    else {if (a == b || a == c || b == c)
        printf("TRIANGULO ISOSCELES\n");
	}
    if (a != b && a != c || b != c)
        printf("TRIANGULO ESCALENO\n");
}