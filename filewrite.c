//copying a file into other file using files
#include<stdio.h>
#include<stdlib.h>
int main()
{
  FILE *fp;
  char s[50];
  fp=fopen("sanju.txt","w");
  if(fp==NULL)
  {
   printf("file not exist\n");
   exit(1);
    }
  printf("enter a name\n");
  scanf("%[^@]s",s);
  //fputs(s,fp);
  fprintf(fp,"%s",s);
  printf("file copied succesfully\n");
  fclose(fp);
 }
