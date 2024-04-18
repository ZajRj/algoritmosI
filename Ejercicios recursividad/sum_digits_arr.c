/* Elaborar una función recursiva que, dado un arreglo de N números enteros positivos, calcule la suma
de los dígitos de cada entero y determine cuál es el entero cuya suma de dígitos es mayor.
La suma de dígitos debe realizarse con una función recursiva. */

#include <stdio.h>

int sum_digits(int n)
{
    return (n == 0) ? 0 : n % 10 + sum_digits(n / 10);
}

int sum_digits_arr(int arr[],int size,int max)
{
    int sum;

    if(size >= 0)
    {
        sum = sum_digits(arr[size]);

        max = (max > sum) ? max : sum;

        printf("Suma de digitos en indice %d: %d \n",size,sum);

        return sum_digits_arr(arr,size-1,max);
    }

    return max;
}

int main()
{
    int arr[] = {10,23,50,46};

    int size = sizeof(arr) / sizeof(arr[0]) - 1;

    printf("Mayor suma de digitos: %d",sum_digits_arr(arr,size,0));
}