  
#include <stdio.h>
#include <conio.h>
#include <math.h>
int main(void) 
{
	float p,r,mj;
	int s,n;
	scanf("%f %d %f",&p,&n,&r);
	mj=((p*n*r)/100);
	s=floor(mj);
	printf("\n%d",s);
	return 0;
}
