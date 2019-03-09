#include<stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    while(n%2==0)
    {
        n=n/2;
    }
    if(n%2!=0)
    {
    printf("%d",n);
    }
    return 0;
}
