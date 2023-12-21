#include<stdio.h>
int main()
{
    int n,a,b=0,s;
    scanf("%d",&n);
    s=n;
    for(;n!=0;)
    {
        a=n%10;
        b=b*10+a;
        n=n/10;
    }
    if(b==s)        printf("True");
    else        printf("False");
}