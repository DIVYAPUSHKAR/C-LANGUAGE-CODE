//roots of quadratic equation
#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c,d;
printf("enter the values");
scanf("%d%d%d",&a,&b,&c);
d=sqrt((b*b)-(4*a*c));
{
if(d<0)
printf("imaginary=");
else if(d==0)
printf("real and equal=");
else
printf("real and distinct=");
}
printf("%d,%d",(-b+d)/2*a,(-b-d)/2*a);
return 0;
}
