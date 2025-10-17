#include<stdio.h>
int main()
{
	int n,t,r,result=0;
	printf("ENTER ANY NUMBER:");
	scanf("%d",&n);
	t=n;
	while(t>0)
	{
		r=t%10;
		result =result +r*r*r;
		t=t/10;
	}
	if(result ==n)
	{
		printf("%d is AN ARMSTRONG NUMBER",n);
	}
	else
	{
		printf("%d isNOT AN ARMSTRONG NUMBER",n);
	}
	return 0;
}
