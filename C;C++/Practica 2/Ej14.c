#include <stdio.h>
int main()
{
    printf("Mostrar el cuadrado de los primeros 5 numeros naturales\n");
    int a=0;
    for (int i=1;i<=5;i++)
    {
        a=i*i;
        printf("%d\n",a);
    }
    return 0;
}