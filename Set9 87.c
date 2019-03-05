#include <stdio.h>
int main() 
{
	int m,n,i,gcd;
	scanf("%d %d",&m,&n);
	for(i=0 ;i<=m && i<=n; i++)
	{
		if(m%i==0 && n%i==0)
		{
			gcd=i;
		}
	}
	printf("%d",gcd);
 
	return 0;
}
