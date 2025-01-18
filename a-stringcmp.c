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
 for(i=0;i<l1;i++)
 {
 if(s1[i]==s2[i])
  {
   printf("both strings are equal\n");
    break;
    }
  else
  {
   printf("both strings are not equal\n");
    break;
    }
  }
} 
