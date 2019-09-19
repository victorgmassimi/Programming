#include <stdio.h>
int main()
{  
    printf("Programa para imprimir una serie entre dos numeros\n");
    int inicio=0,fin=10,aux=0;
    printf("Ingresa el valor inicial\n");
    scanf("%d",&inicio);
    printf("Ingersa el valor final\n");
    scanf("%d",&fin);
    printf("Incio de la serie\n");
    for(inicio;inicio<=fin;inicio++)
    {
        printf("%d\n",inicio);
    }
    return 0;
}