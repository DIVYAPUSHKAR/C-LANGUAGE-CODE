//factorial  using functions
#include<stdio.h>
int fact(int);
int main()
{
    int n;
    printf("enter any number\n");
    scanf("%d",&n);
    int s=fact(n);
    printf("without recursion factorial of %d = %d\n",n,s);
    printf("with recursion factorial of %d = %d\n",n,s);
}
int fact(int n)
{
//factorial of a number without  recursion
    int i,f=1;
    for(i=1;i<=n;i++)
    {
      f*=i; 
    }
    return f;
//factorial of a number using recursion
    if(n<=1)
    {
      return 1;
    }
    else
    {
      return n*fact(n-1);
    }
}
