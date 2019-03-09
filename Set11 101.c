#include <stdio.h>

#include<string.h>
int main()
{ 
    char a[50];
	int n,a,l,i,count=0;
	scanf("%s",&a);
	scanf("%d",&l);
	n=strlen(a);
	for(i=n-1;i>=0;i--)
	{
	    printf("%c",a[i]);
	    count++;
	    if(1==count)
	    {
	        break;
	    }

	}
	return 0;
}
