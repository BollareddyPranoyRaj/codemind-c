#include<stdio.h>
#include<math.h>
int main()
{
    int p,t,r;
    scanf("%d%d%d",&p,&r,&t);
    float ci;
    ci=p*pow(1+(r/100.0),t)-p;
    printf("%.2f",ci);
    
}