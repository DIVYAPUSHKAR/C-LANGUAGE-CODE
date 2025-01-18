#include<stdio.h>
int main()
{
 int n,i,r,p=0;
 printf("enter n value\n");
 scanf("%d",&n);
 int t=n;
 while(n>0)
  {
  r=n%10;
  p=p+r*r*r;
  n=n/10;
  }
  if(p==t)
  {
   printf("%d is a armstrong\n",t);
   }
  else
  {
   printf("%d is not a armstrong\n",t);
   }
}
