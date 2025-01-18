#include<stdio.h>
int main()
{
int n,sum=0,firstdigit,lastdigit;
printf("enter any number\n");
scanf("%d",&n);
lastdigit=n%10;
while(n>=10)
{
n=n/10;
}
firstdigit=n;
printf("firstdigit=%d\nlastdigit=%d\n",firstdigit,lastdigit);
return 0;
}
