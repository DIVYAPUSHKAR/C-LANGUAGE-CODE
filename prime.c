//prime or not
#include<stdio.h>
int main()
{
int n,i,count=0;
printf("enter number");
scanf("%d",&n);
for(i=1;i<=n;i++)
if(n%i==0)
{
count++;
}
if(count==2)
printf("is a prime number");
else
printf("is not a prime number");
return 0;
}
