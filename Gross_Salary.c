#include<stdio.h>
int main()
{
    
    float sl,hra,da;
    scanf("%f",&sl);
    if(sl<=10000)
    {
        da=(80/100.0)*sl;
        hra=(20/100.0)*sl;
        sl=sl+da+hra;
        printf("%.2f",sl);
    }
    else if(sl<=20000)
    {
        da=(90/100.0)*sl;
        hra=(25/100.0)*sl;
        sl=sl+da+hra;
        printf("%.2f",sl);
    }
    else if(sl>20000)
    {
        da=(95/100.0)*sl;
        hra=(30/100.0)*sl;
        sl=sl+da+hra;
        printf("%.2f",sl);
    }
}