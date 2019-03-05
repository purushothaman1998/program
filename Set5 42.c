#include<stdio.h>
#include<string.h>
int main() 
{
	char s1[50],s2[50];
	int n1,n2;
	printf("enter the string1:");
	scanf("%s",&s1);
	printf("enter the string2:");
	scanf("%s",&s2);
	n1=strlen(s1);
	n2=strlen(s2);
	if(n1>n2)
	{
		printf("\n%s",s1);
	}
	else if(n2>n1)
	{
		printf("\n%s",s2);
	}
	else
	{
		printf("\n %s");
	}
	return 0;
  }
