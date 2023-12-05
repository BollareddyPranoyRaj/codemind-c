#include<stdio.h>
int main()
{
    int n,i,a,b=0,x;
    scanf("%d",&n);
    x=n;
    while(n!=0)
    {
        a=n%10;//1 2
        b=b*10+a;//1 10+2 12 
        n=n/10;//12
    }
    if(b==x)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
    
}