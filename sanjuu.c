#include<stdio.h>
int main()
{
int n,a=0,b=1,c,i;
printf("enter n value\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
 if(i<=1)
  {
  c=i;
   }
 else
 {
 c=a+b;
 a=b;
 b=c;
 printf("%d ",c);
 }
printf("\n%d\t",c);
}
} 
