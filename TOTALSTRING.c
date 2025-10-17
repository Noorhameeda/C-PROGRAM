#include<stdio.h>
#include<string.h>
int main()
{
	char str[100],dest[100];
	int i,len;
	printf("Enter a string:");
	gets(str);
	printf("string is %s",str);
	len =strlen(str);
	printf("\n length %d",len);
	strcpy(dest,str);
	printf("\n copied string is %s",dest);
	strrev(dest);
	printf("\n revered string is %s",dest);
	strcat(str,dest);
	printf("\n after joining is %s",str);
	return 0;
}
