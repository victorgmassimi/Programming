#include <stdio.h>
#define MAX_STRING_LENGTH 100

int main()
{
    char string[MAX_STRING_LENGTH];
    int cont=0,j=0;
    for (size_t i=0; i<MAX_STRING_LENGTH;i++)
    {
        string[i]=0;
    }
    printf("ingrese un string\n");
    fgets(string,MAX_STRING_LENGTH,stdin);
    while (string[j]!=0)
    {
        cont++;
        j++;
    }
    printf("cantidad de caracteres %d ",cont);


    return 0;
}