#include<stdio.h>
int main()
{
 int n,i,max;
 printf("enter the array size\n");
 scanf("%d",&n);
 int a[n];
 int *p;
 p=a;
 printf("enter the elements\n");
 for(i=0;i<n;i++)
 {
  scanf("%d",p+i);
   }
 max=*(p+0);
 for(i=0;i<n;i++)
 {
  if(max<*(p+i))
   {
    max=*(p+i);
     }
    }
  printf("largest element is %d\n",max);
}
