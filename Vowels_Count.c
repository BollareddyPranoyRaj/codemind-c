#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000],i,c=0;
    scanf("%[^
]s",&str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        {
            c++;
        }
    }
    printf("%d",c);
}