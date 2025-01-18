//to print maximum of an array
#include<stdio.h>
int main()
{
int n,i,max;
printf("enter array size");
scanf("%d",&n);
int a[n];
printf("enter elements");
for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
max=a[0];
for(i=1;i<n;i++)
 if(max<a[i])
  {
   max=a[i];
  }
printf("max of array = %d",max);
return 0;
}
