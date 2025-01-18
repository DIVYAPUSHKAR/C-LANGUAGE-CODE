//sum of array elements using pointer
#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("enter array size\n");
    scanf("%d",&n);
    int a[n];
    int *p;
    p=a;
    printf("enter elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
        sum+=*(p+i);
    }
    printf("sum of elements = %d\n",sum);
    return 0;
}
