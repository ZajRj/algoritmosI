/* Dado un número entero positivo n, realice un algoritmo recursivo que permita calcular su cantidad
de dígitos. */

#include <stdio.h>

int digits(int n)
{
    int aux;
    if (n == 0)
        aux = 0;
    else
    {
        aux = 1 + digits(n / 10);
    }

    return aux;
}

int main()
{
    int a;
    printf("Ingrese un numero: ");
    scanf("%d", &a);

    printf("El numero %d tiene %d digitos", a, digits(a));
}