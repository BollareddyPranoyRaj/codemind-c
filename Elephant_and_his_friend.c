#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d",&a);
    c=a%5;
    b=a/5;
    if(c==0)
    {
        printf("%d",b);
    }
    else
    {
        printf("%d",b+1);
    }
}