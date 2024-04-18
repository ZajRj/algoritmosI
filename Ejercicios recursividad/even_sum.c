/* Diseñe un algoritmo recursivo que encuentre la suma de los enteros positivos pares desde n hasta
2. Si n es impar el algoritmo debe imprimir un mensaje de error. */

#include <stdio.h>

int even_sum(int n)
{
    int aux;
    
    if(n == 0)
        return 0;

    if (n != 0)
    {
        aux = n + even_sum(n-2);
    }
    
    return aux;
}

int main()
{
    int a;
    printf("Ingrese un numero: ");
    scanf("%d", &a);
    
    if(a%2 == 0)
    {
        printf("La suma de los pares del numero %d hasta 2 es %d", a, even_sum(a));
    }else{
        printf("El numero debe ser par");
    }
}