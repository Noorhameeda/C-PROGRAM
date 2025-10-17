#include<stdio.h>
int fact(int n)
{
	if(n==0) //base
	return 1;
	else
	return (n*fact(n-1)); //recurrsive cell
}
int main()
{
	int x,n;
	scanf("%d",&n);
	printf("%d",fact(n));
	return 0;
}
