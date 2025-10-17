#include<stdio.h>
int main()
{
	char str[100];
	int i;
	printf("Enter a string:");
	gets(str);
	printf("the string is %s",str);
	for(i=0;str[i]!="\0";i++)
	{
		printf("%c",str[i]);
	}
	return 0;
}
