#include<stdio.h>
int main()
{
 int i,j;
 char s[200];
 printf("enter a string\n");
 gets(s);
 for(i=0;s[i]!='\0';i++)
 {
  while(!(s[i]>='A' && s[i]<='Z') && !(s[i]>='a' && s[i]<='z') && !(s[i]=='\0'))
    {
     for(j=i;s[i]!='\0';j++)
      {
       s[j]=s[j+1];
        }
       s[j]='\0';
      }
  }
  printf("after deleting characters\n");
  printf("%s\n",s);
  return 0;
}
