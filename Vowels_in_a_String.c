#include<stdio.h>
#include<string.h>
int main(){
    char str[1000];
    int c=0,i,d;
    char vowel;
    scanf("%[^
]s",str);
    scanf(" %c",&vowel);
    for( i=0;str[i]!=NULL;i++){
        if(str[i]==vowel){
             printf("True
");
             c++;
             d=i;
            break;
        }
    }
    if(c>0){
        printf("%d
",d);
    }
    else{
        printf("False");
    }
}