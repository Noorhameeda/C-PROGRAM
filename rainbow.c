#include<stdio.h>
int main()
{
	char n;
	printf("choose any character (VIBGYOR):");
	scanf("%c",&n);
	if(n=='v'||n=='V')
	{ 
	printf("violet\n");
    }
    else if(n=='i'||n=='I')
	{ 
	printf("indigo\n");
    }
     else if(n=='b'||n=='B')
	{ 
	printf("blue\n");
    }
     else if(n=='g'||n=='G')
	{ 
	printf("green\n");
    }
     else if(n=='y'||n=='Y')
	{ 
	printf("yellow\n");
    }
     else if(n=='o'||n=='O')
	{ 
	printf("orange\n");
    }
     else if(n=='r'||n=='R')
	{ 
	printf("red\n");
    }
     else 
	{ 
	printf("invalid colour!!\n");
    }
    printf("thank you!\nvisit again");
    return 0;
}
