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
    int a,c=0;
    scanf("%d",&a);
    for(i=0;i<n;i++)
    {
        if(a==arr[i])
        {
            c=c+1;
            break;
        }
    }
    if(c==1)        printf("True");
    else            printf("False");
}
