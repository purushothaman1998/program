#include <stdio.h>
int main()
{
    long long m;
    int count = 0;
    printf("Enter an integer: ");
    scanf("%lld", &m);
    while(n != 0)
    {
        // m = m/10
        m /= 10;
        ++count;
    }
    printf("Number of digits: %d", count);
}

