#include <stdio.h>
#include <math.h>
int main()
{
	int n,a,d,s;
	int N,D,A,S;
	scanf("%d",&n);
	scanf("%d",&a);
	scanf("%d",&d);
  scanf("%d",&s);
	N=n-1;
	D=N*d;
	A=2*a;
	S=A+D;
	s=S*n/2;
	printf("\n%d",s);
	return 0;
}
