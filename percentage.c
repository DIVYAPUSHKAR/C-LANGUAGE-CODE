//percentage in double
#include<stdio.h>
int main()
{
int a,b;
double c;
printf("enter value");
scanf("%d%d",&a,&b);
c=((double)a/b)*100;
printf("%d is %.2lf%% of %d",a,c,b);
return 0;
}
