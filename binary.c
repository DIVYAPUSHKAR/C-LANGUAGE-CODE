//0 to 255 binary
#include<stdio.h>
int main()
{
    int n,r,t,i,j;
    printf("enter a number\n");
    scanf("%d",&n);
    printf("binary equivalents\n");
    for(i=1;i<=n;i++)
     {
        int bin=0,p=1;
        for(j=i;j>0;)
       {
           r=j%2;
           j=j/2;
           bin=bin+(p*r);
           p=p*10;
        }
        printf("%d = %d\n",i,bin);
     }
   return 0;
}
