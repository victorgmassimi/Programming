#include <stdio.h>
 int main ()
 {
     int a=0,b=1,c=0;
     printf("Ingresa valor a dividir\n");
     scanf("%d",&a);
     printf("Ingresa valor por el que se quiere dividir\n");
     scanf("%d",&b);
     while (b==0)
     {
         printf("No se puede dividir por 0, ingresa otro valor\n");
         scanf("%d",&b);
     }
     while (a!=0 && b!=0)
     {
         c=a/b;
         printf("%d/%d=%d\n",a,b,c);
         a=c;
     }
     return 0;
 }