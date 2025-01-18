//to find simple and compound intrest
#include<stdio.h>
#include<math.h>
int main()
{
    int p,t,r,SI,CI;
    printf("enter values\n");
    scanf("%d%d%d",&p,&t,&r);
    SI=(p*t*r)/100;
    printf("simple interest=%d\n",SI);
    CI=p*(pow(1+(r/100)),t)-p;
    printf("compound interest=%d",CI);
    return 0;
}
