//merge two files into third file
#include<stdio.h>
int main()
{
  FILE *fp1=fopen("sanju.txt","r");
  FILE *fp2=fopen("abc.txt","r");
  if(fp1==NULL && fp2==NULL)
  {
   printf("files not found\n");
   return 0;
    }
  FILE *fp3=fopen("fp.txt","w");
  char ch;
  while((ch=getc(fp1))!=EOF)
  {
   putc(ch,fp3);
    }
   while((ch=getc(fp2))!=EOF)
   {
    putc(ch,fp3);
     }
    printf("files copied succesfully\n");
    fclose(fp1);
    fclose(fp2);
    return 0;
 }
