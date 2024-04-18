/* La función de Ackermann se define de manera recursiva para enteros no negativos de la siguiente
manera:
A(m, n) =
n +1 , si m = 0
A(m – 1, 1) , si m ≠ 0 Ù n = 0
A(m – 1, A(m, n – 1)) , si m ≠ 0 Ù n ≠ 0
Escriba una función recursiva que, dados dos enteros no negativos m y n, calcule el valor de A(m, n)
y a partir de la definición anterior pruebe que A(2, 2) = 7. */
#include <stdio.h>

int ackerman(int a, int b)
{
    int aux;
    
    if (a == 0)
        aux = b + 1;
    if (a != 0 && b == 0)
        aux = ackerman(a - 1, 1);
    if (a != 0 && b != 0)
        aux = ackerman(a - 1, ackerman(a, b - 1));

    return aux;
}

int main()
{
    int a, b;

    printf("Ingrese un A: ");
    scanf("%d", &a);

    printf("Ingrese un B: ");
    scanf("%d", &b);

    printf("Ackerman de %d y %d es: %d", a, b, ackerman(a, b));
}