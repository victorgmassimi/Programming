#include<stdio.h>
//#include<conio.h>
int main()
{
    int c,suma;
    c=1;
    suma=0;
    //clrscr();
    while(c<=100)
    {
        suma=suma+c;
        c=c+1;
        
    }
    printf("La suma de los primeros cien numeros es %d ",suma);
    getchar();
    return 0;   
}