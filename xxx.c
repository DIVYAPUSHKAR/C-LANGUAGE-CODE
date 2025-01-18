//to find roots
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d,r1,r2;
    printf("enter values a,b,c\n");
    scanf("%d%d%d",&a,&b,&c);
    d=sqrt(b*b-4*a*c);
    r1=(-b+d)/(2*a);
    r2=(-b-d)/(2*a);
    printf("roots are %d,%d\n",r1,r2);
    return 0;
}
