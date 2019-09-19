#include <stdio.h>
//#include <conio.h>

int main()
{
    int c, son;
    //clrscr();
    c=1;
    son=0;
    while (c<100)
    {
        printf(" %d",c);
        c=c+2;
        son=son+1;
    }
    printf(" \nel numero de impares es %d ",son);
    getchar();
    return 0;
}