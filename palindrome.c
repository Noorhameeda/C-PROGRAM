#include<stdio.h>
int main()
{
	int n,s=0,r;
	int q = n;
	printf("enter n value:");
	scanf("%d",&n);
	while (n>0)
	{
		r = n%10;
		s = s*10+r;
		n = n/10;
	}
	if (q==s)
	{
	printf("\n%d is a palindrome number",s);
	}
	else
    {
    	printf("\n%d is not a palindrome number",s);
	}
	return 0;
}
