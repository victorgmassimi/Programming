#include <stdio.h>
int ParNon (int cont)
{
    if (cont%2==1)
    return 1;
    else 
    return 0;
}

int main()
{
    printf("Suma de los numero Nones y Pares entre el 10 y 125\n");
    int n=0, p=0,sum=0,mul=1,cont=0;
    for (int i=10;i<=125;i++)
    {
       if(ParNon(cont)==1)
       {
            n=n+cont;   
       }
       else
       {
           p=p+cont;
       }
       
       cont++;

    }
    printf("Nones\tPares\n%d\t%d\n\n",n,p);
    return 0;
}