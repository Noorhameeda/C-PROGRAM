#include<stdio.h>
int main()
{
	int a[20],n,i,flag,key,pos;
	printf("enter size of an array");
	scanf("%d",&n);
	printf("enter %d elements\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter elements to be search:\n");
	scanf("%d",&key);
	flag =0;
	for(i=0;i<n;i++)
	{
		if(key==a[i])
	{ 
	 flag =1;
	 pos =i+1;
	 break;
    }
	}
    if(flag == 1)
{
	printf("elements %d found at %d postion",key,pos);
}
else
{
	printf("elements %d  not found",key);
}
return 0;
}
