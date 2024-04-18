/* Elaborar un algoritmo recursivo que, dados dos arreglos de caracteres, determine si dichos arreglos son iguales. */
#include <stdio.h>

int compare_arr(char arr[], char arr2[], int length, int length2)
{
     if (length != length2)
        return 0;

    if (length == 0)    
        return 1;

    return (arr[length - 1] == arr2[length2 - 1]) ? compare_arr(arr, arr2, length - 1, length2 - 1) : 0;
}

int main()
{
    char str[] = {'h', 'o', 'l', 'a'};
    char str2[] = {'h', 'o', 'd', 'a'};

    int length = 4;
    int length2 = 4;

    if (compare_arr(str, str2, length, length2))
    {
        printf("Los arreglos de caracteres son iguales.");
    }
    else
    {

        printf("Los arreglos de caracteres NO son iguales.");
    }
}