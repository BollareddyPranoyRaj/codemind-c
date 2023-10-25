#include<stdio.h>
int main()
{
    int bs;
    scanf("%d",&bs);
    if(bs<=10000)
    {
    float a,b;
    a=bs*0.8;
    b=bs*0.2;
    printf("%.2f",bs+a+b);
    }
    else if(bs<=20000)
    {
        float a,b;
        a=bs*0.9;
        b=bs*0.25;
        printf("%.2f",bs+a+b);
    }
    else
    {
        float a,b;
        a=bs*0.95;
        b=bs*0.3;
        printf("%.2f",bs+a+b);
    }
}