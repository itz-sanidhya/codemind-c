#include<stdio.h>
int main()
{
    int n,i,k,j;
    scanf("%d",&n);
    for(i=1;i<=12;i++)
    {
        k=n*i;
        printf("%d x %d = %d",n,i,k);
        printf("
");
    }
}