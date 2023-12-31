#include<stdio.h>
int main()
{
    int n,i;
    float a=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        a=a+arr[i];
    }
    float avg;
    avg=a/n;
    printf("%.2f",avg);
    
}