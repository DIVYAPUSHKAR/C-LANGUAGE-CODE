#include<stdio.h>
int main()
{
int n,i;
printf("enter array size");
scanf("%d",&n);
int a[n];
printf("enter elements\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=n-1;i>=0;i--)
{
printf("a[%d]=%d\n",i,a[i]);
}
return 0;
}
