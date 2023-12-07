#include<stdio.h>
int main()
{
    int n,i,a;
    scanf("%d",&n);
    for(;n!=0;)
    {
        a=n%10;
        printf("%d",a);
        n=n/10;
    }
}