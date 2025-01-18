//searching element using binary
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,j,t,k,f=0;
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
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    printf("after sorting\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    int low=0,mid,high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(k==a[mid])
        {
            printf("\nelement is found at %d\n",mid);
            exit(0);
        }
        else if(k>a[mid])
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
}
