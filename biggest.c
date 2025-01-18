#include<stdio.h>
void main()
{
int a,b,res;
printf("Enter any two numbers \n");
scanf("%d%d",&a,&b);
res=(a>b?a:b);
printf("The biggest number is %d",res);
}
