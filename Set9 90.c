#include<stdio.h>
#include<string.h>
int main() 
{
	char ch[50];
	int i,n;
	printf("\nenter the alphanumeric string:\n");
	scanf("%s",ch);
	n=strlen(ch);
	for(i=0;i<n;i++)
	{
		if(ch[i]>='0' && ch[i]<='9')
		{
			printf("%c",ch[i]);
		}
	}
}
