#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,a=0,b=0,c,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        a=a+(i*i);
    }
    for(j=1;j<=n;j++)
    {
        b=b+j;
    }
    c=pow(b,2);
    printf("%d",c-a);
}