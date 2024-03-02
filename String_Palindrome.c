#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000],s1[1000];
    scanf("%[^
]s",&s);
    strcpy(s1,s);
    int t,i,j=strlen(s)-1;
    while(i<=j)
    {
        t=s[i];
        s[i]=s1[j];
        s1[j]=t;
        i++;
        j--;
    }
    if(strcmp(s1,s)==0)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
}