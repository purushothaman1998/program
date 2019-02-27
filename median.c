#incude<stdio.h>
int main() 
{
   int a[] = {6,3,8,5,1};
   int n = 5;
   int sum,i;

   sort(a,n);
   n = (n+1) / 2 - 1;    
   printf("Median = %d ", a[n]);
    return 0;
}
