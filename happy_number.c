#include<stdio.h>
#include<math.h>
main()
{
 int i,j,n,temp,sum=0;
 scanf("%d",&n);
  while(sum!=1 && sum!=4)
  {
   sum=0;
   while(n>0)
  {
    j=n%10;
    sum+=(j*j);
    n/=10; 
  }
  n=sum;
  }
 if(sum==1) printf("True");
 else printf("False");
}