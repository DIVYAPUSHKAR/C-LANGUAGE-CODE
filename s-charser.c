//searching character
#include<stdio.h>
#include<string.h>
int main()
{
    int i,f=0;
    char s[20],ch;
    printf("enter a string\n");
    gets(s);
    int l=strlen(s);
    printf("enter a character\n");
    scanf("%c",&ch);
    for(i=0;i<l;i++)
    {
        if(s[i]==ch)
        {
            f=1;
            break;
        }
    }
    if(f==1)
    {
        printf("index of %c is %d\n",ch,i);
    }
    else
    printf("%d\n",-1);
}
