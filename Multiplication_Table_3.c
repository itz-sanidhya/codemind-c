#include<stdio.h>
int main()
{
    int a,b,k,n,i;
    scanf("%d%d%d",&a,&b,&k);
    for(i=b;i<=k;i++)
    {
        n=i*a;
        printf("%d x %d = %d",a,i,n);
        printf("
");
    }
    
}