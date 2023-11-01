#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d",&x);
    y=(x-(x-1))+(x%10);
    printf("%d",y);
}