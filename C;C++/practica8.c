#include "stdio.h"
#include "stdlib.h"
#include "string.h"

typedef struct 
{
	char nombre[50], correo[25];
	float numero;
}agenda;
float sum(float a, float b)
{
	float suma = 0;
	suma = a + b;
	return suma;
}
float res(float a, float b)
{
	float resta = 0;
	resta = a-b;
	return resta;
}
float divi(float a, float b)
{
	float division = 0;
	division = a/b;
	return division;
}
float mul(float a, float b)
{
	float multiplicacion = 0;
	multiplicacion = a * b;
	return multiplicacion;
}
void calculadora()
{
	char op[20];
	float x = 0, y = 0, resul = 0;
	printf("¿Que operacion quieres realizar?\n");
	fgets(op, 20, stdin);
	strtok(op, "\n");
	printf("¿con que numeros desea realizar la operacion\n");
	scanf("%f", &x);
	if (getchar()!='\n');
	scanf("%f", &y);
	if (getchar()!='\n');

	if ((strcmp(op, "suma"))==0)
	{
		resul = sum(x,y);
	}
	else if ((strcmp(op, "resta"))==0)
	{
		resul = res(x,y);
	}
	else if ((strcmp(op, "division"))==0)
	{
		resul = divi(x,y);
	}
	else if ((strcmp(op, "multiplicacion"))==0)
	{
		resul = mul(x,y);
	}
	else
		printf("No ingreso una opcion valida\n");
	if (resul != 0)
		printf("El resultado es%.2f\n", resul);
}
void ingresar(agenda *p, int t)
{
	for (int i = 0; i < t; ++i)
	{
		printf("Ingrese el nombre\n");
		fgets((p+i)->nombre, 50, stdin);
		strtok((p+i)->nombre, "\n");
		printf("Ingrese el correo\n");
		fgets((p+i)->correo, 25, stdin);
		strtok((p+i)->correo, "\n");
		printf("Ingrese el numero\n");
		scanf("%f", &(p+i)->numero);
		if (getchar()!='\n');
	}
} 
void buscar(agenda *p, int t)
{
	char cpy[50];
	printf("¿Que nombre quieres buscar?\n");
	fgets(cpy, 50, stdin);
	strtok(cpy, "\n");

	for (int i = 0; i < t; ++i)
	{
		
		if ((strcmp((p+i)->nombre, cpy))==0)
		{
			printf("Nombre: %s\nCorreo: %s\nNumero: %.0f\n", (p+i)->nombre,(p+i)->correo,(p+i)->numero );
		}
	}
}

int main()
{
	char j[4];
	do
	{
		char bus[50], pr[4];
		int a = 0;
		agenda *p;
		printf("¿Que accion quiere realizar? calculadora/agenda\n");
		fgets(bus, 50, stdin);
		strtok(bus, "\n");
		if ((strcmp(bus, "calculadora"))==0)
		{
			do
			{
				calculadora();
				printf("Quiere volver a hacer la operacion?...(si/no)\n");
				fgets(pr, 4, stdin);
				strtok(pr, "\n");
			} while ((strcmp(pr, "si"))==0);
		}
		else if ((strcmp(bus, "agenda"))==0)
		{
			printf("¿Cuantos contactos quiere ingresar?\n");
			scanf("%d", &a);
			if (getchar()!='\n');
			p = (agenda*)malloc(sizeof(agenda)*a);
			if (p == NULL)
			{
				printf("No se encontro memoria\n");
				exit(1);
			}
			ingresar(p , a);
			FILE *f;
			f = fopen("agenda8.bin", "wb");
			if (f == NULL)
			{
				printf("ERROR\n");
				exit(1);
			}
			fwrite(p, sizeof(agenda), a, f);
			fclose(f);
			free(p);
			printf("¿Desea buscar algun nombre?...(si/no)\n");
			fgets(pr, 4, stdin);
			strtok(pr, "\n");
			if ((strcmp(pr, "si"))==0)
			{
				p = (agenda*)malloc(sizeof(agenda)*a);
				if (p == NULL)
				{
					printf("No se encontro memoria\n");
					exit(1);
				}
				f = fopen("agenda8.bin", "rb");
				if (f == NULL)
				{
					printf("ERROR\n");
					exit(1);
				}
				fread(p, sizeof(agenda), a, f);
				while(getchar()!='\n');
				buscar(p, a);
				fclose(f);
				free(p);

			}

		}
		printf("¿Desea realizar alguna otra cosa?...(si/no) \n");
		fgets(j, 4, stdin);
		strtok(j, "\n");

	}  while ((strcmp(j, "si"))==0);
	return 0;
}