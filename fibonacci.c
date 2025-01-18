#include<stdio.h>
int main()
{
int n,a=0,b=1,c,i;
printf("enter n value\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
 printf("%d ",a);
 c=a+b;
 a=b;
 b=c;
 }
printf("\nfibonacci=%d\n",c);
} 
