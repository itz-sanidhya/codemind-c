#include<stdio.h>
int main()
{
    int n,i,j=1,k=0,a,b,c=0;
    scanf("%d",&n);
    a=n;
    while(a>0)
    {
        a=a/10;
        k++;
    }
    for(i=1;i<=k;i++)
    {
        j=j*10;
    }
    if(n%(j)==(n*n)%(j))
    {
        printf("Automorphic Number");
    }
    else
    {
        printf("Not an Automorphic Number");
    }
}