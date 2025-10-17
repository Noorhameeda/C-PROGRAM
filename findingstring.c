//counting numbers
//coded by Sk.Noor hameeda
#include<stdio.h>
int main()
{
	char s1[100];
	int i,alpha=0,upper=0,lower=0,vowel=0,conts=0,digit=0,spaces=0,spl=0;
	printf("enter any string:");
	scanf("%[^\n]",s1);
	for(i=0;s1[i]!='\0';i++)
	{
	if((s1[i]>='A'&&s1[i]<='Z')||(s1[i]>='a'&&s1[i]<+'z'))
	{
		alpha++;
	if(s1[i]>='A'&&s1[i]<+'Z')
	{
		upper++;
	}
	if(s1[i]>='a'&&s1[i]<+'z')
	{
		lower++;
	}
	switch(s1[i])
	{
		case 'a':case 'A':
		case 'e':case 'E':
		case 'i':case 'I':
		case 'o':case 'O':
		case 'u':case 'U':
		vowel++;
		break;
		default:
		conts;					
	}
	}//end of if
	else if	(s1[i]>='0'&&s1[i]<+'9')
	{
		digit++;
	}
	else if	(s1[i]==' ')
	{
		spaces++;
	}
	else
	{
		spl++;
	}
	}//end of for
	printf("\n number of alphats %d",alpha);
	printf("\n number of upper case %d",upper);
	printf("\n number of lower case %d",lower);
	printf("\n number of digits %d",digit);
	printf("\n number of spaces %d",spaces);
	printf("\n number of specal charcher %d",spl);
	printf("\n24B11CS411");
	return 0;
}
