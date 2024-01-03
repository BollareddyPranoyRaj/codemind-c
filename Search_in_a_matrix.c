#include<stdio.h>
int main()
{
    int i,j,a,b;
    scanf("%d%d",&a,&b);
    int arr[a][b];
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int c,d=0;
    scanf("%d",&c);
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
             if(c==arr[i][j]) 
             {
                 d++;
             }
        }
    }
    if(d>0)        printf("1");
    else           printf("0");
}