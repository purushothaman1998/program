#include <stdio.h>

int main() 
{
	char ch[100];
	int k,i;
	printf("enter the string:");
	scanf("%s",&ch);
	printf("enter the number:");
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		printf("\n%s",ch);
	}
	return 0;
}
