#include<stdio.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    	for(k=1;k<=i-1;k++)
    	{
    		printf(" ");
		}
        for(j=1;j<=n-i+1;j++)
        {
            printf("%c ",i+64);
        }
        printf("
");
    }
}