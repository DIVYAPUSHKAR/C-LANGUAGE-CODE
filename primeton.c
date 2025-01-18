//prime from 1 to n
#include<stdio.h>
int main()
{
int n,i,j;
printf("enter number\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
 int count=0;
 for(j=1;j<=i;j++)
 {
  if(i%j==0)
  count++;
  }
 if(count==2)
 printf("%d ",i);
}
printf("\n");
return 0;
}
