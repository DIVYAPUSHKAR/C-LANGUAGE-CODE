//standard marks
#include<stdio.h>
int main()
{
int marks;
printf("enter marks");
scanf("%d",&marks);
if(marks<40)
{
 printf("failed");
 }
else if(marks>=40 && marks<60)
{
  printf("second class");
 }
else if(marks>=60 && marks<70)
{
 printf("first class");
 }
else
{
  printf("distinction");
  }
return 0;
}
