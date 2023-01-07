#include<stdio.h>
int main()
{
    int n,i,j=1,k=0,x;
    scanf("%d",&n);
    while(n>0)
    {
        i=n%10;
        n=n/10;
        j=j*i;
        k=k+i;
    }
    x=j-k;
    printf("%d",x);
}