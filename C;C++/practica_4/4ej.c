#include <stdio.h>
#include <stdlib.h>


void printMatrix(int *matrix, int filas, int columnas)
{
    for (int i=0;i<filas;i++)
    {
        for (int j=0;j<columnas;j++)
        {
            printf("%d ",*(matrix+ (i*columnas))+j);
        }
        printf("\n");
    }
    printf("\n");
}
void printTranspositiva(int *matrix, int filas, int columnas)
{
    for (int i=0;i<columnas;i++)
    {
        for (int j=0;j<filas;j++)
        {
            printf("%d ",*(matrix +j* columnas +i));
        }
        printf("\n");
    }
    printf("\n");
}

void printMatrixEscalar(int *matrix, int filas, int columnas,int escalar)
{
    for (int i=0;i<filas;i++)
    {
        for (int j=0;j<columnas;j++)
        {
        
            printf("%d ",*((matrix+i*columnas)+j)*escalar);
        }
        printf("\n");
    }

printf("\n");
}

int main()
{
    int filas=1,columnnas=1,escalar=1,cont=1;
    

    printf("Cuantas filas tendra la matriz: ");
    scanf("%d",&filas);
    printf("\nCuantas columnas tendra la matriz: ");
    scanf("%d",&columnnas);

    int *matrix= (int*) malloc(filas*columnnas*sizeof(int));
    for(int i=0;i<filas;i++)
    {
        for(int j=0;j<columnnas;j++)
        {
            *(matrix+i*columnnas+j)=cont;
            cont++;
        }
        printf("\n");
    }
    printf("%d\n",cont);
    printMatrix(matrix,filas,columnnas);
    printf("Ingresa un escalar: ");
    scanf("%d",&escalar);
    printMatrixEscalar(matrix,filas,columnnas,escalar);
    getchar();
    printf("La transpositiva de la matriz es:\n");
    printTranspositiva(matrix,filas,columnnas);
    free (matrix);





    return 0;
}