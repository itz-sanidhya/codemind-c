#include<stdio.h>
int main()
{
    int a,b,c,d;;
    scanf("%d%d",&a,&b);
    if(a>=0 && a<=10 && b>=0 && b<=10)
    {
        c=21-a-b;
        if(c>10)
        {
            printf("-1");
        }
        else
        {
            printf("%d",c);
        }
    }
    else
    {
        printf("-1");
    }
}