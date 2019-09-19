#include  <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct 
{  
   char nombreEstado[16];
   int poblacion; 
}state;
typedef struct 
{
    char nombrePais[16];
    state estados[5];
}country;
typedef struct
{
    char nombreContinente[16];
    country paises[5];
}continent;
int main()
{  
    continent mundo[2];
    strcpy(mundo[0].nombreContinente,"America");                            //son muchos paises entonces hare estados unidos y mexico con 3 estados cada uno.
    strcpy(mundo[0].paises[0].nombrePais,"Estados Unidos");
    strcpy(mundo[0].paises[0].estados[0].nombreEstado,"Michigan");
    mundo[0].paises[0].estados[0].poblacion=2000000;
    strcpy(mundo[0].paises[0].estados[1].nombreEstado,"Texas");
    mundo[0].paises[0].estados[1].poblacion=5000000;
    strcpy(mundo[0].paises[0].estados[2].nombreEstado,"California");
    mundo[0].paises[0].estados[2].poblacion=8000000;
    strcpy(mundo[0].paises[1].nombrePais,"Mexico");
    strcpy(mundo[0].paises[1].estados[0].nombreEstado,"Michoacan");
    mundo[0].paises[0].estados[0].poblacion=3000000;
    strcpy(mundo[0].paises[1].estados[1].nombreEstado,"Yucatan");
    mundo[0].paises[0].estados[0].poblacion=1000000;
    strcpy(mundo[0].paises[1].estados[0].nombreEstado,"Michoacan");
    mundo[0].paises[0].estados[0].poblacion=3000000;

    int *poblaciontotal = (int*) malloc(1*sizeof(int));
    
    for(int pais=0;pais<2;pais++)
    {
        for(int estado=0;estado<3;estado++)
        {
            *poblaciontotal= *poblaciontotal + mundo[0].paises[pais].estados[estado].poblacion;
        }
    }
    printf("Poblacion de un continente: %d\n",*poblaciontotal);
    for (int estado=0;estado<3;estado++)
    {
        *poblaciontotal= *poblaciontotal + (mundo[0].paises[0].estados[estado].poblacion);
    }
    printf("poblacion de un pais: %d\n",*poblaciontotal);
    free(poblaciontotal);
    return 0;
}