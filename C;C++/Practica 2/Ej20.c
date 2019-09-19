#include <stdio.h>

int main () 
{
    int h=5,asteriscos=1,espacios=0;
    espacios=h;
    for (espacios;espacios>0;espacios--)
    {
        for (asteriscos;asteriscos<h;asteriscos++);
        {
            printf("*");
        }
        printf("_");
        
    }
    return 0;
}