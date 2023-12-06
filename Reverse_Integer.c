#include<stdio.h>
int main()
{
    int n,i,b=0,a;
    scanf("%d",&n);
    for(;n!=0;)
    {
        a=n%10;
        b=b*10+a;
        n=n/10;
    }
    printf("%d",b);
}