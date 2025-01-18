#include<stdio.h>
int main()
{
int x,y,max;
printf("enter numbers");
scanf("%d%d",&x,&y);
max=((x>y)?x:y);
while(1)
{
if(max%x==0 && max%y==0)
{
printf("lcm of %d & %d = %d\n",x,y,max);
break;
}
++max;
}
return 0;
}
