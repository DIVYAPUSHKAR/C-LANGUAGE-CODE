//concatination of 1 string into another
#include<stdio.h>
#include<string.h>
int main()
{
 int i;
 char s1[100],s2[100];
 printf("enter string 1\n");
 scanf("%s",s1);
 printf("enter string 2\n");
 scanf("%s",s2);
 int l1=strlen(s1);
 int l2=strlen(s2);
 for(i=0;i<l2;i++)
 {
  s1[l1+i]=s2[i];
   }
 s2[l1+i]='\0';
 printf("after concatination of both strings\n%s\n",s1);
 return 0;
} 
