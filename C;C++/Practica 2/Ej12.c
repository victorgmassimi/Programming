#include <stdio.h>
int main()
{
    printf("Suma de una serie de 10 numero consecutivos\n");
    int inicio=0,sum=0;
    printf("Ingrese el primer numero de la serie\n");
    scanf("%d",&inicio);
    for (int i=0;i<10;i++ )
    {
        sum=sum+inicio;
        inicio++;
    }
    printf("El total es: %d\n",sum);
    return 0;
}