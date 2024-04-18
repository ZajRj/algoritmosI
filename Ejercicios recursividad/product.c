// Elabore un algoritmo recursivo que calcule el producto de dos números naturales a y b.

#include <stdio.h>

int product(int a, int b)
{
    int aux;
    if(b == 1 )
        aux = a;
    else{
        aux = a + product(a,b-1);
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

    printf("El producto de %d y %d es: %d", a, b, product(a, b));
}