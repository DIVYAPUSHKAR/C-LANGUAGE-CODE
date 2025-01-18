#include<stdio.h>
#include<string.h>
int main()
{
 int p,n,i;
 char s[50];
 printf("enter a string\n");
 gets(s);
 printf("enter position to delete:");
 scanf("%d",&p);
 printf("enter no.of characters to delete:");
 scanf("%d",&n);
 for(i=p+n;s[i]!=0;i++)
 {
  s[i-n]=s[i];
   }
 s[i-n]='\0';
 printf("after deleting %d characters from position %d is %s\n",n,p,s);
}
  
