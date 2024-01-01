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
    int s,c=0,v=0;
    for(i=0;i<n;i++)
    {
    	c=c+arr[i];
    }
    s=c/n;
    for(i=0;i<n;i++)
    {
    	if(s==arr[i])
    	{
    		v=v+1;
    		break;
		}
	}
	if(v==1)		printf("True");
	else			printf("False");
}