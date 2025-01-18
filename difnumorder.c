//no's in 1,2 3,4 5 6...order
#include<stdio.h>
int main()
{
    int n,i,j,t=1;
    printf("enter no. of rows\n");
    scanf("%d",&n);
    printf("pyramid of numbers\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",t);
            t++;
        }
        printf("\n");
    }
    return 0;
}
