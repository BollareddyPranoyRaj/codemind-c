#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int rem;
    for(i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
        {
            rem=arr[i];
        }
    }
    printf("%d",rem);
}