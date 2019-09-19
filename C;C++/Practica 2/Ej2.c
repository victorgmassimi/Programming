#include <stdio.h>

int main ()
{
    printf("Imprimir serie de fibonacci");
    long double a=0,b=1,c=0,cont=0;
    int i=0;
    printf("¿Cuantos numeros quiere generar (no exeder 23,600)?\n");
    scanf("%Le",&cont);
    printf("0\n1\n");
    for (i=0; i < cont; i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf ("%d %.0Lf\n",i,c);      //Imprime toda la secuencia
    }
    //printf ("%d %.0Lf\n",i,c);        //Imprime solo el nuero final
    return 0;
    
}