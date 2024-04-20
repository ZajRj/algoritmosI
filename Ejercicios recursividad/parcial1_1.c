#include <stdio.h>

int avg(int n);
int avg_rec(int n, int sum);

int openFile(FILE **f, char name[], char mode[]);

int avg(int n)
{
    int aux = avg_rec(n, 0);
    return aux < 1 ? -1 * aux : aux;
}

int avg_rec(int n, int sum)
{
    int dig;

    if (n != 0)
    {
        dig = n % 10;
        sum = sum + (dig % 2 == 0 ? dig : -1 * dig);

        return avg_rec(n / 10, sum);
    }

    return sum;
}

int main()
{

    FILE *f,*o;
    f = fopen("parcial1_1.in", "r");
    o = fopen("parcial1_1.out", "w");

    if(f == NULL)
    {
        printf("Error al abrir el archivo de entrada");
        return 1;
    }


    int aux;

    while(!feof(f))
    {
        fscanf(f, "%i", &aux);

        fprintf(o,"Promedio de %d: %d\n",aux,avg(aux));

    }
}