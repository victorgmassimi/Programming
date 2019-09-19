#include <stdio.h>
#include <stdlib.h>

void leer(int *array,int *i)
{
    char continuar;
    int ayuda= *i;
    
    
    do{
        printf("Ingresa dato: ");
        scanf("%d",&array[ayuda]);
        if (getchar()!='\n');
        printf("¿Ingresar otro valor? [s/n]: ");
        scanf("%c",&continuar);
        if (getchar()!='\n');
        if (continuar==115)
        {
            ayuda++;
        }
    }while((continuar==115) && (ayuda<10));
    *i=ayuda;
}
int buscar_mayor(int array[],int tamano)
{
    int mayor=array[0];
    for(int i=0;i<tamano+1;i++)
    {
        if(mayor<array[i])
            mayor=array[i];
    }
    return mayor;
}
int buscar_menor(int array[],int tamano)
{
    int menor = array[0];
    for(int i=0;i<tamano+1;i++)
    {
        if(menor>array[i])
        {
            menor=array[i];
        }
    }
    return menor;
}
void promedio(int array[], int tamano, float *prom)
{
    float suma = 0, x = 0;
    for(int i = 0; i < tamano+1; i++)
    {
        suma = suma + array[i];
    }
    x = suma / (tamano+1);
    *prom = x;
}

int main()
{
    int array[11],tamano=0,mayor,menor;
    float prom;

    leer(array,&tamano);
    mayor = buscar_mayor(array,tamano);
    menor = buscar_menor(array,tamano);
    promedio(array,tamano,&prom);

    printf("El promedio es: %.2f\nEl mayor es: %d\nEl menor es: %d\n",prom,mayor,menor);
}