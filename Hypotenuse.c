#include<stdio.h>
#include<math.h>
int main()
{
    float h,l,b;
    scanf("%f%f",&l,&b);
    h=sqrt(l*l + b*b);
    printf("%.2f",h);
}