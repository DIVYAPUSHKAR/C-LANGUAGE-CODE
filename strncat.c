#include<stdio.h>
#include<string.h>
int main()
{
int n1,n2;
printf("enter array sizes");
scanf("%d%d",&n1,&n2);
getchar();
char s1[n1],s2[n2];
printf("enter string 1");
fgets(s1,sizeof(s1),stdin);
printf("enter string 2");
fgets(s2,sizeof(s2),stdin);
printf("strcpy=%s",strncat(s1,s2,5));
return 0;
}
