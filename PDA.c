#include<stdio.h>
int main()
{
    int a=0,b,c,n,i,j,k;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            a=a+i;
        }
        
    }
    if(a==n)
    {
        printf("PERFECT");
    }
    if(a<n)
    {
        printf("DEFICIENT");
    }
    if(a>n)
    {
        printf("ABUNDANT");
    }
}