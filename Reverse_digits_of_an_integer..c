#include<stdio.h>
int main()
{
    int n,r=0,a;
    scanf("%d",&n);
    while(n!=0)
    {
        a=n%10;
        r=r*10+a;//30 +2=32
        n=n/10;
    }
    printf("%d",r);
}
