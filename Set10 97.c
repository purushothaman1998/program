#include <stdio.h>
int main(void) 
{
int m,rem,rev=0;
scanf("%d",&m);
printf("reverse the number :");
while(m!=0)
{
rem=m%10;
rev=rev*10+rem;
m=m/10; 
} 
printf("\n%d",rev);
return 0;
}
