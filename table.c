#include<stdio.h>
int main()
{
int n,x,i;
printf("enter number");
scanf("%d",&n);
printf("enter no. of rows:");
scanf("%d",&x);
for(i=1;i<=x;i++)
printf("%d*%d=%d\n",n,i,n*i);
return 0;
}
