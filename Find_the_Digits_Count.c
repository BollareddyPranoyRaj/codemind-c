#include<stdio.h>
int main()
{
    int a,b=0;
    scanf("%d",&a);
    for(;a!=0;)
    {
        a=a/10;
        b+=1;
    }
        printf("%d",b);
}
