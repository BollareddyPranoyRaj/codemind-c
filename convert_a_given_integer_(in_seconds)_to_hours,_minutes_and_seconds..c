#include<stdio.h>
int main()
{
    int a,b,c,x;
    scanf("%d",&x);
    a=x/3600;
    b=(x%3600)/60;
    c=(x%3600)%60;
    printf("H:M:S-%d:%d:%d",a,b,c);
}