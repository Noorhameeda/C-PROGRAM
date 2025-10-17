#include<stdio.h>
int main()
{
	int p,t,r;
	float SI;
	printf("enter p,t,r values:");
	scanf("%d,%d,%d",&p,&t,&r);
	printf("p=%d,t=%d,r=%d",p,t,r);
	 SI=(p*t*r)/100;
	 printf("\n SI is %f",SI);
	return 0;
}
