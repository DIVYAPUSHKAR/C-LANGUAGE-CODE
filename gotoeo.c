#include<stdio.h>
int main()
{
int n;
printf("enter a number");
scanf("%d",&n);
if(n%2==0)
 {
  goto even;
   }
else
 {
  goto odd;
   }
even:
  printf("%d is a even number\n",n);
odd:
  printf("%d is a odd number\n",n); 
}
