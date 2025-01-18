#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf(".....arithmetic operators........\n");
    printf("enter a,b,c,d values\n");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    printf("sum=%d\n",a+b);
    printf("sub=%d\n",a-b);
    printf("mul=%d\n",a*b);
    printf("div=%d\n",a/b);
    printf("mod=%d\n",a%b);
    printf("....assignment operators....\n");
    printf("%d\n",c+=b);
    printf("%d\n",d-=a);
    printf("%d\n",c*=b);
    printf("%d\n",a/=d);
    printf("%d\n",c%=b);
    printf("....relational operators....\n");
    printf("%d\n",a>b);
    printf("%d\n",a<b);
    printf("%d\n",a<=b);
    printf("%d\n",a>=b);
    printf("%d\n",a==b);
    printf("%d\n",a!=b);
    printf("......logical operators.....\n");
    printf("%d\n",(a>b && a>c));
    printf("%d\n",(a>b || a>c));
    printf("%d\n",(a!=b));
    printf("...bitwise operators.....\n");
    printf("%d\n",a&d);
    printf("%d\n",b/d);
    printf("%d\n",a^b);
    printf("%d\n",~5);
    printf("%d\n",212>>2);
    printf("%d\n",212<<2);
    int x=1,y;
    printf("....conditional/ternary operators.....\n");
    y=(x==1?2:0);
    printf("x=%d\n",x);
    printf("y=%d\n",y);
    printf(".....increment and decrement....\n");
    printf("%d\n",++a);
    printf("%d\n",b--);
    printf("%d\n",b++);
    printf("%d\n",--c);
}
