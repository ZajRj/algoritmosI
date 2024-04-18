/* Diseñe un algoritmo recursivo fib(n) para calcular el Fibonacci de un número entero positivo n.
Muestre todos los estados por los cuales pasa la pila de registros de activación al ejecutarse en un
algoritmo la instrucción f ¬ fib(4).
fib(n) =
0 , si n = 0
1 , si n = 1
fib(n – 1) + fib(n – 2) , si n > 1 */

#include <stdio.h>

int fib(int n)
{
    int aux;

    if (n < 2)
        aux = n;

    else if (n > 1)
    {
        aux = fib(n - 1) + fib(n - 2);
        printf("fib: %d \n",aux);
    }

    return aux;
}

int main()
{
    int n;

    printf("Ingrese un numero: ");
    scanf("%d", &n);

    printf("El termino #%d de la sucesion de fibonacci es: %d",n,fib(n));
}