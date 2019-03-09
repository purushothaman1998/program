#include<stdio.h>
int main(void)
{
    char str[100];
    printf("Enter the string");
    gets(str);
    int length=strlen(str);
    for(int i=0;i<length;i=i+2)
    {
    	if(str[i]!='\0')
    	{
    		int temp;
    		temp=str[i];
    		str[i]=str[i+1];
    		str[i+1]=temp;
    	}
    }
    printf("%s",str);
    return 0;
}
