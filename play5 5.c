#include <stdio.h>
#include <conio.h>
int main(void)
{
	int p,a,l,w,i,j,pp,c=0;
	printf("\nEnter the perimeter of Rectangle : ");
	scanf("%d",&p);
	printf("\nEnter the area of Rectangle : ");
	scanf("%d",&a);
	pp=p/2;
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=pp;j++)
		{
			if(i+j==pp&&i*j==a)
			{
				c=1;
				break;
			}
		}
	}
	if(c==1)
	{
		printf("\nYES!!!");
	}
	else if(c==0)
	{
		printf("\nNO!!!");
	}
	return 0;
}
