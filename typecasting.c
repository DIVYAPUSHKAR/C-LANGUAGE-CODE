#include<stdio.h>
int main()
{
    int x,a;
    char y='a';
    printf("enter the values of x and a:\n");
    scanf("%d%d",&x,&a);
    x=x+y;
    float b=(float)a;
    printf("auto conversion:x=%d\n",x);
    printf("casting:%f\n",b);
    return 0;
}
