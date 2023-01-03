#include<stdio.h>
int main()
{
    int n,i=0,c=0,m;
    scanf("%d%d",&n,&m);
    for(i=n+1;i<m;i++)
    {
        if(i%6==0)
        {
            c++;
        }
    }
    printf("%d",c);
}