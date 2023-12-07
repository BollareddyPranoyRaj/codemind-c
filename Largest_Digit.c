#include<stdio.h>
int main()
{
    int n,i,a,b=0;
    scanf("%d",&n);
    while(n>0)
    {
        a=n%10;
        if(b<a)     b=a;
        n=n/10;
    }
    printf("%d",b);
}