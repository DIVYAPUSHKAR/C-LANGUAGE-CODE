//mean,variance and deviation
#include<stdio.h>
#include<math.h>
int main()
{
 int n,i,j,t,sum=0;
 float mean,v=0,res=0,d;
 printf("enter array size");
 scanf("%d",&n);
 int a[n];
 printf("enter elements");
 for(i=0;i<n;i++)
 
  scanf("%d",&a[i]);
 
 for(i=0;i<n;i++)
 {
  sum=sum+a[i];
  for(j=i+1;j<n;j++)
  {
    if(a[i]>a[j])
    {
     t=a[i];
     a[i]=a[j];
     a[j]=t;
     }
    }
 }
 mean=sum/n;
 printf("after sorting\n");
 for(i=0;i<n;i++)
 {
  printf("%d ",a[i]);
  v=v+pow((a[i]-mean),2);
  }
  printf("\n");
 printf("mean = %f\n",mean);
  res=(float)v/n;
  d=sqrt(res);
  printf("variance=%f\n",res);
  printf("deviation=%f\n",d);
  return 0;
  }
