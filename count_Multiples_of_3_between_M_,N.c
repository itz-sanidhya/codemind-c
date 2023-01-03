#include<stdio.h>
int main()
{
    int n,m,i=0,c=0;
    scanf("%d%d",&n,&m);
    for(i=n+1;i<m;i++)
    {
        if(i%3==0)
        {
            c++;
        }
    }
    printf("%d",c);
}