#include<stdio.h>
int main()
{
    int n,i,a,b=0,c=1;
    scanf("%d",&n);
    for(;n!=0;)
    {
        a=n%10;
        b=b+a;
        c=c*a;
        n=n/10;
    }
    if(b==c)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}