// Elabore un algoritmo recursivo que calcule la suma de dos números naturales a y b.

#include <stdio.h>

int sum(int a, int b)
{
    int aux;
    if(b > 0)
        aux = 1 + sum(a,b-1);
    else{
        aux = a;
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

    printf("La suma de %d y %d es: %d", a, b, sum(a, b));
}