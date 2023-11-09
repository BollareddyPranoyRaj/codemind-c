#include<stdio.h>
int main()
{
    int x,a;
    scanf("%d",&x);
    a=x%10;
    for(;x>9;)
    {
        x=x/10;
    }
    printf("%d",a+x);
}