#include<stdio.h>
int main()
{
int a[5];
int large,i;
printf("enter array numbers: ");
large=a[0];
scanf("%d",&a);
for(i=1;i<6;i++)
if(a[i]>large)
large=a[i];
printf("largest %d",large);
}
