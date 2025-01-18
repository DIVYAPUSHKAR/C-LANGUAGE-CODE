//sum of natural no's using recursion
#include<stdio.h>
int sum(int);
int main()
{
    int n;
    printf("enter a number\n");
    scanf("%d",&n);
    int s=sum(n);
    printf("sum of n natural no's=%d\n",s);
}
int sum(int n)
{
    if(n<=0)
    {
        return 1;
    }
    else
    {
        return sum(n-1)+sum(n-2);
    }
return 0;
}
