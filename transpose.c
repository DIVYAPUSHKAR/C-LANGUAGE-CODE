//transpose of matrix
#include<stdio.h>
int main()
{
int r,c,i,j;
printf("enter row&col sizes");
scanf("%d%d",&r,&c);
int a[r][c],b[r][c];
printf("enter matrix elements");
for(i=0;i<r;i++)
{
 for(j=0;j<c;j++)
  {
   scanf("%d",&a[i][j]);
   }
  }
printf("matrix elements are\n");
for(i=0;i<r;i++)
{
 for(j=0;j<c;j++)
  {
   printf("%d ",a[i][j]);
   }
   printf("\n");
  }
for(i=0;i<r;i++)
{
 for(j=0;j<c;j++)
  {
  b[j][i]=a[i][j];
  }
 }
printf("transpose of matrix\n");
for(i=0;i<c;i++)
 {
 for(j=0;j<r;j++)
  {
  printf("%d ",b[i][j]);
  }
  printf("\n");
 }
}
