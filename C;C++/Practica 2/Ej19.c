#include <stdio.h>

int factorial(int j)
{
    int mul=1;
    for (int i=1;i<=j;i++)
    {
        mul=mul*i;
    }
return mul;
}

int main ()
{
    printf("Programa que imprime los factoriales del 2 al 15\n\nNumero\tFactorial\n");

    for (int j=2;j<=15;j++)
    {
        printf("%d\t",j);
        printf("%d\n",factorial(j));
    }
    return 0;
}