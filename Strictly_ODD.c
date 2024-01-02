#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n],c=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(i%2==0)
        {
            if(arr[i]%2!=0)
            {
                c++;
            }
        }
    }
    if(c>0)    printf("False");
    else        printf("True");
}