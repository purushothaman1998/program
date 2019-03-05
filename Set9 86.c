#include <stdio.h>
#include<string.h>
int main() 
{
	char s[50];
	int i,temp=0;
	printf("\nenter the string:");
	scanf("%s",&s);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]==s[i+1])
		{
			temp=1;
			break;
		}
	}
	if(temp==1)
	{
		printf("\nno");
	}
	else
	{
		printf("\nyes");
	}
	return 0;
}
