#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i%2==0)
            printf("0 ");
            if(i%2==1)
            printf("1 ");
        }
        printf("
");
    }
}