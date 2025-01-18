//percentage in float
#include<stdio.h>
int main()
{
int a,b;
float c;
printf("enter value");
scanf("%d%d",&a,&b);
c=((float)a/b)*100;
printf("%d is %.2f%% of %d",a,c,b);
return 0;
}
