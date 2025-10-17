#include<stdio.h>
int main()
{
	char s1[100];
	printf("enter any string:");
	scanf("%[^\n]",&s1);
	printf("string given \n%s",s1);
	strupr(s1);
	printf("\n%s",s1);
	return 0;
}
