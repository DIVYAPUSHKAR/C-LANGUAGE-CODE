//string2 in string1
#include<stdio.h>
int main()
{
 int i;
 char s1[100],s2[100];
 printf("enter string 1\n");
 scanf("%s",s1);
 printf("enter string 2\n");
 scanf("%s",s2);
 for(i=0;s2[i]!='\0';i++)
 {
  s1[i]=s2[i];
   }
  s2[i]='\0';
  printf("after copying s2 in s1\n%s\n",s1);
  return 0;
}
