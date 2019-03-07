  
#include <stdio.h>
int main(void) 
{
	int ko,m,p;
	scanf("%d %d %d",&ko,&m,&p);
	int vol,ta;
	vol=ko*m*p;
	ta=2*((ko*m)+(m*p)+(p*ko));
	printf("\n%d",vol);
	printf("\n%d",ta);
  }
