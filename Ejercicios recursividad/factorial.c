//El factorial de un número entero positivo n se define como:
//1 si n = 0 || n = 1
//n * factorial(n-1) si n > 1
//Diseñe un algoritmo recursivo para calcular el factorial de n

#include <stdio.h>

int factorial(int n)
{
    return (n == 0 || n == 1) ? 1 : n * factorial(n-1);
}

int main()
{
    int n;

    printf("Ingrese un numero: ");
    scanf("%d",&n);
    
    printf("El factorial de %d es: %d",n,factorial(n));
}