#include<stdio.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
    	for(k=1;k<=i-1;k++)
    	{
    		printf(" ");
		}
        for(j=n;j>=i;j--)
        {
            printf("%c ",i+64);
        }
        printf("
");
    }
}