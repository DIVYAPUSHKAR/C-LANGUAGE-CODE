//menu driven
#include<stdio.h>
int smallest(int [],int);
int greatest(int [],int);
int sum(int [],int);
float average(int [],int);
int main()
{
  int n,i;
  printf("enter array size\n");
  scanf("%d",&n);
  int a[n];
  printf("enter elements\n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("enter 7 when you want to stop............\n");
  int x;
  do
  {
  printf("enter your choice 1(min)/2(max)/3(sum)/4(avg)\n");
  scanf("%d",&x);
      switch(x)
  {
    case 1:printf("smallest = %d\n",smallest(a,n));
           break;
    case 2:printf("greatest = %d\n",greatest(a,n));       
           break;
    case 3:printf("sum of numbers = %d\n",sum(a,n));       
           break;
    case 4:printf("average = %0.2f\n",average(a,n));
           break;
    default:printf("invalid\n");
           break;
  }
  }
  while(x!=7);
}
int smallest(int a[],int n)
{
    int i,min;
    min=a[0];
    for(i=0;i<n;i++)
    {
       if(min>a[i])
       {
        min=a[i];
       }
    }
return min;
}
int greatest(int a[],int n)
{
    int i,max;
    max=a[0];
    for(i=0;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
return max;
}
int sum(int a[],int n)
{
    int i,sum=0;
    for(i=0;i<n;i++)
    {
        sum+=a[i];
    }
return sum;
}
float average(int a[],int n)
{
    int s=sum(a,n);
    float avg=(float)s/n;
    return avg;
}
