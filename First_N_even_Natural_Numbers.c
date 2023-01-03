#include<stdio.h>
int main()
{
    int n,i,c,k;
    scanf("%d",&n);
    k=2*n;
    printf("%d ",k);
    for(i=1;i<n;i++)
    {
        k=k-2;
        printf("%d ",k);
    }
}