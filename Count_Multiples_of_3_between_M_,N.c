#include<stdio.h>
int main()
{
    int n,i,a=0,m;
    scanf("%d%d",&n,&m);
    for(i=n;i<=m;i++)
    {
        if(i%3==0)
        {
            a=a+1;
        }
    }
    printf("%d",a);
}