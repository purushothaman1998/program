#include <stdio.h>

int main ()
{
	int i,a,k,s[20];
	scanf("%d %d",&a,&k);
	for(i=1;i<=a;i++)
	{
		scanf("%d",&s[i]);
	}
	for(i=1;i<=a;i++)
	{
		while(i==k)
		{
			printf("\n%d",s[i]);
			break;
		}
    
	}

}
