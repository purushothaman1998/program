#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
  char ch[100];
  int len,i;
  scanf("%s",ch);
  len=strlen(ch);
  for(i=0;i<len;i++)
  {
    if(i%2==0)
    {
      
      printf("%c",ch[i]);

    }
  }
  printf("\n");
   for(i=0;i<len;i++)
  {        
    if(i%2!=0)
    {
     
      printf("%c",ch[i]);
      
    }
  
  }
  return 0;
  }
