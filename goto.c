#include<stdio.h>
int main()
{
int i,j,k;
for(i=1;i<=9;i++)
{
 for(j=1;j<=8;j++)
  {
   for(k=0;k<=7;k++)
    {
     if(k==5)
      {
       goto end;
        }
      printf("%d %d %d\n",i,j,k);  
     }
   }
 }
 end:
 printf("\nexit from all the loops\n");
}
