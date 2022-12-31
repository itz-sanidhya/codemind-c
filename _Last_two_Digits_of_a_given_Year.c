#include<stdio.h>
int main()
{
    int a,x,y,z;
    scanf("%d",&a);
    if(a!=0)
    {
       x=a%10;
       z=a/10;
       y=z%10;
       printf("%d%d",y,x);
    }
}

