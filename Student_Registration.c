#include<stdio.h>
int main()
{
    int t,n,m,k,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        int n,m,k;
        scanf("%d%d%d",&n,&m,&k);
        if(n+k<=m)       printf("YES
");
        else            printf("NO
");
    }
}