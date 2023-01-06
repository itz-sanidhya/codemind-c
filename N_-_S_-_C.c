#include<stdio.h>
int main()
{
    int a,b,c,x,y,z,i,j,k;
    scanf("%d%d",&a,&b);
    for(i=a+1;i<b;i++)
    {
        x=i*i;
        y=i*i*i;
        printf("%d %d %d",i,x,y);
        printf("
");
    }
    
}