//to delete element at specific position
#include<stdio.h>
int main()
{
int n,i,p;
printf("enter array size");
scanf("%d",&n);
int a[n];
printf("enter elements\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter position of element\n");
scanf("%d",&p);
for(i=p;i<n-1;i++)
{
a[i]=a[i+1];
}
for(i=0;i<n-1;i++)
{
printf("%d",a[i]);
}
return 0;
}
