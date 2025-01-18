//operands in maths
#include<stdio.h>
int main()
{
int a,b;
char ch;
printf("enter the operator");
scanf("%c",&ch);
printf("enter the values");
scanf("%d%d",&a,&b);
switch(ch)
{
case '+':printf("sum=%d",a+b);
         break;
case '-':printf("sub=%d",a-b);
         break;
case '*':printf("mul=%d",a*b);
         break;
case '/':printf("div=%d",a/b);
         break;
default:printf("invalid");
}
return 0;
}
