//El algoritmo de Euclides para hallar el M.C.D. (Máximo Común Divisor) de dos enteros positivos a y
//b se puede definir recursivamente de la siguiente manera:
//MCD(a, b) = a , si b = 0
//MCD(b, a mod b) , si b ≠ 0
//Elabore un algoritmo recursivo que calcule el máximo común divisor de dos enteros positivos a y b.

#include <stdio.h>

int mcd(int a,int b)
{
    int aux;

    if(b == 0)
        aux = a;
    else{
        aux = mcd(b,a % b);
    }

    return aux;
}

int main()
{
    int a,b;

    printf("Ingrese un A: ");
    scanf("%d",&a);
    
    
    printf("Ingrese un B: ");
    scanf("%d",&b);
    
    printf("El MCD de %d y %d es: %d",a,b,mcd(a,b));
}