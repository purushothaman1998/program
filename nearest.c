#include <stdio.h>

int main()
{
    int i, m;
    printf("Print all even numbers till: ");
    scanf("%d", &m);

    printf("All even numbers from 1 to %d are: \m", m);
    for(i=2; i<=m; i+=2)
    {
        printf("%d\m",i);
    }

    return 0;
}
