#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) 
{
 int a,b,c,k,s,i;
 scanf("%d\t%d\t%d",&a,&b,&c);
 s=(c*(2*a+(c-1)*b))/2;
  k=a+(c-1)*b;
  for(i=a;i<=k;i++)
  {
    if(i==k)
    {
      printf("%d",s);
    }
  }
}
