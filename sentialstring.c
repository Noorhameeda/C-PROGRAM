//sentential string
//This is coded by sk.Noor hameeda
#include<stdio.h>
int main()
{
	char s1[100];
	int i;
	printf("enter any string:");
	scanf("%[^\n]",s1);
	for(i=0;s1[i]!='\0';i++)
	{
	if(s1[i]>='a'&&s1[i]<='z')
	{
		s1[i]=s1[i]-32;
	}
	printf("\n sentical string is%s",s1);
	printf("\n24B11CS411");
	return 0;
}
}
