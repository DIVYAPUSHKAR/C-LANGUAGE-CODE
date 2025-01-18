//to find length of a string
#include<stdio.h>
#include<string.h>
int main()
{
int n;
printf("enter size ");
scanf("%d",&n);
getchar();
char s[n];
printf("enter string");
fgets(s,sizeof(s),stdin);
//gets(s);
printf("length=%d",strlen(s));
return 0;
}
