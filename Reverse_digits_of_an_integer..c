#include<stdio.h>
int main()
{
    int a,b,c,i,j,k;
    scanf("%d",&a);
    i=a;
    for(j=0;j<10;j++)
    {
        k=i%10;
        i=i/10;
        printf("%d",k);
        if(i==0)
        {
            break;
        }
    
    }
}