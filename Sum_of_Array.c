#include<stdio.h>
int main()
{
    int n,b=0,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        b=b+arr[i];
    }
    printf("%d",b);
}
