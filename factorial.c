#include<stdio.h>
int main()
{
int n,i,factorial=1;
printf("enter n value");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
 factorial=factorial*i;
 }
printf("factorial of %d=%d\n",n,factorial);
}
