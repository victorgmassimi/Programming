#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[15]={1,2,3,4,5,5,5,8,9,10,10,12,14,14,15};
    int i=0,j=0,cont=0;
    do
    {
        if (a[i]!=a[i+1])
        {
            i++;
        }
        else
        {
            for(j=i;j<14;j++)
            {
                a[j]=a[j+1];
                a[14]=0;
            }
            cont++;
            
        }

    }
    while(i<15-cont);
    for(int k=0;k<15-cont;k++)
    {
        printf("%d ",a[k]);
    }
    printf("\n");
    getchar();
    return 0;
}