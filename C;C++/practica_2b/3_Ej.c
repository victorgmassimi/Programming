#include <stdio.h>
//#include <conio.h>

int main()
{
    int cont, x;
    long fact;
    //clrscr();
    printf(" factorial del numero ..?");
    scanf ("%d",&x);
    fact=1;
    for (cont=1;cont<=x;cont++)
    {
        fact=cont*fact;
        printf("\n factorial de %d = %ld", x, fact);
        getchar();
    }
    return 0;
}
