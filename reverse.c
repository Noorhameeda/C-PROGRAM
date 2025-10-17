#include<stdio.h>
int main()
{
	int a[20],n,i,t;
	printf("enter size of an array");
	scanf("%d",&n);
	printf("enter %d elements\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nelements before reversal\n");
		for(i=0;i<n;i++)
		{
		printf("%d\n",a[i]);	
		}
	for(i=0;i<n/2;i++)
	{
		t=a[i];
		a[i]=a[n-1-i];
		a[n-1-i]=t;
	}
	printf("\nelements after reversal\n");
		for(i=0;i<n;i++)
		{
		printf("%d\n",a[i]);	
		}
		return 0;
}
