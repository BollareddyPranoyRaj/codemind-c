#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    if((m*(m+1))/2<=n)      printf("YES");
    else        printf("NO");
}