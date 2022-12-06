#include<stdio.h>
int main()
{
    int n;
    scanf("A single line containing a positive integer,%d",&n);
    if((n%2!=0)||(n%2==0&&n>6&&n<20))
	{
        printf("weird");
	}
    else if((n%2==0&&n>2&&n<50)||(n%2==0&&n>20))
	{
        printf("not weird");
    }
	
}