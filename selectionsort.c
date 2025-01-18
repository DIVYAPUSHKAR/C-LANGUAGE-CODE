//we have to select element 
#include<stdio.h>
int main()
{
    int n,i,max,j,t;
    printf("enter number of elements\n");
    scanf("%d",&n);
    int a[n];
    printf("enter elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        max=i;
        for(j=i+1;j<n;j++)
        {
            if(a[max]<a[j])
            {
                max=j;
            }
        }
        t=a[i];
        a[i]=a[max];
        a[max]=t;
    }
    printf("elements in descending order\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}
