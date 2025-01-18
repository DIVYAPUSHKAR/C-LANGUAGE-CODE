//division of numbers
#include<stdio.h>
#include<errno.h>
int main()
{
int a,b;
float c;
printf("enter values");
scanf("%d%d",&a,&b);
if(b==0)
{
fprintf(stderr,"division by zero is exception");
}
else
{
c=a/b;
printf("division=%f",c);
}
return 0;
}
