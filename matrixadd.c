//addition of matrices 
#include<stdio.h>
void add();
int main()
{
 add();
 }
void add()
{
 int r1,c1,r2,c2,i,j;
printf("enter 1st matrix row & col sizes");
scanf("%d%d",&r1,&c1);
printf("enter 2nd matrix row & col sizes");
scanf("%d%d",&r2,&c2);
int a[r1][c1],b[r2][c2],c[r1][c1];
if(r1==r2 && c1==c2)
{
printf("enter 1st matrix elements");
for(i=0;i<r1;i++)
{
 for(j=0;j<c1;j++)
 { 
  scanf("%d",&a[i][j]);
 }
}
printf("enter 2nd matrix elements");
for(i=0;i<r2;i++)
{
 for(j=0;j<c2;j++)
 {
  scanf("%d",&b[i][j]);
 }
}
printf("1st matrix elements are\n");
for(i=0;i<r1;i++)
 {
  for(j=0;j<c1;j++)
  { 
   printf("%d ",a[i][j]);
   }
   printf("\n"); 
 }
printf("2nd matrix elements are\n");
for(i=0;i<r2;i++)
 {
  for(j=0;j<c2;j++)
  {
   printf("%d ",b[i][j]);
   }
  printf("\n");
 }
printf("addition of  matrix\n");
for(i=0;i<r1;i++)
{
 for(j=0;j<c1;j++)
 {
  c[i][j]=a[i][j]+b[i][j];
  printf("%d  ",c[i][j]);
 }
 printf("\n");
}
}
else
{
printf("addition is not possible");
}
}
