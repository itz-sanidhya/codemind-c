#include<stdio.h>
int main()
{
    int a,b=0,c,d,i,k;
    scanf("%d",&a);
    c=a;
    if(a!=0)
    {
        for(i=1;i<10;i++)
        {
            
            b=(b*10)+(c%10);
            c=c/10;
            if(c==0)
            {
                break;
            }
        }
        
        if(b==a)
        {
            printf("Palindrome");
        }
        else
        {
            printf("Not Palindrome");
        }
    }
}