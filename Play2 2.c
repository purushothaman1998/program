#include<stdio.h>
void main()
{
    int i,j,n,n1;
    int arr[1000];
    int arr2[1000];
   scanf("%d%d",&n,&n1);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    while(n1!=0)
    {
        for(i=0;i<n-1;i++)
        {
            arr2[i+1]=arr[i];
        }
        arr2[0]=arr[n-1];
        n1--;
        for(i=0;i<n;i++)
        {
            arr[i]=arr2[i];
        }
    }
    
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}
