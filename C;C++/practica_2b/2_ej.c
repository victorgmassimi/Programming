#include<stdio.h>
//#include<conio.h>

int main ()
{
    int cont, x,y,res;
    //clrscr();
    res=1;
    printf("\nEscriba el No. que se elevara a una potencia: ");
    scanf("%d",&x);
    printf("A que potencia quiere elevar el numero %d: ",x);
    scanf("%d",&y);
    for(cont=1;cont<=y;cont++)
    {
        res=res*x;
    }
    printf("\nEl %d elevado a la potencia %d es: %d ",x,y,res);
    getchar();
    return 0;
}