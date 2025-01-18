//to insert element at specific position
#include<stdio.h>
int main()
{
int n,i,insert,p;
printf("enter array size");
scanf("%d",&n);
int a[n];
printf("enter elements\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter position of element to insert\n");
scanf("%d",&p);
printf("enter inserting element\n");
scanf("%d",&insert);
for(i=n-1;i>=p;i++)
{
a[i+1]=a[i];
}
a[p]=insert;
for(i=0;i<=n;i++)
{
printf("%d",a[i]);
}
return 0;
}
