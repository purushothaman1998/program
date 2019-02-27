#include<stdio.h>
int main()
{
   int num;

   printf("Enter the number you want to test: ");
   scanf("%d", &num);

   if (checkPowerofTwo(num) == 1)
      printf("\n%d is a power of 2\n", num);
   else
      printf("\n%d is not a power of 2\n", num);

   return 0;
}
int checkPowerofTwo(int x)
{
   if (x == 0)
      return 0;
   while( x != 1)
   {
      if(x % 2 != 0)
         return 0;
         x /= 2;
   }
   return 0;
}
