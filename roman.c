//roman to value
#include<stdio.h>
#include<string.h>
int main()
{
int i,res;
char r[100];
printf("enter roman value\n");
scanf("%s",r);
int l=strlen(r);
for(i=0;i<l;i++)
{
 switch(r[i])
 {
  case 'I':r[i]=1;
            break;
  case 'V':r[i]=5;
            break;         
  case 'X':r[i]=10;
            break; 
  case 'L':r[i]=50;
            break;   
  }
 }  
 res=r[l-1];
 for(i=l-1;i>0;i--)
 {
 if(r[i]>r[i-1])
  {
   res=res-r[i-1];
   }
 if(r[i]<=r[i-1])
  {
   res=res+r[i-1];
   }
 }  
printf("decimal value is %d\n",res);
}                     
