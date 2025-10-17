#include<stdio.h>
int main()
{
	int s1,s2,s3,s4,s5;
	float total,averge;
	printf("enter s1,s2,s3,s4,s5 values:");
	scanf("%d %d %d %d %d",&s1,&s2,&s3,&s4,&s5);
	total = s1+s2+s3+s4+s5;
	averge=(total)/5;
	printf("total=%f,averge=%f",total,averge);
	return 0;
}
