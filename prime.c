#include<stdio.h>
int main()
{
	int n,i,flag;
	printf("enter any value:");
	scanf("%d",&n);
	flag=1;
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			flag=0;
			break;
		}
	}
	if(flag==1)
	{
		printf("%d is a prime\n",n);
	}
	else
	{
			printf("%d is not a prime\n",n);
	}
	return 0;
}
