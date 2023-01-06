#include<stdio.h>
int main()
{
    int a,b,i,k;
    scanf("%d%d",&a,&b);
    for(i=1;i<=b;i++)
    {
        k=i*a;
        printf("%d x %d = %d",a,i,k);
        printf("
");
    }
}