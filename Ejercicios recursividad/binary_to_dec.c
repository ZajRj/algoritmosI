/* Elabore un algoritmo recursivo que transforme un número binario a un número entero positivo. */

#include <stdio.h>

void binary(int n)
{
    int aux;

    if (n == 1 || n == 0)
    {
        aux = n;
    }
    else if (n > 1)
    {
        aux = n % 2;
        
        binary(n/2);
    }
    printf("%d", aux);
}

int main()
{
    int a;
    printf("Ingrese un numero: ");
    scanf("%d", &a);

    printf("%d en binario es ",a);

    binary(a);
}