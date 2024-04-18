// Elabore un algoritmo recursivo que dado un número real a y un entero no negativo b calcule ab.

#include <stdio.h>

int exponent(int a, int b)
{
    int aux;
    if(b == 1 )
        aux = a;
    else{
        aux = a * exponent(a,b-1);
    }

    return aux;
}

int main()
{
    int a, b;

    printf("Ingrese un A: ");
    scanf("%d", &a);

    printf("Ingrese un B: ");
    scanf("%d", &b);

    printf("%d^%d es: %d", a, b, exponent(a, b));
}