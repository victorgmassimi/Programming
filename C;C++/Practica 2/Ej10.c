#include<stdio.h>


float fmedia(float media, int cont,int suma)
{


    return media;
}

int main ()
{
    printf ("Detecta el numero mayor, menor y media dentro de una serie de numeros\n");
    int suma=0,menor=0,mayor=0,a=0,b=0,c=0, f=0,cont=2;   
    float media=0;
    printf("ingresa el primer numero de la serie\n");
    scanf("%d",&a);
    suma=a;
    c=a;
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
        a=mayor; 
        printf("\nEl mayor numero es %d\n\n",mayor);
        if (c<b)
        {
            menor =c;
        }
        else
        {
            menor=b;
        }
        c=menor;
        printf("\nEl menor numero es %d\n\n",menor);
        suma =suma +b;
        media=suma/cont;
        cont++;
        printf("\nLa media es %.1f\n\n",media);
        printf("¿Continuar?\n0)si\n1)no\n");
        scanf("%d",&f);
       
    }
    
    return 0;
}