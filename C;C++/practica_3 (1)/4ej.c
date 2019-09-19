#include <stdio.h>
#define MAX_LENGTH_STRING 20
int main ()
{
    char array[MAX_LENGTH_STRING];
    int cont=0;
    printf("ingresa un string corto\n");
    fgets(array,MAX_LENGTH_STRING,stdin);
    for (size_t i = 0; i < MAX_LENGTH_STRING; i++)
    {
        switch (array[i])
        {
            case 'a':
            case 'A': 
                cont++;
                break;
            case 'i':
            case 'I':
                cont++;
                break;
            case 'u':
            case 'U':
                cont++;
                break;
            case 'e':
            case 'E':
                cont++;
                break;
            case 'o':
            case 'O':
                cont++;
                break;
            
        }
        
           
    }
    printf("cantidad de vocales %d",cont);
    getchar();
    return 0;
}