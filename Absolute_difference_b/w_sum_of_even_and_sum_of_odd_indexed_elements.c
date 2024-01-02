#include <stdio.h>
int main()
{
    int n,i,odd=0,even=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(i%2!=0)
        {
            odd=odd+arr[i];
        }
        else
        {
            even+=arr[i];
        }
    }
    if(odd>even)    printf("%d",odd-even);
    else            printf("%d",even-odd);
    
    
}