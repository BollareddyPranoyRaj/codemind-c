#include<stdio.h>
int main()
{
    int n,i,s=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            s=s+arr[i];
        }
    }
    printf("%d",s);
}