#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    float uc,bill;
    if(n<=199)
    {
        uc=1.20;
    }
    else if(n>200 && n<400)
    {
        uc=1.50;
    }
    else if(n>=400 && n<600)
    {
        uc=1.80;
    }
    else 
    {
        uc=2.00;
    }
    bill=uc*n;
    if(n>400)
    {
        printf("%.2f",bill+(bill*0.15));
    }
    else
    {
        printf("%.2f",bill+100);
    }
}