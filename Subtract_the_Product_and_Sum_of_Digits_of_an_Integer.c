#include<stdio.h>
int main()
{
    int a,b=0,c,n,i=0,j=1,k;
    scanf("%d",&n);
    while(n<10000000000000000000000000000000000000000000000000)
    {
        b=(n%10);
        n=n/10;
        if(b==0)
        {
             break;
        }
        i=i+b;
        j=j*b;
    }
    k=j-i;
    printf("%d",k);
}