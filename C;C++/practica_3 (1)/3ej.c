#include <stdio.h>
#include <stdlib.h>
#define N 5
#define M 150
int main()
{
    char texto[N][M];
    size_t n=0;
    printf("ingresar texto\n");
    while ( (n<N) && (fgets( texto[n], sizeof( *texto ), stdin ) != NULL) ) ++n;
    for(size_t i=0; i<N;i++)
    {
        puts(texto[i]);
    }
    return 0;
}