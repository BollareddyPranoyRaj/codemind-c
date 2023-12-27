#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c=0,i;
    scanf("%f%f",&a,&b);
    for(i=a;i<=b;i++)
    {
        c=c+sqrt(i);
    }
    printf("%.2f",c);
}