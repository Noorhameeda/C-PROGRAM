#include<stdio.h>
int main()
{
	int r,s=0,t,n;
	printf("enter n value:");
	scanf("%d",&n);
	t=n;
	while (t>0)
	{
		r = t%10;
		s = s+r;
		t = t/10;
	}
	printf("\n sum of digits of n is %d",s);
	return 0;
}
