/* Elaborar una función recursiva que, dado un arreglo de N enteros ordenado ascendentemente y un entero a, 
retorne la posición de a en el arreglo. Si a no se encuentra en el arreglo, la función debe retornar el valor –1. */

#include <stdio.h>

int search(int arr[100],int element,int size)
{
    if(size > 0)
    {
        return arr[size] == element ? size : search(arr,element,size-1);
    }

    return -1;
}

int main()
{
    int arr[100] = {10,24,44,76};

    int element = 45;

    int aux = search(arr,element,3);

    if(aux == -1)
    {
        printf("El elemento %d no se encuentra en el arreglo proporcionado.",element);
    }else{
         printf("El elemento %d se encuentra en el indice %d del arreglo proporcionado.",element,aux);
    }
}