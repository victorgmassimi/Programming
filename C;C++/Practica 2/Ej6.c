#include <stdio.h>
int main()
{
    printf("Imprime la suma de los numero del 10 al 125\n");
    int sum=0;
    for (int i=0 ;i<=125;i++)
    {
        sum = sum+i;
    }
    printf("total: %d\n",sum);
    return 0;
}