#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],c[10][10];
	int m,n,i,j,p,q,k;
	printf("enter number of rows and columns A");
	scanf("%d %d",&m,&n);
		printf("enter number of rows and columns B");
	scanf("%d %d",&p,&q);
	if(n==p)
	{//read elements int matA
		printf("enter %d elements into A\n",m*n);
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
			printf("enter number of rows and columns B\n",p*q);
			for(i=0;i<p;i++)
			{
			for(j=0;j<q;j++)
			{
				scanf("%d",&b[i][j]);
		   }
	}//permorming matrix multiplication
	for(i=0;i<m;i++)
		{
			for(j=0;j<q;j++)
			{
				c[i][j] =0;
				for(k=0;k<n;k++)
				{
			 c[i][j]= c[i][j] + a[i][k]*b[k][j];
			}
	        	}
		}//display reulitng matrix
		printf("matrix multiplication elements are \n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				printf("%d ",c[i][j]);
			}
			printf("\n");
		}
	}//end of it 
	else
	{
		printf("matrix multiplication is not possible");
	}
	return 0;
}
