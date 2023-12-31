#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int max[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&max[i]);
    }
    int b=max[0];// {1} 2 3 4
    for(i=0;i<n;i++)
    if(max[i]>b)
    {
        b=max[i];
    }
    printf("%d",b);
}