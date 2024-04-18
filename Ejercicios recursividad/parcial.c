#include <stdio.h>

int avg(int n)
{
    int dig, aux;

    if (n != 0)
    {
        dig = n % 10;
        aux = (dig % 2 == 0) ? dig + avg(n / 10) : dig - avg(n / 10);
    }
    else
    {

        aux = 0;
    }

    return aux;
}

int main()
{
    int n = 318547;

    printf("El promedio de %d es: %d", n, avg(n));
}