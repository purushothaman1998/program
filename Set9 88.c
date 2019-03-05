#include<stdio.h>
int main() 
{
	int m,n,lcm;
	scanf("%d %d",&m,&n);
	lcm=(m>n)?m:n;
	while(1)
	{
		if(lcm%m==0 && lcm%n==0)
		{
			printf("\n%d",lcm);
			break;
		}
	lcm++;
	}
	return 0;
}
