#include <stdio.h>
int main ()
{
    int inicio;
    printf("Ingresa valor inicial\n");
    scanf("%d",&inicio);
    for (int i=0;inicio>i; inicio--)
    {
        printf("%d\n",inicio);
    }
    return 0;
}