#include <stdio.h>
#include<string.h>
int main() 
{
	int i,j,temp=0;
	char b[100];
	scanf("%s",b);
	for(i=0;b[i]!='\0';i++)
	{
		for(j=i+1;b[j]!='\0';j++)
		{
			if(b[i]>b[j])
			{
				temp=b[i];
				b[i]=b[j];
				b[j]=temp;
			}
		}
	}
	printf("%s",b); 
  }
