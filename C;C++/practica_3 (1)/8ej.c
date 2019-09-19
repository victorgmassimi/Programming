#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define M 3
#define N 6

int main()
{
    int arr[M][N];
    for (int i=0;i<M;i++)
    {
        for (int j=0;j<N;j++)
        {
            arr[M][N]=rand()%1000+1;

            printf("%d\t",arr[M][N]);
        }
        printf("\n");
    }
    srand(time(NULL));
    printf("\n");
    for (int i=0;i<M;i++)
    {
        for (int j=0;j<N;j++)
        {
            arr[M][N]=rand()%1000+1;

            printf("%d\n",arr[M][N]);
        }
        
    }

    return 0;
}