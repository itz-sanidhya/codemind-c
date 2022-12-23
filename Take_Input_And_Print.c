#include<stdio.h>
#include<string.h>
int main()
{
    char ch[30];
    fgets(ch,30,stdin);
    printf("%s",ch);
    return 0;
}