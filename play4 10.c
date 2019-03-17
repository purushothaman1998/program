#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,c=0,j;
clrscr();
printf("\nEnter a number :");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
for(j=n;j>=0;j--)
{
if((i*1)+(j*2)==n)
{
c=c+1;
}
}
}
printf("\nBy using 1's and 2's we make %d in %d ways.",n,c);
getch();
}
