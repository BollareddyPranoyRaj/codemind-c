#include<stdio.h>
int main()
{
    int t,s,b;
    scanf("%d%d%d",&t,&s,&b);
    printf("%d",(2*t*s*b*512)/1024);
    printf(" KB ");
}