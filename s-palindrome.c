//string palindrome or not
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char s[100];
    printf("enter a string\n");
    scanf("%s",s);
    int l=strlen(s)-1;
    int n=0;
    while(l>n)
    {
        if(s[n++]!=s[l--])
        {
          printf("%s is not a palindrome\n",s);
          exit(0);
        }
    } 
    printf("%s is a palindrome\n",s);  
}
