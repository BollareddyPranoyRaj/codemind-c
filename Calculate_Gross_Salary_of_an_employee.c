#include<stdio.h>
int main()
{
    float s,r,d,pf,gs;
    scanf("%f%f%f",&s,&r,&d);
    pf=s*0.12;
    gs=s+r+d+pf;
    printf("%.2f
%.2f",pf,gs);
}