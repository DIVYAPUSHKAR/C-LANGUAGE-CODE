//array elements in reverse order using pointer
#include<stdio.h>
int main()
{
    int n,i;
    printf("enter size of array\n");
    scanf("%d",&n);
    int a[n];
    int *p;
    p=a;
    printf("enter elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }
    printf("array elements in reverse order\n");
    for(i=n-1;i>=0;i--)
    {
        printf("%d ",*(p+i));
    }
    printf("\n");
    return 0;
}
