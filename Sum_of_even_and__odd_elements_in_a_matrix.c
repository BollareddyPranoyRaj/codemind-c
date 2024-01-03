#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int arr[a][b],i,j;
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int c=0,d=0;
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            if(arr[i][j]%2==0)
            {
                c=c+arr[i][j];
            }
            else
            {
                d=d+arr[i][j];
            }
        }
    }
    printf("%d %d",c,d);
}