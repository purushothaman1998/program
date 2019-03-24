#include<stdio.h>
#include<conio.h>
void main()
{
    int n,b[10],i,a;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    
        scanf("%d",&b[i]);
    
    for(i=0;i<n;i++)
    
        if(b[i]==0)
        {
          a=i;
        }
            for(i=0;i<a;i++)
            printf("%d",b[i]);
        
    
}
