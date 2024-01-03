#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int i,j,arr[a][b];
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int c=0;
    for(j=0;j<b;j++)
    {
        c=0;
        for(i=0;i<a;i++)
        {
            c+=arr[i][j];
        }
        printf("%d ",c);
    }
    
}