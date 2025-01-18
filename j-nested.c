#include<stdio.h>
int main()
{
 int a,b,c,exit;
 printf("enter values");
 scanf("%d%d%d",&a,&b,&c);
if(a>b)
  {
   if(a>c)
   {
    printf("%d is greater",a);
    }
   else
   {
    printf("%d is greater",c);
    }
    goto exit; 
   }
{
 if(c>b)
 {
  printf("%d is greater",c);
  }
else
{
 printf("%d is greater",b);
 }
}exit:
printf("\n");
} 
