//to print matrix elements
#include<stdio.h>
int main()
{
int r,c,i,j;
printf("enter row & col sizes");
scanf("%d%d",&r,&c);
printf("enter the elements");
for(i=1;i<r;i++)
{
for(j=1;j<c;j++)
{
scanf("%d",&a[i][j]);
}
}
for(i=1;i<r;i++)
{
for(j=1;j<c;j++)
{
printf("%d",a[i][j]);
}
printf("\n");
}
return 0;
}
