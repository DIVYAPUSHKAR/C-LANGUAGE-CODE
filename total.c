#include<stdio.h>
void main()
{
int s1,s2,s3,tot;
float avg;
printf("Enter three subjects marks\n");
scanf("%d%d%d",&s1,&s2,&s3);
tot=s1+s2+s3;
avg=(float)tot/3;
printf("Total marks:%d\n",tot);
printf("Average marks:%f",avg);
}
