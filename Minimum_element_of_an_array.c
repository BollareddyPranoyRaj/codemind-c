#include<stdio.h>
int main()
{
    int n,i,b;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    b=arr[0];
    for(i=0;i<n;i++)
    if(b>arr[i])
    {
       b=arr[i];
    }
    printf("%d",b);
    
}