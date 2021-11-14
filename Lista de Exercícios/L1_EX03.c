#include <stdio.h>
#include <math.h>

int main () {
    double a, b, c;

    printf("Insira tres valores: ");
    scanf("%lf %lf %lf", &a, &b, &c);

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

    if (b < c) {
        temp = b;
        b = c;
        c = temp;
    }

    if (a * a == b * b + c * c)
        printf("TRIANGULO RETANGULO\\n");

    if (a == b && a == c && b == c)
        printf("TRIANGULO EQUILATERO\\n");
    else if (a == b || a == c || b == c)
        printf("TRIANGULO ISOSCELES\\n");

    if (a != b && a != c || b != c)
        printf("TRIANGULO ESCALENO\\n");

    return 0;
}