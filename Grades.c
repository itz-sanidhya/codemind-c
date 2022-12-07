#include<stdio.h>
int main()
{
    int p,ch,b,m,co,mks;
    scanf("%d%d%d%d%d",&p,&ch,&b,&m,&co);
    mks=((p+ch+b+m+co)/5);
    if(mks>=90)
    {
        printf("Grade A");
    }
    else if(mks>=80)
    {
        printf("Grade B");
    }
    else if(mks>=70)
    {
        printf("Grade C");
    }
    else if(mks>=60)
    {
        printf("Grade D");
    }
    else if(mks>=40)
    {
        printf("Grade E");
    }
    else if(mks<40)
    {
        printf("Grade F");
    }
    
}