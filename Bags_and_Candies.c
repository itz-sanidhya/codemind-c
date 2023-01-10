#include<stdio.h>
int main()
{
    int a,b,c,d,k,j,i;
    scanf("%d%d%d",&a,&b,&c);
    d=b*c;
    j=a%d;
    k=a/d;
    if(a==d*k)
    {
        printf("%d",k);
    }
    else if(a>=d*k)
    {
         i=1+k;   
        printf("%d",i);
    }
    else
    {
        i=k-1;
        printf("%d",k);
    }
}