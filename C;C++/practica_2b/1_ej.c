#include <stdio.h>
//#include <conio.h>

int main()
{
    int suma, contador;
    suma=0;
    for (contador=1;contador<=100;contador++)
    {
        suma=suma+contador;
    }
    printf("La suma es :%d",suma);
    getchar();
    return 0;
}