#include<stdio.h>
int main()
{
 int n,i,r,p=0,t;
 printf("enter n value\n");
 scanf("%d",&n);
 t=n;
 while(n>0)
  {
  r=n%10;
  p=p*10+r;
  n=n/10;
  }
  if(p==t)
  {
   printf("%d is a palindrome\n",t);
   }
  else
  {
   printf("%d is not a palindrome\n",t);
   }
   printf("sum = %d\n",p);
}
