# include<stdio.h>
int main()
{
    int n,a,b;
    scanf("%d",&n);
    a=n/60;
    b=n%60;
    printf("%d Hour(s) %d Minute(s)",a,b);
}