//power of number using function
#include<stdio.h>
int power(int,int);
int main()
{
    int a,b;
    printf("enter a,b values\n");
    scanf("%d%d",&a,&b);
    int s = power(a,b);
    printf("with recursion %d power %d = %d\n",a,b,s);
    printf("without recursion %d power %d = %d\n",a,b,s);
}
int power(int a,int b)
{
//with recursion
    if(b==0)
    {
        return 1;
    }
    else
    return a*power(a,b-1);
//without recursion
   int i,s=1;
   for(i=1;i<=b;i++)
   {
     s=s*a;
   }
   return s;
}
