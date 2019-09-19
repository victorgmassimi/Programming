#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define clear() printf("\e[2J\e[H")
void cuadrado_vacio()
{
    printf("Ingresa un valor: ");
    int a;
    scanf("%d",&a);
    printf("El cuadrado de %d es: %d",a,a*a);
}
int cuadrado_return_vacia()
{
    printf("Ingresa un valor: ");
    int a;
    scanf("%d",&a);
    return (a*a);
}
int cuadrado_return_parametros(int a)
{
    return(a*a);
}
void cuadrado_referencia(int a, int *ptr)
{
    *ptr=(a*a);
}
int main()
{
    int num=0,resultado=0;
    cuadrado_vacio();
    getchar();
    getchar();
    clear();
    resultado=cuadrado_return_vacia();
    printf("Cuadrado: %d\n",resultado);
    resultado=0;
    getchar();
    getchar();
    clear();
    printf("Ingresa un numero: ");
    scanf("%d",&num);
    printf("Resultado: %d",cuadrado_return_parametros(num));
    getchar();
    getchar();
    clear();
    printf("Ingresa un valor: ");
    scanf("%d",&num);
    cuadrado_referencia(num,&resultado);
    printf("Resultado: %d",resultado);
    getchar();
    getchar();
    clear();
    printf("PROGRAM END\n");


    return 0; 
}