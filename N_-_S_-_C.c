#include<stdio.h>
int main()
{
    int a,b,c,d,i;
    scanf("%d%d",&a,&b);
    for(i=a+1;i<b;i++)
    {
        c=i*i;
        d=c*i;
        printf("%d %d %d
",i,c,d);
    }
}