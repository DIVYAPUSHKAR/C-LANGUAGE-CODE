//even values from 1 to n
#include<stdio.h>
int main()
{
int n,x=0;
printf("enter a value\n");
scanf("%d",&n);
while(x<=n)
{
if(x%2==0)
{
printf("%d,",x);
}
x++;
}
printf(" are even\n");
return 0;
}
