#include<stdio.h>
int main()
{
    int a,b,c,d,k;
    scanf("%d",&a);
    b=a/3600;
    k=a%3600;
    c=k/60;
    d=k%60;
    printf("H:M:S-%d:%d:%d",b,c,d);
}