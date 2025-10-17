#include<stdio.h>
int main()
{
	char s2[]="HELLO";
	char s1[]="WORLD";
	int i=0,result=0;
	while(s1[i]!='\0'&&s2[i]!='\0')
	{
		if(s1[i]!=s2[i])
		{
			result=s1[i]-s2[i];
			break;
		}
		i++;
	}
	if(result==0)
	{
		printf("string are equal\n");
	}
	else if(result>0)
	{
	printf("frist string is greater\n");
    }
    else
    {
    	printf("second string is greater\n");
	}
	return 0;
}
