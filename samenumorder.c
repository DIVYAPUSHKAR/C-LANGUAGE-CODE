//no's in 1,2 2,3 3 3...order
#include<stdio.h>
int main()
{
    int n,i,j;
    printf("enter no. of rows\n");
    scanf("%d",&n);
    printf("pyramid of numbers\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
    return 0;
}
