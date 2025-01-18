#include<stdio.h>
int main()
{
int x,y,i,min,hcf=1;
printf("enter numbers");
scanf("%d%d",&x,&y);
min=((x<y)?x:y);
for(i=1;i<=min;i++)
{
if(x%i==0 && y%i==0)
{
hcf=i;
}
}
printf("hcf of %d & %d = %d\n",x,y,hcf);
return 0;
}
