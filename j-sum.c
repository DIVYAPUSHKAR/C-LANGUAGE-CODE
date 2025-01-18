#include<stdio.h>
int main()
{
int a,i=0,sum=0;
do
{
 printf("enter value");
 scanf("%d",&a);
   if(a<0)
   break;
 sum=sum+a;
 }while(1);
printf("sum=%d",sum);
return 0;
}
