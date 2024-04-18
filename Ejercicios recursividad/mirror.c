/* Dadas dos secuencias de caracteres, donde cada secuencia representa a un número natural, elabore una función recursiva que indique si el primer número es el espejo del otro. Un número natural a es espejo de otro número natural b, si los dígitos que forman al número a, listadas en orden inverso forman el número b.
Ejemplo:
123 es espejo de 321
334667 es espejo de 766433
345 no es espejo de 541. */

#include <stdio.h>

int mirror_rec(char str[], char str2[], int length2, int aux, int aux2);

int mirror(char str[], char str2[], int length, int length2)
{
    if (length != length2)
        return 0;

    return mirror_rec(str, str2, length2, 0, length2 - 1);
}

int mirror_rec(char str[], char str2[], int length2, int aux, int aux2)
{
    if (aux < length2 - 1)
    {
        return str[aux] == str2[aux2] ? mirror_rec(str, str2, length2, aux + 1, aux2 - 1) : 0;
    }

    return 1;
}

int main()
{
    char str[] = {'3','4','5'};
    char str2[] = {'5', '4', '1'};

    int length = 3;
    int length2 = 3;

    printf("%d", mirror(str, str2, length, length2));
}