#include<stdio.h>
int main()
{
    int n,a,b;
    scanf("%d",&n);
    a=n/4;
    b=n%4;
    if(b==0)
    {
        printf("%d",a);
    }
    else
    {
        printf("%d",a+1);
    }
}