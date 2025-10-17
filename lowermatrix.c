#include<stdio.h>
int main()
{
	int a[10][10],m,n,i,j;
	printf("enter no. of rows and cols of A:");
	scanf("%d%d",&m,&n);
	if(m==n)
	{
	printf("enter %d elements\n",m*n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		scanf("%d",&a[i][j]);
	    }
	}
	printf("matrix elements are:\n");
	for(i=0;i<n;i++)
   {
   	for(j=0;j<=i;j++)
	{
	printf("%d ",a[i][j]);
    }
    printf("\n");
     }
   }
		return 0;
}
