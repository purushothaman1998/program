#include <stdio.h>

int main(void) 
{
	int n1,n2,sum;
	printf("enter the num1:");
	scanf("%d",&n1);
	printf("enter the num2:");
	scanf("%d",&n2);
	sum=n1+n2;
	if(sum%2==0)
	{
		printf("\neven");
	}
	else
	{
		printf("\nodd");
	}
	return 0;
}
