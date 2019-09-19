#include <stdio.h>

int main ()
{
    printf("Programa que imprime multiplos de numeros entre 1 y 10 sin pasar el 125\n");
    int multiplo=10, a=0;
    printf("Ingresa el numero del que quieres obtener sus multiplos\n");
    scanf("%d",&multiplo);
    a=multiplo;
    for (multiplo; multiplo<125; multiplo+=a)
    {
        printf("%d\n",multiplo);
        
    }
    return 0;
}