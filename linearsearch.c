//searching element linearly
#include<stdio.h>
int main()
{
    int n,i,k,f=0;
    printf("enter array size\n");
    scanf("%d",&n);
    int a[n];
    printf("enter elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter searching element\n");
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
       if(k==a[i])
       {
        f=1;
        break;
       }
    }
    if(f==1)
    printf("%d is found at index %d\n",k,i);
    else
    printf("%d is not found\n",k);
}
