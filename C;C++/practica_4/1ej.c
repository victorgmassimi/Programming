#include <stdio.h>
#include <string.h>


typedef struct
{  

    char nombre[16],apellido_P[16],apellido_M[16];

}name;

typedef struct
{

    char fechaIngreso[12],fechaSalida[12];

}date;

typedef struct
{
    
    name nombrecompleto;
    date fechas;
    char estado_salud[16];

}patient;

int main()
{
    int a,cont=0;
    char continuar;
    continuar='s';
    printf("Cuantos pacientes quiere ingresar?: ");
    scanf("%d",&a);
    while(getchar()!='\n');
    patient pacientes[a];
    while ((continuar=='s')&&(cont<a))
    {
        
        printf("Ingresa el nombre del paciente\n");
        fgets(pacientes[cont].nombrecompleto.nombre,16,stdin);
        strtok(pacientes[cont].nombrecompleto.nombre,"\n");
        printf("Ingresa el primer apellido del paciente\n");
        fgets(pacientes[cont].nombrecompleto.apellido_P,16,stdin);
        strtok(pacientes[cont].nombrecompleto.apellido_P,"\n");
        printf("Ingresa el segundo del paciente\n");
        fgets(pacientes[cont].nombrecompleto.apellido_M,16,stdin);
        strtok(pacientes[cont].nombrecompleto.apellido_M,"\n");
        printf("Ingresa fecha de ingreso\n");
        scanf("%s",pacientes[cont].fechas.fechaIngreso);
        printf("Ingresa fecha de salida (en caso de no existir ingresar [ n/a ])\n");
        scanf("%s",pacientes[cont].fechas.fechaSalida);
        printf("Idique el estado de salud del paciente\n");
        fgets(pacientes[cont].estado_salud,16,stdin);


        printf("Puedes ingresar %d pacientes mas. Continuar [s/n]: ",a-(cont+1));
        cont++;
        scanf("%c",&continuar);
        while(getchar()!='\n');
    }


    return 0;
}