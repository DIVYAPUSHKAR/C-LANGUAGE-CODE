#include<stdio.h>
int main()
{
int n,rem,count=0;
printf("enter any number\n");
scanf("%d",&n);
while(n>0)
{
n=n/10;
count=count+1;
}
printf("%d\n",count);
return 0;
}
