#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,sum=0;
    float mean,v,va,sd;
    printf("enter size\n");
    scanf("%d",&n);
    int a[n];
    printf("enter elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    mean=(float)sum/n;
    printf("sum = %d\n",sum);
    printf("mean = %f\n",mean);
    for(i=0;i<n;i++)
    {
        v=v+pow((a[i]-mean),2);
        va=(float)v/n;
    }
    printf("variance = %f\n",va);
    sd=sqrt(va);
    printf("standard deviation = %f\n",sd);
    return 0;
}
