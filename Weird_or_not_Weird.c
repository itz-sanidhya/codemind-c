#include<stdio.h>
int main()
{
    int n;
    n>1;
    n<100;
    scanf("A single line containing a positive integer,%d",&n);
    if((n%2!=0)||(n%2==0&&n>6&&n<20))
    {
        printf("weird");
    }
     else if((n%2==0&&n>2&&n<5)||(n%2==0&&n>20))
    {
        printf("not weird");
    }
}