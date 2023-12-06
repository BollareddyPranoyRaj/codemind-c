#include<stdio.h>
int main()
{
    int n,i,a,b,c=0,d;
    scanf("%d",&n);
    d=n;
    a=n*n;
    for(;a!=0;)
    {
        b=a%10;
        c=c+b;
        a=a/10;
    }
    if(d==c)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}