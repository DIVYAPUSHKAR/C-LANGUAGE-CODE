//to print minimum of an array
#include<stdio.h>
int main()
{
int n,i,min,max,sum=0;
printf("enter array size");
scanf("%d",&n);
int a[n];
printf("enter elements");
for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
  sum=sum+a[i];
 }
min=max=a[0];
for(i=0;i<n;i++)
{
 if(min>a[i])
  {
   min=a[i];
  }
  if(max<a[i])
  {
   max=a[i];
  }
 }
printf("min of array = %d\n",min);
printf("max of array = %d\n",max);
printf("average=%0.2f\n",(float)sum/n);
return 0;
}
