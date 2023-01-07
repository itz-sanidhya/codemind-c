#include<stdio.h>
int main()
{
    int n,i,j,k=1,x=0,y,z;
    scanf("%d",&n);
    while(n>0)
    {
        i=n%10;
        n=n/10;
        k=k*i;
        x=x+i;
    }
    z=k-x;
    printf("%d",z);
}