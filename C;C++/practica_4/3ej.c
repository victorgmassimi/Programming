#include <stdio.h>
#include <string.h>
typedef struct 
{
    char nombre[51];
    int codigo;
    char materias[5][21];
    int salario;
    int contadormaterias;
}datos;

void printTodos (datos docentes[], int cont)
{
    for(int i=0;i<cont;i++)
    {
        printf("\nProfesor %d:\nNombre:\t",i+1);
        puts(docentes[i].nombre);
        printf("Codigo: %d\n",docentes[i].codigo);
        printf("Materias:\n");
        for(int j=4;j>docentes[i].contadormaterias;j--)
        {
            {
                puts(docentes[i].materias[j]);
                //printf("\t");
            }
        }
        printf("Salario: %d\n",docentes[i].salario);
    }
}
void printdocente (datos docentes[], int a )
{
    printf("\nNombre:\t");
    puts(docentes[a].nombre);
    printf("Codigo: %d\n",docentes[a].codigo);
    printf("Materias:\n");
    for(int j=4;j>docentes[a].contadormaterias;j--)
    {
        {
            puts(docentes[a].materias[j]);
           printf("\n");
        }
    }
    printf("Salario: %d\n",docentes[a].salario);
   
}
int main() 
{
    datos docentes[15];
    char continuarProfes[1],continuarMaterias[1],busqueda[1];
    char nombrebusqueda[20],materiabusqueda[10];
    continuarProfes[0]='s',continuarMaterias[0]='s',busqueda[0]='s';
    int profRestantes=14,cont=0,contMaterias=4,a;
    int mayorsalario;
    do
    {
        printf("Ingresar nombre del profesor:\n");
        fgets(docentes[cont].nombre,50,stdin);
        strtok(docentes[cont].nombre,"\n");
        printf("Igresar codigo de profesor: ");
        scanf("%d",&docentes[cont].codigo);
        while(getchar()!='\n');
        do 
        { 
            printf("Ingresa materia: ");
            fgets(docentes[cont].materias[contMaterias],20,stdin);
            strtok(docentes[cont].materias[contMaterias],"\n");
            printf("\nPuede ingresar %d materias mas.\n¿Desea ingresar otra materia? [s/n]: ",contMaterias);
            scanf("%c",&continuarMaterias[0]);
            while(getchar()!='\n');
            contMaterias--;
            docentes[cont].contadormaterias=contMaterias;
        }while((continuarMaterias[0]=='s')&&(contMaterias>0));
        continuarMaterias[0]='s',contMaterias=4;
        printf("\nIngresar salario: ");
        scanf("%d",&docentes[cont].salario);
        while(getchar()!='\n');
        cont++;
        printf("\nSe pueden ingresar %d profesores mas.\n¿Ingresar otro? [s/n] ",15-cont);
        scanf("%c",&continuarProfes[0]);
        while(getchar()!='\n');
        
    }while ((continuarProfes[0]!='n')&&(cont<15));
    for(int i=0;i<cont-1;i++)
    {
        if (docentes[i].salario<docentes[i+1].salario)
        {
            mayorsalario=i+1;
        }
        else
        {
            mayorsalario=i;
        }
    }
    printf("El profesor con el mayor salario es:\n\n");
    printdocente(docentes,mayorsalario);
    getchar();

    printTodos(docentes,cont);
    printf("¿Desea buscar por profesor? [s/n]: ");
    scanf("%c",&busqueda[0]);
    while(getchar()!='\n');
    while(busqueda[0]=='s')
    {
        printf("¿Que nombre quiere buscar?: ");
        fgets(nombrebusqueda,20,stdin);
        strtok(nombrebusqueda,"\n");
        for(int i=0;i<cont;i++)
        {
            if(strncmp(nombrebusqueda,docentes[i].nombre,sizeof(nombrebusqueda))==0)
            {
                a=i;
                printdocente(docentes,a);
            }
        }
        printf("¿Desea buscar de nuevo? [s/n]: ");
        scanf("%c",&busqueda[0]);
        while(getchar()!='\n');
    }
    busqueda[0]='s';
    printf("¿Desea buscar por materia? [s/n]: ");
    scanf("%c",&busqueda[0]);
    while(getchar()!='\n');
    while(busqueda[0]=='s')
    {
        printf("¿Que materia quiere buscar?: ");
        fgets(materiabusqueda,10,stdin);
        strtok(materiabusqueda,"\n");
        for(int i=0;i<cont;i++)
        {
            for(int j=4;j>docentes[a].contadormaterias;j--)
            {
                
                if(strncmp(materiabusqueda,docentes[i].materias[j],sizeof(materiabusqueda))==0)
                {
                    a=i;
                    printdocente(docentes,a);
                }  
            }
        }
        printf("¿Desea buscar de nuevo? [s/n]: ");
        scanf("%c",&busqueda[0]);
        while(getchar()!='\n');
    }
    return 0;
}