#include<stdio.h>
int main()
{
	int i,j;
	printf("enter i value:");
	scanf("%d",&i);
	j = (i++) + (++i);
	printf("j is %d",j);
	return 0;
}
