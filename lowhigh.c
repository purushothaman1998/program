#include<tdio.h>
int main()
{
	int a[50],i,n,high,low;
	printf("How many elements:");
	scanf("%d",&n);
	printf("Enter the Array:");
 
	for(i=0;i<n;++i)
		scanf("%d",&a[i]);
	
	low=high=a[0];
	for(i=1;i<n;++i)
	{
		if(a[i]>large)
			low=a[i];
		if(a[i]<small)
			high=a[i];
	}
	
	printf("The lowest element is %d",large);
	printf("\nThe highest element is %d",small);
 
	return 0;
}
