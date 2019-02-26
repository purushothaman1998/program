#include <stdio.h>
int main()
{
    double p1, p2, p3;

    printf("Enter three different numbers: ");
    scanf("%lf %lf %lf", &p1, &p2, &p3);

    if( p1>=p2 && p1>=p3 )
        printf("%.2f is the largest number.", p1);

    if( p2>=p1 && p2>=p3 )
        printf("%.2f is the largest number.", p2);

    if( p3>=p1 && p3>=p2 )
        printf("%.2f is the largest number.", p3);

    return 0;
}
