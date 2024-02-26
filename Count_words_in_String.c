#include<stdio.h>
#include<string.h>
int main()
{
    int c=1,i;
    char str[100];
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]==' ')
        {
            c+=1;
        }
    }
    printf("%d",c);
}