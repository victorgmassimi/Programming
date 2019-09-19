#include<stdio.h>

int main ()
{
    printf ("Detecta el numero mayor dentro de una serie de numeros\n");
    int mayor=0,a=0,b=0, f=0;   
    printf("ingresa el primer numero de la serie\n");
    scanf("%d",&a);
    while (f==0)
    {
        printf("ingresa el siguiente numero a comparar:\n");
        scanf("%d",&b);
        if (a>b)
        {
            mayor =a;
        }
        else
        {
            mayor=b;
        }
        printf("\nEl mayor numero es %d\n\n",mayor);
        printf("¿Continuar?\n0)si\n1)no\n");
        scanf("%d",&f);
       
    }
    
    return 0;
}