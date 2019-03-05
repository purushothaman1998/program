#include <stdio.h>
int main()
{
    int j,k;
    scanf("%d",&k);
    for(j=1;j<k;j++)
    {
        if(k%j==0)
        
        {
            printf("%d",j);
        }
    }
    return 0;
}
