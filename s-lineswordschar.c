//count lines,characters,words
#include<stdio.h>
#include<string.h>
int main()
{
    int i,word=1,line=1,ch=0;
    char s[100];
    printf("enter the string\n");
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
    printf("no.of lines=%d\n",line);
    printf("no.of words=%d\n",word);
    printf("no.of characters=%d\n",ch);
}