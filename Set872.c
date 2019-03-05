#include <stdio.h>
int main(void) 
{
char c2[50];
int i=0,flag=0;
scanf("%c",c2);
while(c2[i]!='\0')
{
if(c2[i]=='a'||c2[i]=='e'||c2[i]=='i'||c2[i]=='o'||c2[i]=='u'||c2[i]=='A'|c2[i]=='E'||c2[i]=='I'||c2[i]=='O'||c2[i]=='U')
flag=1;
i++;
}
if(flag==1)
{
	printf("\nyes");
}
else
{
	printf("\n no");
}
return 0;
}
