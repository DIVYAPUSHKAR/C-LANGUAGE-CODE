//to delete n numbers
#include<stdio.h>
int main()
{
    int s,n,i,p;
    printf("enter array size\n");
    scanf("%d",&s);
    int a[s];
    printf("enter elements\n");
    for(i=0;i<s;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter position to delete\n");
    scanf("%d",&p);
    printf("enter the number of elements to delete\n");
    scanf("%d",&n);
    for(i=p;i<p+n;i++)
    {
        a[i]=a[i+n];
    }
    printf("after deleting n numbers\n");
    for(i=0;i<s-n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n"); 
}
