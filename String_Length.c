#include<stdio.h>
int main()
{
    int c=0,i;
    char s[1000];
    scanf("%[^
]s",&s);
    for(i=0;s[i]!=NULL;i++)
    {
        c++;
    }
    printf("%d",c);
}