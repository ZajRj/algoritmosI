#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_SIZE 20

void fill_arr_rand(int array[], int length);

void swap(int *x, int *y);

void quicksort(int array[], int length);

void quicksort_recursion(int array[], int low, int high);

int partition(int array[], int low, int high);

void swap(int *x, int *y)
{
    int t = *x;
    *x = *y;
    *y = t;
}

void quicksort(int array[], int length)
{
    srand(time(NULL));
    
    quicksort_recursion(array, 0, length - 1);
}

void quicksort_recursion(int array[], int low, int high)
{
    if (low < high)
    {

        int pivot_i = partition(array, low, high);

        quicksort_recursion(array, low, pivot_i - 1);
        quicksort_recursion(array, pivot_i + 1, high);
    }
}

int partition(int array[], int low, int high)
{
    int pivot_index = low + (rand() % (high - low));

    if(pivot_index != high)
        swap(&array[pivot_index],&array[high]);

    int pivot = array[high];

    int i = low;

    for (int j = low; j < high; j++)
    {
        if (array[j] <= pivot)
        {
            swap(&array[i], &array[j]);
            i++;
        }
    }

    swap(&array[i],&array[high]);
    
    return i;
}

void fill_arr_rand(int array[], int length)
{
    // Seed the random number generator with the current time
    srand(time(NULL));

    // Fill the array with random numbers
    for (int i = 0; i < length; i++)
    {
        array[i] = rand() % 100 + 1;
    }
}
void print_arr(int array[],int length)
{
     // Print the array
    for (int i = 0; i < length; i++)
    {
        printf("%4d", array[i]);
    }
    printf("\n");
}

int main()
{
    int array[ARRAY_SIZE];

    fill_arr_rand(array, ARRAY_SIZE);
    
    print_arr(array,ARRAY_SIZE);

    quicksort(array,ARRAY_SIZE);

    print_arr(array,ARRAY_SIZE);


    return 0;
}