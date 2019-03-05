#include <stdio.h>

int main() 
{
	int number;
	printf("enter the number:");
	scanf("%d",&number);
	if(number>=1 && number<=10)
	{
		printf("\n yes");
	}
	else
	{
		printf("\n no");
	}
	return 0;
}
