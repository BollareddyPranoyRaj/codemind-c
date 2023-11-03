#include<stdio.h>
int main()
{
    int N,A,B,C;
    scanf("%d%d%d",&A,&N,&C);
    for(B=N;B<=C;B++)
    {
        printf("%d x %d = %d
",A,B,A*B);
    }
}