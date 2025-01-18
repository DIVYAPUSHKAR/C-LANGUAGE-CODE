#include<stdio.h>
#include<string.h>
int main()
{
char s1[10],s2[10];
printf("enter your name \v");
printf("\t");
fgets(s1,sizeof(s1),stdin);
printf("enter husband name\v");
printf("\t");
fgets(s2,sizeof(s2),stdin);
printf("OUR WORLD BECOMES  \v   %s",strncpy(s2,s1,3));
return 0;
}
