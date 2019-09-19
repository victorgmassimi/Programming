#include <stdio.h>

int main()
{
    char alumno[50];
    int j=0;
    for(int i=0;i<50;i++)
    {
        alumno[i]=0;
    }
    printf("Ingresa tu nombre completo separado por (.)nombre.carrera.codigo- (termina con un signo de numero.)\n");
    scanf("%s",alumno);
    while  ((alumno[j-1]!='-')&&(alumno[j]!=0))
    {
        j++;
    }

    for (int i=0;i<=j;i++)
    {
        printf("%c",alumno[i]);
    }
    return 0;
}