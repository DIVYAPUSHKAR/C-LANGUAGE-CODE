#include<stdio.h>
#include<string.h>
int main()
{
  int i,line=1,word=1,ch=0;
 char s[100];
 printf("enter a string\n");
 scanf("%[^*]s",s);
 int l=strlen(s);
 for(i=0;s[i]!='\0';i++)
 {
   if(s[i]=='\n')
   {
     line++;
     word++;
      }
   else if(s[i]==' ')
   {
    word++;
     }
   else
   ch++;
   }
   printf("lines=%d\n",line);
   printf("words=%d\n",word);
   printf("characters=%d\n",ch);
 }
