#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) 
{
 int a,b,c,z,s,i;
 scanf("%d\t%d\t%d",&a,&b,&c);
 s=(c*(2*a+(c-1)*b))/2;
  z=a+(c-1)*b;
  for(i=a;i<=z;i++)
  {
    if(i==z)
    {
      printf("%d",s);
    }
  }
}
