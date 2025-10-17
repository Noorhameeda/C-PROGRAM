#include<stdio.h>
int main()
{
	int a[20],n,i,pos,key;
	printf("enter size of an array");
	scanf("%d",&n);
	printf("enter %d elements\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter elements to be inserted:\n");
	scanf("%d",&key);
	printf("enter position to be inserted:\n");
	scanf("%d",&pos);
	n=n+1;
	for(i=n-1;i>=pos;i--)
	{
		a[i]=a[i-1];
	}
		a[i]=key;
			printf("enter after to be inserted:\n",n);
			for(i=0;i<n;i++)
			{
				printf("%d",a[i]);
			}
			a[i] = key;
			printf("elements after insertion:\n");
			for(i=0;i<n;i++)
			{
				printf("%d ",a[i]);
			}
			return 0;
		}
