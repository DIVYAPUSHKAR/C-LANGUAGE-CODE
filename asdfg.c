#include<stdio.h>
int main()
{
 int n,i,j,k;
 printf("enter a number");
 scanf("%d",&n);
 for(i=1;i<n;i++)
  {
   for(j=1;j<n;j++)
    {
     for(k=0;k<n;k++)
      {
       if(k==5)
        {
         goto stop;
          }
         printf("%d %d %d\n",i,j,k);
        }
      }
    }
   stop:
   printf("exit from all the loops\n");
 }
 
