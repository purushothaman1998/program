#include <stdio.h>
#include <conio.h>
int main() 
{
	int n,k,i,a[10];
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	    if(a[i]==k)
	    {
	        printf("yes");
	    }
	}
	return 0;
}
