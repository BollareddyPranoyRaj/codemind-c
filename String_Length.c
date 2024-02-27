#include<stdio.h>
int main()
{
    int i,c=0;
    char s[300];
    scanf("%[^
]s",&s);
    for(i=0;s[i]!=NULL;i++)
    {
        c++;
    }
    printf("%d",c);
}