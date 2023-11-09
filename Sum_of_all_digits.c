#include<stdio.h>
int main()
{
    int x,a,b=0;
    scanf("%d",&x);
    for(;x!=0;)
    {
        a=x%10;
        b=b+a;
        x=x/10;
    }
    printf("%d",b);
}