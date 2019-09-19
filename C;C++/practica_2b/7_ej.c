#include <stdio.h>

int main ()
{
    int i, sumapar, sumaimpar;
    //clrscr();
    sumapar=0;
    sumaimpar=0;
    i=1;
    do 
    {
        if (i%2==0)
        {
            sumapar=sumapar+1;
        }
        else
        {
            sumaimpar=sumaimpar+1;
        }
        i=i+1;
    }
    while(i<=25);
    printf("\nLa suma de los numeros pares es %d ",sumapar);
    printf("\nLa suma de los numeros impares es %d ",sumaimpar);
    getchar();
    return 0;
}