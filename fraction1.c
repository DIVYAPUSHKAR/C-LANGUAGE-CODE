//gp of 1+x+x^2+x^3+.....+x^n
#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,x,s=1;
    printf("enter the values of x and n:\n");
    scanf("%d%d",&x,&n);
    for(i=1;i<=n;i++)
    {
        s=s+pow((x),i);
    }
    printf("sum of gp = %d\n",s);
    return 0;
}
