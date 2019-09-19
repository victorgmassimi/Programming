#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define clear() printf("\e[2J\e[H")

typedef struct 
{
    char nombre[51];
    char direccion[101];
    int edad;
    int num_hermanos;
    char aficiones[5][21];
}datos;

void Print_Datos (datos *persona)
{
    
    printf("\n\nNombre: %s\nDireccion: %s\nEdad: %d\nHermanos: %d\nAficiones:\n",persona->nombre,persona->direccion,persona->edad,persona->num_hermanos);
    for (int i=0;i<5;i++)
    {
        printf("\t%d)%s\n",i+1,persona->aficiones[i]);
    }
}

void Ingresar_Datos(datos *persona)
{
    printf("Ingresar datos\nNombre: ");
    fgets(persona->nombre,50,stdin);
    strtok(persona->nombre,"\n");
    printf("\nDireccion: ");
    fgets(persona->direccion,100,stdin);
    strtok(persona->direccion,"\n");
    printf("\nEdad: ");
    scanf("%d",&persona->edad);
    printf("\nHermanos: ");
    scanf("%d",&persona->num_hermanos);
    if(getchar()!='\n');
    printf("\nAficiones: (5)");
    for (int i=0;i<5;i++)
    {
        printf("\n\t%d: ",i+1);
        fgets(persona->aficiones[i],20,stdin);
        strtok(persona->aficiones[i],"\n");
    }
    clear();
    //printf("\e[2J\e[H");
    Print_Datos(persona);
}
int main()
{   
    datos persona;
    Ingresar_Datos(&persona);
    //Print_Datos(&persona);

    return 0;
}