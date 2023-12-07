#include<stdio.h>
int main()
{
    int i,j,n,m,a,b,c=0,d=0;
    scanf("%d%d",&n,&m);
    a=n;
    b=m;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            c=c+i;
        }
    }
    for(j=1;j<m;j++)
    {
        if(m%j==0)
        {
            d=d+j;
        }
    }
    if(a==d && b==c)
    {
        printf("Amicable");
    }
    else
    {
        printf("Not Amicable");
    }
}