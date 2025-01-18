#include<stdio.h>
int main()
{
 int n,i,j,k;
 printf("enter array size:");
 scanf("%d",&n);
 int a[n];
 printf("enter elements");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
  }
{
 for(i=0;i<n;i++)
  for(j=i+1;j<n;j++)
   {
    if(a[i]==a[j])
     {
      for(k=j;k<n;k++)
       a[k]=a[k+1];
       n--;//to decrement size
       j--;//to check other elements
       }
   }
}
 printf("after deleting duplicates:");
 for(i=0;i<n;i++)
 printf("%d \n",a[i]);
 return 0;
}       
