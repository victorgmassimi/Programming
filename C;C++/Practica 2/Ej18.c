#include<stdio.h>

int main () 
{
    printf("Programa que multiplica del 1 al 10 entre si.\n");
    int mul=1;
    for (int i=1; i<=10;i++)
    {
        mul=mul*i;
    }
    printf("El total es: %d\n",mul);
    return 0;
}