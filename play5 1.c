#include <stdio.h>
#include <conio.h>
int main() 
{
	int n,k,i,res=1;
	scanf("%d %d",&n,&k);
	for(i=1;i<=n;i++)
	{
	    res=res*k;
	    if(res==n)
	    {
	        printf("yes..its the power of %d\n",k);
	        break;
	    }
	}
	if(res>n)
	{
	    printf("no");
	}
	return 0;
}
