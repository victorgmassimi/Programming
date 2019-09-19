#include <stdio.h>
#include <stdlib.h>

int main()
{
    int day=01,month=01,year=2019,daysSum=0,bisiesto=0;
    printf("Ingresar una fecha\n");
    printf("Ingresa el dia dd ");
    scanf("%d",&day);
    printf("\nIngresa mes mm ");
    scanf("%d",&month);
    printf("\nIngresa year aaaa ");
    scanf("%d",&year);

    printf("Cuantos days quiere agregar a la fecha? ");
    scanf("%d",&daysSum);
    for(daysSum;0<daysSum;daysSum--)
    {
        //printf("suma %d meses %d dias %d\n",daysSum,month,day);
        if (year%4==0)   //año bisiesto
        {
            bisiesto=1;
        }
        else
        {
            bisiesto=0;
        }
        
        day++;
        if ((month<=7))         //primera mitad del año
        {
            if(month%2==0)
            {
               if (month==2)             //febrero
                {
                    if (day>28+bisiesto)
                    {
                        month++;
                        day=1;
                    }
                    
                }
                else
                {
                    if(day>30)          // meses con 30 days priimera mitad
                    {
                        month++;
                        day=1;
                    }
                }
            }
            else                        //meses con 31 days primera mitad
            {
                if(day>31)
                {
                    month++;
                    day=1;
                }
            }
            

            
        }
        else         //segunda mitad del año
        {
            if(month%2==0)           //meses con 31 dias 2a mitad
            {
                if(day>31)
                {
                    month++;
                    day=1;
                }
            }
            else
            { 
                if (day>30)             // meses con 30 dias 2a mitad
                {
                    month++;
                    day=1;
                }
            }
        }
        if (month>12)                         //conversion de meses a años.
        {
            month=1;
            year++;
        }

    }
    printf("nueva fecha: %d/%d/%d\n",day,month,year);
    return 0;
}