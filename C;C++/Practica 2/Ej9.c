#include<stdio.h>

int main ()
{
    printf ("Suma una serie de numeros\n");
    int sum=0,a=0,b=0, f=0;   
    printf("ingresa el primer numero de la serie\n");
    scanf("%d",&sum);
    while (f==0)
    {
        printf("ingresa el siguiente numero a sumar:\n");
        scanf("%d",&b);
        sum=sum+b;
        printf("\nLa suma es:  %d\n\n",sum);
        printf("¿Continuar?\n0)si\n1)no\n");
        scanf("%d",&f);
       
    }
    
    return 0;
}