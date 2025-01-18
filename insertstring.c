#include<stdio.h>
#include<string.h>
int main()
{
 int p,i;
 char s1[50],s2[50];
 printf("enter a string\n");
 //gets(s1);
 fgets(s1,sizeof(s1),stdin);
 printf("enter another string\n");
 //gets(s2);
 fgets(s2,sizeof(s2),stdin);
 printf("enter position to insert\n");
 scanf("%d",&p);
 int l1=strlen(s1);
 int l2=strlen(s2);
 for(i=p;i<l1;i++)
 {
  s1[l2+i]=s1[i];
   }
 for(i=0;i<l2;i++)
 {
  s1[p+i]=s2[i];
  }
 printf("string with sub string\n");
 for(i=0;i<l1+l2;i++)
 {
  printf("%c",s1[i]);
 }
 printf("\n");
}
