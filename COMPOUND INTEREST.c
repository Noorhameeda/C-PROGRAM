#include<stdio.h>
int main()
{
    float p,t,r,CI;
	printf("enter p value");
	scanf("%f",&p);
	printf("\nenter t value");
	scanf("%f",&t);
	printf("\nenter r value");
	scanf("%f",&r);
	CI = p*(pow((1+r/100),t));
	printf("\n CI is %f",CI);
	return 0;
}
