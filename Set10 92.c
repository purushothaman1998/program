#include <stdio.h>
int main(void) 
{
	int m,s[50],i,sum=0;
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		scanf("%d",&s[i]);
		sum=sum+s[i];	
	}
	printf("\n%d",sum);
	return 0;
}
