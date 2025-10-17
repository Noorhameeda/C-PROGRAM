#include<stdio.h>
int main()
{
	int a,b,n;
	printf("enter any number:");
	scanf("%d\n%d",&a,&b);
	for(n=a;n<=b;n++)
	{
	if(n==1)
	{ 
	printf("ONE\n");
    }
    else if(n==2)
	{ 
	printf("TWO\n");
    }
     else if(n==3)
	{ 
	printf("THREE\n");
    }
     else if(n==4)
	{ 
	printf("FOUR\n");
    }
     else if(n==5)
	{ 
	printf("FIVE\n");
    }
     else if(n==6)
	{ 
	printf("SIX\n");
    }
     else if(n==7)
	{ 
	printf("SEVEN\n");
    }
      else if(n==8)
	{ 
	printf("EIGHT\n");
    }
      else if(n==9)
	{ 
	printf("NINE\n");
    }
     else 
	{ 
	if(n%2==0)
	printf("EVEN NUMBER\n");
	else
	printf("ODD NUMBER\n");
    }
   }
    return 0;
}
