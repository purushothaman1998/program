#include <stdio.h>

int main(void) {
	char a[100];
	scanf("%s",&a);
	if(a[0]=='s' || a[0]=='S')
	{
		printf("yes");
	}
	else
	{
		printf("No");
	}
	return 0;
}
