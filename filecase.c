//lowercase to upper in files
#include<stdio.h>
int main()
{
 FILE *f1;
 FILE *f2;
 f1=fopen("sanju.txt","r");
 f2=fopen("abc.txt","w");
 if(f1==NULL)
 {
  printf("file not found\n");
   return 0;
    }
  char s;
  while((s=fgetc(f1))!=EOF)
  {
    //s=fgetc(f1);
    if(s>='a' && s<='z')
    {
      fputc(s-32 ,f2);
     }
    else if(s>='A' && s<='Z')
    {
      fputc(s+32 ,f2);
       }
   }
  printf("file copied succesfully\n");
  fclose(f1);
  fclose(f2);
  return 0;
}
