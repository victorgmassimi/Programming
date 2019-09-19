#include <stdio.h>
#include <stdlib.h>

int main(){
int reslutado,a=2,b=3,c=4,d=5,cont=1;
reslutado= a+b*c/d;
printf("resultado %d\t %d\n",cont,reslutado);
cont++;
reslutado=a% 5%2+c;
printf("resultado %d\t %d\n",cont,reslutado);
cont++;
reslutado=(a+b)*c %d;
printf("resultado %d\t %d\n",cont,reslutado);
cont++;
reslutado= (d<65)&&(2-14==c+1);
printf("resultado %d\t %d\n",cont,reslutado);
cont++;
reslutado=a<=b || (3>a);
printf("resultado %d\t %d\n",cont,reslutado);
cont++;
reslutado=(c<=7+d) || (7>c);
printf("resultado %d\t %d\n",cont,reslutado);
cont++;
reslutado=(a>d) && (2-14==c+1);
printf("resultado %d\t %d\n",cont,reslutado);
cont++;
reslutado=a%d%c;
printf("resultado %d\t %d\n",cont,reslutado);
cont++;
reslutado=3+5*d % 10;
printf("resultado %d\t %d\n",cont,reslutado);
cont++;
reslutado=a/b %2;
printf("resultado %d\t %d\n",cont,reslutado);
cont++;
reslutado=-a*7;
printf("resultado %d\t %d\n",cont,reslutado);
cont++;
reslutado= (a>d ) && (b<c) || (d>5);
printf("resultado %d\t %d\n",cont,reslutado);
cont++;
reslutado= ((a>b) || (a<c)) && ((a=c) ||(a>=b));
printf("resultado %d\t %d\n",cont,reslutado);
cont++;
cont++;
reslutado = ((a>b) || (a<d)) && 16;
printf("resultado %d\t %d\n",cont,reslutado);
cont++;
reslutado= ((a>=d) && (c>d));
printf("resultado %d\t %d\n",cont,reslutado);
cont++;
reslutado= !(a<=c) || (c>d);
printf("resultado %d\t %d\n",cont,reslutado);
cont++;
return 0;
}

