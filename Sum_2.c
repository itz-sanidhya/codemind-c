#include<stdio.h>
int main()
{
    int a,b,c,d,i,x=0,y,z;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    for(i=a;i<=b;i++)
    {
        if(i%c==0 && i%d!=0)
        {
            x=x+i;
        }
    }
    printf("%d",x);
}