#include<stdio.h>
int main()
{
    int n,i,k,j;
    scanf("%d",&n);
    k=n/4;
    if(n%4==0)
    {
        printf("%d",k);
    }
    else
    {
        printf("%d",k+1);
    }
}