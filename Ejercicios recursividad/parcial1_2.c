#include <stdio.h>


int div_by_eleven(int n);
int div_by_eleven_rec(int n,int pos);

int div_by_eleven(int n)
{
   int sum = div_by_eleven_rec(n,1);

   return (sum == 0) || (sum % 11 == 0);
}

int div_by_eleven_rec(int n,int pos)
{   
    int digit;
    if(n > 0)
    {
        digit = n % 10;
        return (pos % 2 == 0) ? digit + div_by_eleven_rec(n/10,pos+1) : digit - div_by_eleven_rec(n/10,pos+1);
    }else{
        return 0;
    }
}

int main()
{
    
    int n;
    printf("Ingrese un numero: ");
    scanf("%d",&n);

    if(div_by_eleven(n))

        printf("%d si es divisible entre 11",n);
    else
        printf("%d no es divisible entre 11",n);
}