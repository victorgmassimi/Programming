#include<stdio.h>

int main()
{
    int cont=1,f=0,i=2,j=0;
    for (cont;cont<=125;cont++)
    {
        f=0;
        i=2;
        j=0;
        while ((i<cont) && (f==0))
        {
            j=cont%i;
            if (j==0)
            {
                
                f=1;
            }
            i++;
        
        }
        if (f==0)
        {
            printf("%d\n",cont);
        }
    }
    return 0;
}