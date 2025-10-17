#include<stdio.h>
int main()
{
	int a[20],n,i,s;
	printf("enter size of an array:");
	scanf("%d",&n);
	printf("enter %d elements:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	} s=0;
    for(i=0;i<n;i++)
    {
     s=s+a[i];
	}
	printf("THE SUM OF NUMBERS IS %d",s);
	return 0;
}
