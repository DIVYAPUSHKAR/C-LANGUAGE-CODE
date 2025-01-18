//reading a file  using files
#include<stdio.h>
#include<stdlib.h>
int main()
{
  FILE *fp=NULL;
  char ch[50];
  fp=fopen("sanju.txt","r");
  if(fp==NULL)
  {
   printf("file not found\n");
   exit(1);
    }
    while(!feof(fp))
    {
      fgets(ch,12,fp);
      printf("%s\n",ch);
         }
  fclose(fp);
  return 0;
 }
