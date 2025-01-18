#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c,d,r1,r2;
printf("enter the values");
scanf("%d%d%d",&a,&b,&c);
d=(b*b)-(4*a*c);
r1=(-b+sqrt(d))/(2*a);
r2=(-b-sqrt(d))/(2*a);
if(d<0)
printf("imaginary\n");
else if(d>0)
printf("real %d,%d\n",r1,r2);
else
printf("equal %d,%d\n",r1,r2);
return 0;
}
