#include <stdio.h>
#include <stdlib.h>


int main ()
{
    char materias[100];
    int j=0;
    for(int i=0;i<50;i++)
    {
        materias[i]=0;
    }
    printf("Ingresa tu nombre de las materias\n");
    fgets(materias,100,stdin);
    return 0;
}