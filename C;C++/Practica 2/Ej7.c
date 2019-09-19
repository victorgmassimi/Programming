#include<stdio.h>
int main()
{
    float sum=0;
    for (float i=2;i<=20;i++)
    {
        sum = sum +(1/i);
    }
    printf("%.2f\n",sum);
    return 0;
}