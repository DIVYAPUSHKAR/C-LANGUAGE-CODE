//floors of building
#include<stdio.h>
#include<math.h>
int main()
{
int f=10,s=30;
float t,a=9.8;
while(f>0)
{
t=sqrt(2*s/a);
printf("floor %d=%f\n",f,t);
f=f-1;
s=s-3;
}
return 0;
}
